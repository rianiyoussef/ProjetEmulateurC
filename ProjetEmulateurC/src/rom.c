#include "rom.h"
#include <stdio.h>

bool rom_load(RAM *ram, const char *path)
{
    FILE *f = fopen(path, "rb");
    if (!f) {
        perror("ROM");
        return false;
    }

    uint16_t addr = PROGRAM_START;
    int c;

    while ((c = fgetc(f)) != EOF) {
        if (addr >= RAM_SIZE) {
            fprintf(stderr, "ROM trop grande\n");
            fclose(f);
            return false;
        }
        ram_write(ram, addr, (uint8_t)c);
        addr++;
    }

    fclose(f);

    if (addr == PROGRAM_START) {
        fprintf(stderr, "ROM vide\n");
        return false;
    }

    printf("ROM chargée (%u octets)\n", (unsigned)(addr - PROGRAM_START));
    return true;
}
