#include <stdio.h>

int main() {

    printf ("Hola mundo");

    int *puntero, n=8;

    puntero = &n;

    printf("\nEl contenido del puntero >> %d", *puntero);

    printf("\nLa direccion de memoria almacenada por el puntero >> %d", puntero);

    printf("\nLa direccion de memoria de la variable >> %d", &n);

    printf("\nLA direccion de memoria del puntero >> %d", &puntero);

    printf("\nTama%co de memoria utilizado por esa variable >> %d",164, sizeof(n));

    getchar();
    return 0;

    getchar();

    return 0;
}