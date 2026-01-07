#include <stdio.h>

int main() {
    char Estado[] = "São Paulo";
    char Codigo[] = "A01";
    char Cidade[] = "São Paulo";
    int Populacao = 12325000;
    float Area = 1521.11;
    float PIB = 699.28;
    int Pontos_turisticos = 50;

    char Estado2[] = "Rio de janeiro";
    char Codigo2[] = "B02";
    char Cidade2[] = "Rio de janeiro";
    int Populacao2 = 6748000;
    float area2 = 1200.25;
    float PIB2 = 300.50;
    int Ponto_turisticos2 = 30;

    printf("Estado: %s\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turísticos: %d\n", Pontos_turisticos);

  

return 0;
} 
