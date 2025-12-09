#include <stdio.h>
#include "memory.h"

int main(int argc, char** argv) {
    Chip8Memory mem;

    // Initialiser la RAM à 0
    memory_init(&mem);

    // Ecrire une valeur à l'adresse 0x200 (là où seront les ROMs)
    memory_write8(&mem, CHIP8_PROGRAM_START, 0xAB);

    // Relire cette valeur
    uint8_t v = memory_read8(&mem, CHIP8_PROGRAM_START);

    printf("Valeur à l'adresse 0x%03X = 0x%02X\n", CHIP8_PROGRAM_START, v);

    return 0;
}

