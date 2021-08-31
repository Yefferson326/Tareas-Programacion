#include <stdio.h>

int main (){

    float noteOne;
    float noteTwo;
    float noteThree;
    float noteFour;
    float noteFive;
    float promedio;

    printf("Bienvenido \nEn este programa podra organizar las notas de sus estudiantes y conocer su promedio\n");
    

    printf("Ingrese las notas del estudiante\n");
    printf("1.");
    scanf("%f", & noteOne);
    if(noteOne >= 0 && noteOne <= 5.0){
        printf("2.");
        scanf("%f", & noteTwo);
        if(noteTwo >= 0 && noteTwo <= 5.0){
            printf("3.");
            scanf("%f", & noteThree);
            if(noteThree >= 0 && noteThree <= 5.0){
                printf("4.");
                scanf("%f", & noteFour);
                if(noteFour >= 0 && noteFour <= 5.0){
                    printf("5.");
                    scanf("%f", & noteFive);
                    if(noteFive >= 0 && noteFive <= 5.0){
                        promedio = (noteOne + noteTwo + noteThree + noteFour + noteFive)/5;
                         if (promedio >= 2.95){
                             printf("El estudiante aprobo la asignatura con un promedio de: %f",promedio);
                         }else{
                             printf("El estudiante reprobo la asignatura con un promedio de: %f",promedio);
                         }

                    }else{
                        printf("Por favor ingrese la nota 5 en el rango de 0 hasta 5.0");
                    }

                }else{
                    printf("Por favor ingrese la nota 4 en el rango de 0 hasta 5.0");
                }

            }else{
                printf("Por favor ingrese la nota 3 en el rango de 0 hasta 5.0");
            }

        }else{
            printf("Por favor ingrese la nota 2 en el rango de 0 hasta 5.0");
        }
    }else{
        printf("Por favor ingrese la nota 1 en el rango de 0 hasta 5.0");
    }

    return 0;
}