#include "memory.h"
#include <string.h>   // memset
#include <assert.h>   // assert (debug)

void memory_init(Chip8Memory *mem)
{
    // On remet toute la RAM à 0
    memset(mem->data, 0, CHIP8_MEMORY_SIZE);
}

uint8_t memory_read8(const Chip8Memory *mem, uint16_t addr)
{
    // Sécurité : éviter de lire hors de la mémoire
    assert(addr < CHIP8_MEMORY_SIZE);
    return mem->data[addr];
}

void memory_write8(Chip8Memory *mem, uint16_t addr, uint8_t value)
{
    // Sécurité : éviter d'écrire hors de la mémoire
    assert(addr < CHIP8_MEMORY_SIZE);
    mem->data[addr] = value;
}

