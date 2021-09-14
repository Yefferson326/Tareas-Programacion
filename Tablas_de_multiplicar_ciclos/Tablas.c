#include <stdio.h>

void forClicle (int number){
    int result;
    printf("Tabla del numero %d con el ciclo FOR\n",number);
    for (int i = 1; i <= 10; i++){
        result = number * i;
        printf("-> %d * %d = %d\n",number,i,result);
    }
}
void whileClicle (int number){
    int i = 0;
    int result;
    printf("Tabla del numero %d con el ciclo WHILE\n",number);
    while ( i <= 10){
        result = number * i;
        printf("-> %d * %d = %d\n",number,i,result);
        i ++;
    }
}
void doWhileClicle (int number){
    int result;
    int i = 0;
    printf("Tabla del numero %d con el ciclo DOWHILE\n",number);
    do{
        result = number * i;
        printf("-> %d * %d = %d\n",number,i,result);
        i ++;
    }while ( i <= 10 );
}


int main (){
int number;
printf ("TABLAS DE MULTIPLICAR\n");
printf ("Ingrese el numero:");
scanf ("%d",&number);

forClicle(number);
whileClicle(number);
doWhileClicle (number);
return 0;
}