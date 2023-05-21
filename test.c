#include <stdio.h>

int main(void) {
  printf("Informe suas 4 notas para ser calculado a média.\n");{
    float nota1, nota2, nota3, nota4;
    
    printf("digite sua 1 nota: ");
    scanf("%f",&nota1);

    printf("digite sua 2 nota: ");
    scanf("%f",&nota2);

    printf("digite sua 3 nota: ");
    scanf("%f",&nota3);

    printf("digite sua 4 nota: ");
    scanf("%f",&nota4);

    float media = (nota1 + nota2 + nota3 + nota4)/4;

    printf("sua media foi de: %.2f\n", media);

    
  }
  return 0;
}