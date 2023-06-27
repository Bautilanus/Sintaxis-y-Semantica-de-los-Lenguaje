#include <stdio.h>
#include "Conversion.h"


 int main(void)
 {
const LOWER = 0;
const UPPER = 300;
const STEP = 20;

for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, GetCelsFromFahr(fahr) );
 }
