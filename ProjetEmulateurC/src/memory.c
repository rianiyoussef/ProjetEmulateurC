#include "memory.h"
#include <string.h>
#include <assert.h>

void ram_init(RAM *ram)
{
    memset(ram->data, 0, RAM_SIZE);
}

uint8_t ram_read(const RAM *ram, uint16_t addr)
{
    assert(addr < RAM_SIZE);
    return ram->data[addr];
}

void ram_write(RAM *ram, uint16_t addr, uint8_t value)
{
    assert(addr < RAM_SIZE);
    ram->data[addr] = value;
}
