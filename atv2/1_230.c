#include <stdio.h>
#include <math.h>

int main() {
    long long totalCasos, numero, raiz;
    int ehQuadradoPerfeito;

    scanf("%lld", &totalCasos);

    for (int caso = 0; caso < totalCasos; caso++) {
        scanf("%lld", &numero);

        raiz = sqrt(numero);
        ehQuadradoPerfeito = 0;

        // Verifica se numero é quadrado perfeito
        if (raiz * raiz != numero) {
            printf("NO\n");
        } else if (numero == 1) {
            printf("NO\n");
        } else if (raiz % 2 == 0 && numero > 4) {
            // raiz par > 2 não é primo
            printf("NO\n");
        } else {
            ehQuadradoPerfeito = 1;
        }

        // Verifica se a raiz é primo (teste de divisibilidade)
        if (ehQuadradoPerfeito) {
            for (long long divisor = 3; divisor * divisor <= raiz; divisor += 2) {
                if (raiz % divisor == 0) {
                    printf("NO\n");
                    ehQuadradoPerfeito = 0;
                    break;
                }
            }
            if (ehQuadradoPerfeito) {
                printf("YES\n");
            }
        }
    }
}
