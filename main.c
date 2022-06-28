#include <stdio.h>
#include <stdlib.h>


int main()
{
    int valor1 = 0, valor2 = 0;
    while(valor1 != 999){
        printf("Digite um valor!\n");
        scanf("%d", &valor1);
        if(valor1 != 999){
            printf("\nDigite o segundo valor!\n");
            scanf("%d", &valor2);

            printf("\na soma desse valor é %d", valor1 + valor2);
            printf("\na subtração desse valor é %d", valor1 - valor2);
            printf("\na multiplicação desse valor é %d\n", valor1 * valor2);
        }else break;
        
    }
    printf("Obrigado por usar!");
}