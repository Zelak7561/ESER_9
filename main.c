#include <stdio.h>

int main(void) {
    int x = 0;
    float addendo1;
    float addendo2;
    float risultato;

    printf("Inserire la x: ");
    scanf("%d", &x);

    addendo1 = (x ^ 2) + 3 * x / 0.5 + x;
    addendo2 = (0.1 * x) + 1 / (x ^ 3) + x;
    risultato = addendo1 + addendo2;

    printf("Risultato: %f\n", risultato);


    return 0;
}
