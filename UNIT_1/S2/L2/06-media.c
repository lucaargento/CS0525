#include <stdio.h>

int main() {
    float a;
    float b;
    float somma;
    float media;

    printf ("Inserisci il primo numero");
    scanf("%f", &a);
   
    printf ("Inserisci il secondo numero");
    scanf("%f", &b);

    somma = a + b;
    media = somma /2 ;
    
    printf("La media è: %f", media);

    return 0;
}