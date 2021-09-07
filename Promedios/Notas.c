#include <stdio.h>
#include <stdlib.h>
void ShowTextInvalidNote (char* numberNote){
    printf("Nota invalida\nPor favor ingrese la nota %s en el rango de 0 hasta 5.0", numberNote);
    exit (0);
}

void validateRangeNote (float note, char* numberNote){
    if(note < 0 || note > 5.0){
        ShowTextInvalidNote (numberNote);
    }
}
float scanNote (char* numberNote){
    float note;
    printNote(numberNote);
    scanf("%f", & note);
    validateRangeNote(note, numberNote);
    return note;
}
void printNote (char* numberNote){
    printf("%s.", numberNote);
}

float calcPromedio (float noteOne, float noteTwo, float noteThree, float noteFour, float noteFive){
    return (noteOne+noteTwo+noteThree+noteFour+noteFive)/5;
}
void validateAprobeOrDisaprobe (float promedio){
    if (promedio >= 2.95){
        printf("El estudiante aprobo la asignatura con un promedio de: %f",promedio);
    }else{
        printf("El estudiante reprobo la asignatura con un promedio de: %f",promedio);
    }
}
int main (){
 printf("Bienvenido \nEn este programa podra organizar las notas de sus estudiantes y conocer su promedio\n");

    float noteOne,noteTwo,noteThree,noteFour,noteFive,promedio;

    printf("Ingrese las notas del estudiante\n");

    noteOne = scanNote("1");
    noteTwo = scanNote("2");
    noteThree = scanNote("3");
    noteFour = scanNote("4");
    noteFive = scanNote("5");

    promedio = calcPromedio(noteOne,noteTwo,noteThree,noteFour,noteFive);

    validateAprobeOrDisaprobe(promedio);
    return 0;
}