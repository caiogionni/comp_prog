#include <stdio.h>

int main() {
    int n1, n2, n3, n4, temp;

    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    // Ordena os 4 números em ordem decrescente (bubble sort manual, 4 passagens)
    for (int passagem = 0; passagem < 4; passagem++) {
        if (n4 < n1) { temp = n4; n4 = n1; n1 = temp; }
        if (n1 < n2) { temp = n1; n1 = n2; n2 = temp; }
        if (n2 < n3) { temp = n2; n2 = n3; n3 = temp; }
    }

    int menor      = n4;
    int diferenca  = n1 - n3;       // diferença entre maior e terceiro
    int resultado1 = n1 - diferenca;
    int resultado2 = n4 - diferenca - resultado1;

    printf("%d %d %d", resultado1, diferenca, resultado2);

    return 0;
}
