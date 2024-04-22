#include <stdio.h>

float calcular_media_ponderada(float notas[], int num_notas) {
    float soma = 0;
    int pesos[] = {3, 3, 4};
    int soma_pesos = 0;
    for (int i = 0; i < num_notas; i++) {
        soma += notas[i] * pesos[i];
        soma_pesos += pesos[i];
    }
    return soma / soma_pesos;
}

int main() {
    char disciplinas[3][50];
    float notas[3];
    int i, j;

    for (i = 0; i < 3; i++) {
        printf("Nome da disciplina %d: ", i + 1);
        scanf("%s", disciplinas[i]); 
        
        for (j = 0; j < 3; j++) {
            do {
                printf("%dª nota: ", j + 1);
                scanf("%f", &notas[j]);
                if (notas[j] > 10) {
                    printf("Por favor, digite uma nota entre 0 e 10.\n");
                }
            } while (notas[j] > 10); 
        }
    }

    for (i = 0; i < 3; i++) {
        printf("Disciplina: %s\n", disciplinas[i]);
        
        float media = calcular_media_ponderada(notas, 3);
        printf("Média: %.1f\n\n", media);
    }

    return 0;
}
