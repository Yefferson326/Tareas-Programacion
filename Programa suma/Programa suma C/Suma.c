#include <stdio.h>

int main () {

    int number_one;
    int number_two;
    int number_three;
    int result;

    printf("¡Bienvenidos este Programa suma tres numeros! \n");
    
    printf ("Ingrese el primer número: ");
    scanf ("%d", &number_one);

    printf("Ingrese el segundo número: ");
    scanf("%d", &number_two);

    printf("Ingrese el tercer número: ");
    scanf("%d", &number_three);

    result = number_one + number_two + number_three ;

    printf("El resultado de %d + %d + %d es %d",number_one, number_two, number_three, result);

    return 0;
}