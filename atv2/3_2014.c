#include <stdio.h>

int main() {
    int totalCasos, linhas, colunas, resultado;

    scanf("%d", &totalCasos);

    for (int caso = totalCasos; caso > 0; caso--) {
        scanf("%d %d", &linhas, &colunas);

        resultado = (-1 * colunas * colunas) + (2 * linhas * colunas) + colunas;
        resultado /= 2;

        if (resultado % 2 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
