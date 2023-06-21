#include <stdio.h>
#include <stdlib.h>

int main()
{
   float c;

   printf("Digite o Celsius para converter em Farenheit: ");
   scanf("%f", &c);



   printf("%f", (c * 9/8) + 32);

    return 0;
}
