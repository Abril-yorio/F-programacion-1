/*
Realizá un programa que permita al usuario ingresar dos números enteros que representen el
ancho y el alto de una matriz de cruces. La computadora debe mostrar dicha matriz.
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ancho, alto, i, j;
    printf("Ingrese el ancho de la matriz: ");
    scanf("%d", &ancho);
    printf("Ingrese el alto de la matriz: ");
    scanf("%d", &alto);

    printf("\n--- Matriz de Cruces ---\n\n");

    // Ciclo para las filas (Alto)
    for (i = 1; i <= alto; i++) {

        // Ciclo para las columnas (Ancho)
        for (j = 1; j <= ancho; j++) {
            printf("+ "); // Imprimimos la cruz y un espacio

        }
        
        // Cuando termina de dibujar el ancho, saltamos de linea
        printf("\n");
    }
    

    return 0;
}
