#include <stdio.h>

int main() {
    int totalCasos, pedras;

    scanf("%d", &totalCasos);

    for (int caso = totalCasos; caso > 0; caso--) {
        scanf("%d", &pedras);

        if (pedras % 3 == 0) {
            printf("Second\n");
        } else if ((pedras + 1) % 3 == 0 || (pedras - 1) % 3 == 0) {
            printf("First\n");
        } else {
            printf("Second\n");
        }
    }
}
