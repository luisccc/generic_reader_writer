import cocotb
from cocotb.triggers import RisingEdge, FallingEdge, Timer
from cocotb.clock import Clock
import axi_master
import axi_slave
import logging

from collections import namedtuple

DUTMsg = namedtuple('DUTMsg', ['en_burst', 'burst_len', 'addr', 'len', 'id'])

class TB:
    def __init__(self, dut):
        self.dut = dut

        self.log = logging.getLogger("cocotb.tb")
        self.log.setLevel(logging.INFO)

        cocotb.start_soon(Clock(dut.clk_i, 10, units="ns").start())

    async def cycle_reset(self):
        self.dut.rst_ni.setimmediatevalue(1)
        await RisingEdge(self.dut.clk_i)
        await RisingEdge(self.dut.clk_i)
        self.dut.rst_ni.value = 0
        await RisingEdge(self.dut.clk_i)
        await RisingEdge(self.dut.clk_i)
        self.dut.rst_ni.value = 1
        await RisingEdge(self.dut.clk_i)
        await RisingEdge(self.dut.clk_i)

async def start_read(master, cfg):
    control_addr = 0x0
    addr_addr    = 0x8
    cfg_addr     = 0x10

    control_data = 1 << 2 | (cfg.en_burst << 4) | (cfg.burst_len << 6)
    ar_cfg_data = cfg.len | cfg.id << 11

    attr = axi_master.AxMsg(addr_addr, 0, 3, 0)
    msg = axi_master.WMsg([cfg.addr], [0xFF], 0)
    await master.write(attr, msg)

    attr = axi_master.AxMsg(cfg_addr, 0, 2, 0)
    msg = axi_master.WMsg([ar_cfg_data], [0xF], 0)
    await master.write(attr, msg)

    attr = axi_master.AxMsg(control_addr, 0, 2, 0)
    msg = axi_master.WMsg([control_data], [0xF], 0)
    await master.write(attr, msg)

async def start_write(master, cfg):
    control_addr = 0x0
    addr_addr    = 0x18
    cfg_addr     = 0x20

    control_data = 1 << 3 | (cfg.en_burst << 5) | (cfg.burst_len << 14)
    aw_cfg_data = cfg.len | cfg.id << 11

    attr = axi_master.AxMsg(addr_addr, 0, 3, 0)
    msg = axi_master.WMsg([cfg.addr], [0xFF], 0)
    await master.write(attr, msg)

    attr = axi_master.AxMsg(cfg_addr, 0, 2, 0)
    msg = axi_master.WMsg([aw_cfg_data], [0xF], 0)
    await master.write(attr, msg)

    attr = axi_master.AxMsg(control_addr, 0, 2, 0)
    msg = axi_master.WMsg([control_data], [0xF], 0)
    await master.write(attr, msg)

@cocotb.test()
async def test(dut):
    tb = TB(dut)

    config_intf = axi_master.Master(dut, "config", dut.clk_i, False)
    slv_intf    = axi_slave.Slave(dut, "mst", dut.clk_i, False)

    await tb.cycle_reset()
    await config_intf.init()
    await slv_intf.init()

    cfg = DUTMsg(1, 3, 0x800, 5, 4)
    await start_read(config_intf, cfg)

    cfg = DUTMsg(1, 3, 0x800, 5, 4)
    await start_write(config_intf, cfg)

    await Timer(500, units='ns')
