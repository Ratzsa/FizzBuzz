#include <string.h>
#include <stdio.h>
#include "fizzbuzz.h"

void calculateFizzBuzz(int tal, char *szOutBuffer){
    if( tal % 5 == 0 && tal % 3 == 0  ) strcpy(szOutBuffer,"FizzBuzz");
    else if(tal % 3 == 0  ) strcpy(szOutBuffer,"Fizz");
    else if(tal % 5 == 0  ) strcpy(szOutBuffer,"Buzz");
    else sprintf(szOutBuffer,"%d", tal);
}