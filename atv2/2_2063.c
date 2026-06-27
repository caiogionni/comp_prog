#include <stdio.h>

int main() {
    int totalCasos, maior, menor, diferenca;

    scanf("%d", &totalCasos);

    while (totalCasos > 0) {
        scanf("%d %d", &maior, &menor);

        // Garante que maior >= menor
        if (maior < menor) {
            int temp = maior;
            maior = menor;
            menor = temp;
        }

        if (maior == 1 && menor == 1) {
            printf("1\n");
        } else {
            diferenca = maior - menor;
            printf("%d\n", diferenca);
        }

        totalCasos--;
    }
}
