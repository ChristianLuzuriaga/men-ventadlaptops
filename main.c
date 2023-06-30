#include <stdio.h>
#include "funciones.h"

int main() {
    char marcas[MAX_LAPTOPS][MAX_MARCA] = {"HP", "MacBook", "HP", "MacBook"};
    float precios[MAX_LAPTOPS] = {999.99, 1499.99, 799.99, 1999.99};

    int opcion;
    do {
        printf("\nMenú de venta de laptops:\n");
        printf("1. Mostrar laptops disponibles\n");
        printf("2. Vender laptop\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                mostrarLaptops(marcas, precios, MAX_LAPTOPS);
                break;
            case 2:
                venderLaptop(marcas, precios, MAX_LAPTOPS);
                break;
            case 3:
                printf("¡Gracias por utilizar el sistema de venta de laptops!\n");
                break;
            default:
                printf("Opción inválida. Por favor, seleccione una opción válida.\n");
                break;
        }
    } while (opcion != 3);

    return 0;
}
