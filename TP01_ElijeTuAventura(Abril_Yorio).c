/*
NOMBRE Y APELLIDO: ABRIL YORIO
El programa debe:
1. Mostrar al usuario un primer fragmento de la historia.
2. Luego, darle entre 2 y 3 opciones de caminos a seguir, 
pidiéndole que elija una escribiendo el número correspondiente (por ejemplo: 1, 2 o 3).
3. Dependiendo de la elección, mostrar un nuevo fragmento y volver a ofrecer opciones.
4. Repetir el paso anterior una última vez, para ya llegar a un fragmento final.
La historia debe tener finales diferentes según los caminos elegidos.

. No es obligatorio usar ciclos, 
pero se valora si validás que el usuario ingrese un número correcto de opción, volviendo a pedirlo si es necesario.
. El programa debe usar principalmente condicionales (if, else if, else, switch) para manejar las elecciones.
*/


#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, opcion, opcion_Final;
    printf("Te despertas en el bosque, pero al mirar el suelo, sentis un frio movimiento...\n");
    printf("No hay pasto: son miles de serpientes entrelazadas que cubren todo el piso.\n");

   do
   {
    
    // Mostrar opciones primero 
    printf("1. Buscar una rama...\n");
    printf("2. Treparse a un arbol...\n");
    printf("3. Encantar serpientes...\n");

      // Elegir opcion
     printf("\nElegi tu opcion: ");
     scanf("%d", &opcion);

     if (opcion < 1 || opcion > 3)
     {
        printf("Opcion invalida. Ingrese una opcion correcta.");
     }

   } while (opcion < 1 || opcion > 3);
   
    


  
    switch (opcion)
    {
    case 1:
        printf("\nAgarraste la rama con miedo, pero las serpientes son rapidas...");
        printf("\nSientes como se te suben por el brazo. ¡Estan llegando a tu cuello!");

        // Opciones finales
        printf("\n1. Sacudirte con fuerza para tirarlas.");
        printf("\n2. Quedarte inmóvil y esperar que sigan de largo.");

        // Mostar que opcion final va a elegir y su desenlace
        printf("\nElegi tu opcion: ");
        scanf("%d", &opcion_Final);

        if (opcion_Final == 1)
        {
            printf("\nFinal: Las tiraste de tu cuerpo y saliste corriendo sin mirar atras.");

        }else if (opcion_Final == 2)
        {
            printf("\nFinal: Tu truco de quedarte inmovil funciono, siguieron avanzando lentamente y pudiste escapar");
        }else
        {
            printf("\nOpcion no valida");
        }
        break;
    
    case 2:
       printf("\nSubiste al arbol a toda prisa. En el camino, agarraste una rama rota y te lastimaste la mano.");
       printf("\nAl llegar al pico del arbol, ignoras el dolor porque ves una luz a lo lejos.");

       //  Opciones finales
       printf("\n1. Gritar pidiendo ayuda hacia la luz.");
       printf("\n2. Intentar saltar al arbol de al lado para acercarte a la luz.");


        // Mostar que opcion final va a elegir y su desenlace
        printf("\nElegi tu opcion: ");
        scanf("%d", &opcion_Final);

        if (opcion_Final == 1)
        {
            printf("\nFinal: Te escucho un cuidador del bosque y te salvo con una red");

        }else if (opcion_Final == 2)
        {
            printf("\nFinal: Calculaste mal el salto y te caiste encima de las serpientes.");
        }else
        {
            printf("\nOpcion no valida");
        }
    break;

    case 3:
       printf("\nEmpezas a silbar una melodia extraña. Miras fijamente a los ojos de la serpiente mas grande.");
       printf("\nLas serpientes se calman y empiezan a abrirte un pasillo en el suelo.");
       
       // Opciones finales
     printf("\n1. Caminar por el pasillo que hicieron.");
       printf("\n2. Pedirles que te lleven con su reina.");

        // Mostar que opcion final va a elegir y su desenlace
        printf("\nElegi tu opcion: ");
        scanf("%d", &opcion_Final);

        if (opcion_Final == 1)
        {
            printf("\nFinal: Seguiste el camino que te hicieron y te perdiste en el bosque.");

        }else if (opcion_Final == 2)
        {
            printf("\nFinal: Te llevaron con su reina, pudiste salir del bosque y terminaste siendo encantador/ar de serpientes.");
        }else
        {
            printf("\nOpcion no valida");
        }

        break;
     default: printf("\nElegiste un camino que no existe y te quedaste congelada del miedo. Fin del juego.");

        break;
    }
    return 0;
}
