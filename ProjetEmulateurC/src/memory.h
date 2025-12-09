#ifndef MEMORY_H
#define MEMORY_H

#include <stdint.h>

// Taille totale de la mémoire CHIP-8 (4 KiB)
#define CHIP8_MEMORY_SIZE 4096

// Adresse où commenceront les programmes CHIP-8
#define CHIP8_PROGRAM_START 0x200

// Structure représentant la RAM
typedef struct {
    uint8_t data[CHIP8_MEMORY_SIZE];
} Chip8Memory;

// Met toute la mémoire à 0
void memory_init(Chip8Memory *mem);

// Lit un octet à l'adresse addr
uint8_t memory_read8(const Chip8Memory *mem, uint16_t addr);

// Écrit un octet value à l'adresse addr
void memory_write8(Chip8Memory *mem, uint16_t addr, uint8_t value);

#endif

