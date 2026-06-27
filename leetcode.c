double myPow(double base, long int expoente) {
    double resultado = 1;
    int expoente_negativo = expoente < 0;

    if (expoente_negativo) {
        expoente = -expoente;
    }

    while (expoente > 0) {
        if (expoente % 2 != 0) {
            resultado *= base;
            expoente--;
        } else {
            base *= base;
            expoente /= 2;
        }
    }

    return expoente_negativo ? 1.0 / resultado : resultado;
}
