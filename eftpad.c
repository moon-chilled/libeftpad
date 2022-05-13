#include <stdio.h>
#include "eftpad.h"

void eftpad(char *restrict dst, const char *restrict src, int pad) { eftnpad(dst, -1, src, pad); }
void eftnpad(char *restrict dst, int n, const char *restrict src, int pad) { snprintf(dst, n, "%*s", pad, src); }
