#include <stdio.h>

int main() {
    int totalCasos, tamanho, pontosAzul = 0, pontosVermelho = 0;
    char timeVermelho[1001], timeAzul[1001];

    scanf("%d", &totalCasos);

    while (totalCasos > 0) {
        scanf("%d %s %s", &tamanho, timeVermelho, timeAzul);

        for (int rodada = 0; rodada < tamanho; rodada++) {
            if (timeAzul[rodada] > timeVermelho[rodada]) {
                pontosAzul++;
            } else if (timeVermelho[rodada] > timeAzul[rodada]) {
                pontosVermelho++;
            }
        }

        if (pontosAzul > pontosVermelho) {
            printf("BLUE\n");
        } else if (pontosVermelho > pontosAzul) {
            printf("RED\n");
        } else {
            printf("EQUAL\n");
        }

        totalCasos--;
        pontosAzul = 0;
        pontosVermelho = 0;
    }

    return 0;
}
