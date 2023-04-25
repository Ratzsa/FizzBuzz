#include <stdio.h>
#include "fizzbuzz.h"

int main()
{
    while(1)
    {
        int tal;
        printf("Enter number, 0 to stop: ");
        scanf(" %d", &tal);
        if(tal == 0)
        {
            break;
        }
        char result[10];
        calculateFizzBuzz(tal, result);
        printf("%s\n", result);
    }
        
    return 0;
}