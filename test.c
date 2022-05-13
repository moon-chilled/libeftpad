#include <stdio.h>
#include "eftpad.h"

int main() {
	char *x = "abc", y[6];
	eftpad(y, x, 5);
	puts(y);
}
