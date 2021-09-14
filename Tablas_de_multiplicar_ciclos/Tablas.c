#include <stdio.h>

void forClicle (int number){
    int result;
    printf("Tabla del numero %d con el ciclo FOR\n",number);
    for (int i = 1; i <= 10; i++){
        result = number * i;
        printf("-> %d x %d = %d\n",number,i,result);
    }
}
void whileClicle (int number){
    int i = 1;
    int result;
    printf("Tabla del numero %d con el ciclo WHILE\n",number);
    while ( i <= 10){
        result = number * i;
        printf("-> %d x %d = %d\n",number,i,result);
        i ++;
    }
}
void doWhileClicle (int number){
    int result;
    int i = 1;
    printf("Tabla del numero %d con el ciclo DOWHILE\n",number);
    do{
        result = number * i;
        printf("-> %d x %d = %d\n",number,i,result);
        i ++;
    }while ( i <= 10 );
}


int main (){
int number;
int numberCicle;
printf ("TABLAS DE MULTIPLICAR\n");
printf ("Ingrese el numero:");
scanf ("%d",&number);
printf("Ciclo con el que desea que se realize las operaciones:\n1.FOR\n2.WHILE\n3.DO WHILE\nSeleccione el numero del ciclo: ");
scanf("%i",&numberCicle);
if( numberCicle == 1){
    forClicle(number);
}else if (numberCicle == 2){
    whileClicle(number);
}else if (numberCicle == 3){
    doWhileClicle (number);
}else{
    printf("Valor incorrecto. Intentelo de nuevo");
}

return 0;
}