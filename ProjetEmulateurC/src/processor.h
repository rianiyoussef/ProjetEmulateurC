#ifndef CPU_H
#define CPU_H

#include <stdint.h>
#include "memory.h"

typedef struct {
    uint8_t  V[16];  // registres V0..VF
    uint16_t I;      // registre d'adresse
    uint16_t pc;     // compteur de programme
    RAM     *ram;    // pointeur vers la RAM
    // plus tard : stack, sp, dt, st, display...
} CPU;

void cpu_init(CPU *cpu, RAM *ram);
void cpu_step(CPU *cpu);

#endif