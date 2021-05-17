#include <stdio.h>
#include "include/cpuRegisters.h"

int main() {
    printf("Register Tester: \n");

    registers.A = 'A';
    registers.F = 'F';
    printf("Register AF: %d\n", registers.AF);
    printf("Register A: %d\n", registers.A);
    printf("Register F: %d\n", registers.F);

    return 0;
}
