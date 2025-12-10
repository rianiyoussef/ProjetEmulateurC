#ifndef ROM_H
#define ROM_H

#include <stdbool.h>
#include "memory.h"

bool rom_load(RAM *ram, const char *path);

#endif
