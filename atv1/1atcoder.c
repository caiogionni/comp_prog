#include <stdio.h>

#define MOD 998244353LL

long long mod_pow(long long expoente) {
    long long resultado = 1;
    long long base = 8;

    while (expoente > 0) {
        if (expoente & 1) {
            resultado = (resultado * base) % MOD;
        }
        base = (base * base) % MOD;
        expoente >>= 1;
    }

    return resultado;
}

int main() {
    long long x, y, z;
    scanf("%lld %lld %lld", &x, &y, &z);

    // Calcula x*(x+1), y*(y+1), z*(z+1) mod MOD
    long long soma_x = ((x % MOD) * ((x + 1) % MOD)) % MOD;
    long long soma_y = ((y % MOD) * ((y + 1) % MOD)) % MOD;
    long long soma_z = ((z % MOD) * ((z + 1) % MOD)) % MOD;

    // Inverso modular de 8 (para dividir por 8 no campo modular)
    long long inv8 = mod_pow(MOD - 2);

    long long resposta = (soma_x * soma_y) % MOD;
    resposta = (resposta * soma_z) % MOD;
    resposta = (resposta * inv8) % MOD;

    printf("%lld\n", resposta);
}
