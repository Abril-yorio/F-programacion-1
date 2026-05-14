/*
Realizá un programa que permita al usuario ingresar la cantidad de cierto artículo y el precio
unitario de dicho artículo. Por cada carga debe preguntar si se desea seguir ingresando de la forma
"¿Deseás ingresar otro artículo? [S/N]". La carga de datos finaliza cuando se detecta una
'n' o 'N'. Reutilizá el algoritmo realizado en el ejercicio 12) para validar la opción ingresada. La
computadora debe mostrar el monto total del ticket.
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int articulos;
    float precioArticulo;
    float montoTotal = 0; // 1. Inicializamos en 0
    char opcion;
  

    do
    {
        printf("\n--- Ingreso de Producto ---\n");
         printf("Ingresa el precio unitario: ");
         scanf(" %f", &precioArticulo);
         printf("Cantidad: ");
         scanf("%d", &articulos);

        // 2. Acumulamos: lo que ya tenía + (precio * cantidad)
        // montoTotal = montoTotal + (precioArticulo * articulos);


         do
         {
            printf("¿Deseas ingresar otro numero? [S / N]\n");
            scanf(" %c", &opcion);

            if (opcion != 'S' && opcion != 's' && opcion != 'N' && opcion != 'n')
            {
                printf("Error ");
            }

         } while (opcion != 'S' && opcion != 's' && opcion != 'N' && opcion != 'n');
         

    } while (opcion == 'S' || opcion == 's'); // El programa sigue MIENTRAS la opción sea S);

    // 3. Mostramos el resultado final AFUERA del bucle
    printf("\n--------------------------");
    printf("\nEL MONTO TOTAL ES: $%.2f\n", montoTotal);
    printf("--------------------------\n");
    
    return 0;
}
