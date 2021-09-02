#include <stdio.h>
void ShowTextInvalidNote (){
    printf("Nota invalida\nPor favor ingrese la nota en el rango de 0 hasta 5.0");
    exit (0);
}

void validateRangeNote (float note){
    if(note < 0 || note > 5.0){
        ShowTextInvalidNote ();
    }
}
float printAndscandNote (char* numberNote){
    float note;
    printf("%s.", numberNote);
    scanf("%f", & note);
    validateRangeNote(note);
    return note;
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

    noteOne = printAndscandNote("1");
    noteTwo = printAndscandNote("2");
    noteThree = printAndscandNote("3");
    noteFour = printAndscandNote("4");
    noteFive = printAndscandNote("5");

    promedio = calcPromedio(noteOne,noteTwo,noteThree,noteFour,noteFive);

    validateAprobeOrDisaprobe(promedio);
    return 0;
}