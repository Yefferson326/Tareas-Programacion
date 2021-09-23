#include <stdio.h>
void validatePairOrOdd(int numberUser){
    
    if (numberUser % 2 == 0){
        printf("El numero que digito es par\n\n");
    }else{
        printf("El numero que digito es impar\n\n");
    }
    
}
int main(int argc, char const *argv[])
{
    int op,op1;
    system ("cls");
    printf("\t\t\t\tBIENVENIDO\n\nEn este programa podras ingresar 10 numeros y conocer si el numero es par o impar\n\n");
    printf("Selecciona\n1.Si lo quieres probar\n2.Mas bien otro dia XD\n -->");
    scanf("%d",&op);
    if (op == 1){
        int i,j,number;
        char* wordsNumbers [10];
        wordsNumbers [0] = "primer";
        wordsNumbers [1] = "segundo";
        wordsNumbers [2] = "tercero";
        wordsNumbers [3] = "cuarto";
        wordsNumbers [4] = "quinto";
        wordsNumbers [5] = "sexto";
        wordsNumbers [6] = "septimo";
        wordsNumbers [7] = "octavo";
        wordsNumbers [8] = "noveno";
        wordsNumbers [9] = "decimo";
        
        for (i = 0; i < 10 ; i++){
            int number [10];
            printf("Ingrese el %s numero:",wordsNumbers[i]);
            scanf ("%d",&number[i]);
            validatePairOrOdd(number[i]);
        }

    }
        
    
    return 0;
}
