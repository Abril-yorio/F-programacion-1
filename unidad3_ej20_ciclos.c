/*
Realizá un programa que permita al usuario ingresar un número de minutos. La computadora
debe mostrar un cronómetro con el formato "mm:ss" desde "00:00" hasta un segundo antes del
minuto ingresado
*/

#include <stdio.h>

int main() {
    int minutos_limite;
    int m, s;

    printf("Ingrese la cantidad de minutos para el cronometro: ");
    scanf("%d", &minutos_limite);

    printf("\n--- Cronometro ---\n");

    // Ciclo para los minutos
    for (m = 0; m < minutos_limite; m++) {
        
        // Ciclo para los segundos (siempre de 0 a 59)
        for (s = 0; s < 60; s++) {
            
            /* 
               Explicación de %02d:
               El '2' dice que queremos que el número ocupe 2 espacios.
               El '0' dice que si el número tiene un solo dígito, lo rellene con un cero a la izquierda.
            */
            printf("%02d:%02d\n", m, s);
            
        }
    }

    return 0;
}