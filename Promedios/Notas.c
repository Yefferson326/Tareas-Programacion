#include <stdio.h>

int main (){

    float note_one;
    float note_two;
    float note_three;
    float note_four;
    float note_five;
    float promedio;

    printf("Bienevenido \nEn este programa podra organizar las notas de sus estudiantes y conocer su promedio\n");
    

    printf("ingrese las notas del estudiante\n ");
    printf("1.");
    scanf("%f", & note_one);
    printf("2.");
    scanf("%f", & note_two);
    printf("3.");
    scanf("%f", & note_three);
    printf("4.");
    scanf("%f", & note_four);
    printf("5.");
    scanf("%f", & note_five);

    promedio = (note_one + note_two + note_three + note_four + note_five)/5;

    printf("El promedio de las notas es: %f",promedio);

    return 0;
}