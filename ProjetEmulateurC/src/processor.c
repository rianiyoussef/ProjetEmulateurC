#include "cpu.h"
#include <stdio.h>

void cpu_init(CPU *cpu, RAM *ram)
{
    cpu->ram = ram;
    cpu->pc  = PROGRAM_START;
    cpu->I   = 0;

    for (int i = 0; i < 16; ++i) {
        cpu->V[i] = 0;
    }
}

