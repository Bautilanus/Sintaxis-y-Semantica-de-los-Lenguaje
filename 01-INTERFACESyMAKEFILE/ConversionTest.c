#include <stdio.h>
#include <assert.h>
#include "Conversion.h"



 int main(void)
 {
const LOWER = 0;
const UPPER = 300;
const STEP = 20;

for (int fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        float celsius = GetCelsFromFahr(fahr);
        float esperado = (5.0 / 9.0) * (fahr - 32);
        assert(celsius == expected);
 } 
 }
