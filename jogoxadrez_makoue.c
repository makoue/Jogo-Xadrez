#include <stdio.h>

int main() {

    int torre = 1;
    int bispo = 1;

    while (torre <= 5)
    {
        printf("Mover a Torre para a Direita\n", torre);
        torre++;
    }
    
    do
    {
        printf("Mover o bispo para cima\n", bispo);
        printf("Mover o bispo para direita\n", bispo);
        bispo++;
    } while (bispo <= 5);
    
    for (int rainha = 1; rainha <= 8; rainha++)
    {
        printf("Mover a Rainha para a Esquerda\n", rainha);
    }
    
return 0;

}