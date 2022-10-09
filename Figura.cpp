#include <stdio.h>
#include <stdlib.h>

// Ejercicio 3.34: Mostrar con "*" el perimetro de un cuadrado en funcion de su lado //

int main() {
      int lado = 0;
      int horizontal = 1;
      int vertical = 1;

      printf("Por favor introduzca la medida del lado (entre 1 y 20): "); scanf("%d", &lado);
      printf("\n");

      // Si se introduce un numero erroneo //
      while (lado < 1 || lado > 20) {
            printf("El numero introducido no es correcto\n\n");
            printf("Por favor introduzca la medida del lado (entre 1 y 20): "); scanf("%d", &lado);
            printf("\n");
            } // Fin while //


     // Si el numero es correcto //

     while (vertical <= lado) {
           while (horizontal <= lado) {
                 if (vertical != 1 && vertical != lado){
                               if (horizontal != 1 && horizontal != lado){
                                             printf("o");
                                             horizontal++; } // fin if 2 //
                               else {
                                    printf("*");
                                    horizontal++;}
                               } // fin if 1 //

                 else {
                 printf("*");
                 horizontal++; }
                 } // fin while 2 //
           horizontal = 1;
           printf("\n");
           vertical++; } // fin while 1 //

     printf("\n");


system("pause");
return 0;
}
