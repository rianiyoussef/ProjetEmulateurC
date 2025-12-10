#ifndef MEMORY_H
#define MEMORY_H

#include <stdint.h>

#define RAM_SIZE        4096
#define PROGRAM_START   0x200

typedef struct {
    uint8_t data[RAM_SIZE];
} RAM;

void ram_init(RAM *ram);
uint8_t ram_read(const RAM *ram, uint16_t addr);
void ram_write(RAM *ram, uint16_t addr, uint8_t value);

#endif
