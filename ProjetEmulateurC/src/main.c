#include <stdio.h>
#include <stdint.h>
#include "memory.h"
#include "rom.h"

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Usage : %s chemin/rom.ch8\n", argv[0]);
        return 1;
    }

    RAM ram;
    ram_init(&ram);

    if (!rom_load(&ram, argv[1])) {
        return 1;
    }

    printf("Premiers octets en mémoire :\n");
    for (uint16_t addr = PROGRAM_START;
         addr < PROGRAM_START + 16;
         addr++) {
        uint8_t v = ram_read(&ram, addr);
        printf("0x%03X : 0x%02X\n", addr, v);
    }

    return 0;
}
