#include <stdio.h>
#include "funciones.h"

void mostrarLaptops(char marcas[MAX_LAPTOPS][MAX_MARCA], float precios[MAX_LAPTOPS], int numLaptops) {
    printf("Laptops disponibles:\n");
    for (int i = 0; i < numLaptops; i++) {
        printf("%d. Marca: %s, Precio: $%.2f\n", i + 1, marcas[i], precios[i]);
    }
}

void venderLaptop(char marcas[MAX_LAPTOPS][MAX_MARCA], float precios[MAX_LAPTOPS], int numLaptops) {
    int opcion;
    printf("Seleccione la laptop que desea vender (1-%d): ", numLaptops);
    scanf("%d", &opcion);

    if (opcion >= 1 && opcion <= numLaptops) {
        printf("Ha vendido la laptop de marca %s por $%.2f\n", marcas[opcion - 1], precios[opcion - 1]);
    } else {
        printf("Opción inválida.\n");
    }
}
