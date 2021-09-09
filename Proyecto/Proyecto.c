
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int dateAndTime (){
    int hours, minutes, seconds, day, month, year;
    // `time_t` is an arithmetic time type
    time_t now;
    // Obtain current time
    // `time()` returns the current time of the system as a `time_t` value
    time(&now);
    // localtime converts a `time_t` value to calendar time and
    // returns a pointer to a `tm` structure with its members
    // filled with the corresponding values
    struct tm *local = localtime(&now);
 
    hours = local->tm_hour;         // get hours since midnight (0-23)
    minutes = local->tm_min;        // get minutes passed after the hour (0-59)
    seconds = local->tm_sec;        // get seconds passed after a minute (0-59)

    day = local->tm_mday;            // get day of month (1 to 31)
    month = local->tm_mon + 1;      // get month of year (0 to 11)
    year = local->tm_year + 1900;   // get year since 1900
    // print the current date
    printf("Fecha:%02d/%02d/%d\n", day, month, year);
    // print local time
    if (hours < 12) {    // before midday
        printf("Hora:%02d:%02d:%02d am\n\n", hours, minutes, seconds);
    }
    else {    // after midday
        printf("Hora:%02d:%02d:%02d pm\n\n", hours - 12, minutes, seconds);
    }
    return 0;
}
void purchaseFinal10Porcent (float totalValueOneProduct,float totalValueTwoProduct, float totalValuethreeProduct,float totalValuefourProduct, float totalValuefiveProduct, float totalValuesixProduct,float totalValueSevenProduct,float totalValueEigthProduct){
    float totalpurchase, totalDiscount;
    totalpurchase=totalValueOneProduct+totalValueTwoProduct+totalValuethreeProduct+totalValuefourProduct+totalValuefiveProduct+totalValuesixProduct+totalValueSevenProduct+totalValueEigthProduct;
    totalDiscount = totalpurchase-((totalpurchase)*0.10);
    printf("\nTotal compra: $%f\nTotal valor a pagar (con el 10%c de descuento): $%f",totalpurchase,37,totalDiscount);
}
void purchaseFinal15Porcent (float totalValueOneProduct,float totalValueTwoProduct, float totalValuethreeProduct,float totalValuefourProduct, float totalValuefiveProduct, float totalValuesixProduct,float totalValueSevenProduct,float totalValueEigthProduct){
    float totalpurchase, totalDiscount;
    totalpurchase=totalValueOneProduct+totalValueTwoProduct+totalValuethreeProduct+totalValuefourProduct+totalValuefiveProduct+totalValuesixProduct+totalValueSevenProduct+totalValueEigthProduct;
    totalDiscount = totalpurchase-((totalpurchase)*0.15);
    printf("\nTotal compra: $%f\nTotal valor a pagar (con el 15%c de descuento): $%f",totalpurchase,37,totalDiscount);
}
float productValue (char *productName){
    float productvalue;
    printf("Valor del producto (%s): $",productName);
    scanf("%f",&productvalue);
    return productvalue;
}
int numberOfProducts (){
    int numberOfProduct;
    printf("Cantidad:");
    scanf("%i",&numberOfProduct);
    return numberOfProduct;
}
int main (){
    int numberOfoneProduct,numberOfTwoProduct,numberOfthreeProduct,numberOffourProduct,numberOffiveProduct,numberOfsixProduct,numberOfSevenProduct,numberOfEigthProduct;
    float oneProductValue,totalValueOneProduct,twoProductValue,totalValueTwoProduct,threeProductValue,totalValuethreeProduct,fourProductValue,totalValuefourProduct,fiveProductValue,totalValuefiveProduct,sixProductValue,totalValuesixProduct,sevenProductValue,totalValueSevenProduct,eigthProductValue,totalValueEigthProduct;
    float totalpurchase,totalDiscount;
    char oneProductName[50],twoProductName[50],threeProductName[50],fourProductName[50],fiveProductName[50],sixProductName[50],sevenProductName[50],eigthProductName[50];
    char newProduct,validTv;
    printf("**********BIENVENIDO**********\nEn este programa podras conocer el valor total de 8 productos y mirar tu descuento para el mes de Septiembre\n");
    printf("FACTURA\n");
    dateAndTime();
    system("pause");
    printf("%cDentro de los productos a facturar se encuentra algun televisor\?\nSI[Presione 's']\nNO[Presione 'n']\n--> ",168);
    scanf("%s",&validTv);
    if (validTv != 's'){
        printf("Escriba el nombre del producto: ");
        scanf("%s",&oneProductName);
        fflush(stdin);
        oneProductValue = productValue(oneProductName);
        numberOfoneProduct = numberOfProducts();
        totalValueOneProduct = oneProductValue * numberOfoneProduct;
        printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
        scanf("%s",&newProduct);
        if(newProduct == 's'){ 
            printf("Escriba el nombre del producto: ");
            scanf("%s",&twoProductName);
            fflush(stdin);
            twoProductValue = productValue(twoProductName);
            numberOfTwoProduct = numberOfProducts();
            totalValueTwoProduct = twoProductValue * numberOfTwoProduct;
            printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
            scanf("%s",&newProduct);
             if(newProduct == 's'){
                printf("Escriba el nombre del producto: ");
                scanf("%s",&threeProductName);
                fflush(stdin);
                threeProductValue = productValue(threeProductName);
                numberOfthreeProduct = numberOfProducts();
                totalValuethreeProduct = threeProductValue * numberOfthreeProduct;
                printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                scanf("%s",&newProduct);
                if(newProduct == 's'){
                    printf("Escriba el nombre del producto: ");
                    scanf("%s",&fourProductName);
                    fflush(stdin);
                    fourProductValue = productValue(fourProductName);
                    numberOffourProduct = numberOfProducts();
                    totalValuefourProduct = fourProductValue * numberOffourProduct;
                    printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                    scanf("%s",&newProduct);
                    if(newProduct == 's'){
                        printf("Escriba el nombre del producto: ");
                        scanf("%s",&fiveProductName);
                        fflush(stdin);
                        fiveProductValue = productValue(fiveProductName);
                        numberOffiveProduct = numberOfProducts();
                        totalValuefiveProduct = fiveProductValue * numberOffiveProduct;
                        printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                        scanf("%s",&newProduct);
                        if(newProduct == 's'){
                            printf("Escriba el nombre del producto: ");
                            scanf("%s",&sixProductName);
                            fflush(stdin);
                            sixProductValue = productValue(sixProductName);
                            numberOfsixProduct = numberOfProducts();
                            totalValuesixProduct = sixProductValue * numberOfsixProduct;
                            printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                            scanf("%s",&newProduct);
                            if(newProduct == 's'){
                                printf("Escriba el nombre del producto: ");
                                scanf("%s",&sevenProductName);
                                fflush(stdin);
                                sevenProductValue = productValue(sevenProductName);
                                numberOfSevenProduct = numberOfProducts();
                                totalValueSevenProduct = sevenProductValue * numberOfSevenProduct;
                                printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                                scanf("%s",&newProduct);
                                if(newProduct == 's'){
                                    printf("Escriba el nombre del producto: ");
                                    scanf("%s",&eigthProductName);
                                    fflush(stdin);
                                    eigthProductValue = productValue(eigthProductName);
                                    numberOfEigthProduct = numberOfProducts();
                                    totalValueEigthProduct = eigthProductValue * numberOfEigthProduct;
                                    printf ( " <<< Limite de productos facturados 8 >>>\n" );
                                    printf ( "\nPRODUCTOS:\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n\nDESCUENTO: 10%c al valor total de la compra " , oneProductName,oneProductValue,numberOfoneProduct,twoProductName,twoProductValue,numberOfTwoProduct,threeProductName,threeProductValue,numberOfthreeProduct,fourProductName,fourProductValue,numberOffourProduct, fiveProductName,fiveProductValue,numberOffiveProduct, sixProductName,sixProductValue,numberOfsixProduct,sevenProductName,sevenProductValue,numberOfSevenProduct,eigthProductName,eigthProductValue,numberOfEigthProduct,37 );
                                    purchaseFinal10Porcent(totalValueOneProduct,totalValueTwoProduct,totalValuethreeProduct,totalValuefourProduct,totalValuefiveProduct,totalValuesixProduct,totalValueSevenProduct,totalValueEigthProduct);
                                }else{
                                    printf ( "\nPRODUCTOS:\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n\nDESCUENTO: 10%c al valor total de la compra " , oneProductName,oneProductValue,numberOfoneProduct,twoProductName,twoProductValue,numberOfTwoProduct,threeProductName,threeProductValue,numberOfthreeProduct,fourProductName,fourProductValue,numberOffourProduct, fiveProductName,fiveProductValue,numberOffiveProduct, sixProductName,sixProductValue,numberOfsixProduct,sevenProductName,sevenProductValue,numberOfSevenProduct,37 );
                                    purchaseFinal10Porcent(totalValueOneProduct,totalValueTwoProduct,totalValuethreeProduct,totalValuefourProduct,totalValuefiveProduct,totalValuesixProduct,totalValueSevenProduct,0);
                                }
                            }else{
                                printf ( "\nPRODUCTOS:\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n\nDESCUENTO: 10%c al valor total de la compra " , oneProductName,oneProductValue,numberOfoneProduct,twoProductName,twoProductValue,numberOfTwoProduct,threeProductName,threeProductValue,numberOfthreeProduct,fourProductName,fourProductValue,numberOffourProduct, fiveProductName,fiveProductValue,numberOffiveProduct, sixProductName,sixProductValue,numberOfsixProduct,37 );
                                purchaseFinal10Porcent(totalValueOneProduct,totalValueTwoProduct,totalValuethreeProduct,totalValuefourProduct,totalValuefiveProduct,totalValuesixProduct,0,0);
                            }
                        }else{
                            printf ( "\nPRODUCTOS:\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n\nDESCUENTO: 10%c al valor total de la compra " , oneProductName,oneProductValue,numberOfoneProduct,twoProductName,twoProductValue,numberOfTwoProduct,threeProductName,threeProductValue,numberOfthreeProduct,fourProductName,fourProductValue,numberOffourProduct, fiveProductName,fiveProductValue,numberOffiveProduct,37 );
                            purchaseFinal10Porcent(totalValueOneProduct,totalValueTwoProduct,totalValuethreeProduct,totalValuefourProduct,totalValuefiveProduct,0,0,0);
                        }
                    }else{
                        printf ( "\nPRODUCTOS:\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n\nDESCUENTO: 10%c al valor total de la compra " , oneProductName,oneProductValue,numberOfoneProduct,twoProductName,twoProductValue,numberOfTwoProduct,threeProductName,threeProductValue,numberOfthreeProduct,fourProductName,fourProductValue,numberOffourProduct,37 );
                        purchaseFinal10Porcent(totalValueOneProduct,totalValueTwoProduct,totalValuethreeProduct,totalValuefourProduct,0,0,0,0);
                    }
                }else{
                    printf ( "\nPRODUCTOS:\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n\nDESCUENTO: 10%c al valor total de la compra " , oneProductName,oneProductValue,numberOfoneProduct,twoProductName,twoProductValue,numberOfTwoProduct,threeProductName,threeProductValue,numberOfthreeProduct,37 );
                    purchaseFinal10Porcent(totalValueOneProduct,totalValueTwoProduct,totalValuethreeProduct,0,0,0,0,0);
                }
             }else{
                printf ( "\nPRODUCTOS:\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n\nDESCUENTO: 10%c al valor total de la compra " , oneProductName,oneProductValue,numberOfoneProduct,twoProductName,twoProductValue,numberOfTwoProduct,37 );
                purchaseFinal10Porcent(totalValueOneProduct,totalValueTwoProduct,0,0,0,0,0,0);
             }
        
        }else{
            printf ( "\nPRODUCTOS:\n-> %s..........$%f x %i unds.\n\nDESCUENTO: 10%c al valor total de la compra " , oneProductName,oneProductValue,numberOfoneProduct,37 );
            purchaseFinal10Porcent(totalValueOneProduct,0,0,0,0,0,0,0);
        }
        
    }else{
        printf("Escriba el nombre del producto:");
        scanf("%s",&oneProductName);
        fflush(stdin);
        oneProductValue = productValue(oneProductName);
        numberOfoneProduct = numberOfProducts();
        totalValueOneProduct = oneProductValue * numberOfoneProduct;
        printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
        scanf("%s",&newProduct);
        if(newProduct == 's'){
            printf("Escriba el nombre del producto: ");
            scanf("%s",&twoProductName);
            fflush(stdin);
            twoProductValue = productValue(twoProductName);
            numberOfTwoProduct = numberOfProducts();
            totalValueTwoProduct = twoProductValue * numberOfTwoProduct;
            printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
            scanf("%s",&newProduct);
            if(newProduct == 's'){
                printf("Escriba el nombre del producto: ");
                scanf("%s",&threeProductName);
                fflush(stdin);
                threeProductValue = productValue(threeProductName);
                numberOfthreeProduct = numberOfProducts();
                totalValuethreeProduct = threeProductValue * numberOfthreeProduct;
                printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                scanf("%s",&newProduct);
                if(newProduct == 's'){
                    printf("Escriba el nombre del producto: ");
                    scanf("%s",&fourProductName);
                    fflush(stdin);
                    fourProductValue = productValue(fourProductName);
                    numberOffourProduct = numberOfProducts();
                    totalValuefourProduct = fourProductValue * numberOffourProduct;
                    printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                    scanf("%s",&newProduct);
                    if(newProduct == 's'){
                        printf("Escriba el nombre del producto: ");
                        scanf("%s",&fiveProductName);
                        fflush(stdin);
                        fiveProductValue = productValue(fiveProductName);
                        numberOffiveProduct = numberOfProducts();
                        totalValuefiveProduct = fiveProductValue * numberOffiveProduct;
                        printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                        scanf("%s",&newProduct);
                        if(newProduct == 's'){
                            printf("Escriba el nombre del producto: ");
                            scanf("%s",&sixProductName);
                            fflush(stdin);
                            sixProductValue = productValue(sixProductName);
                            numberOfsixProduct = numberOfProducts();
                            totalValuesixProduct = sixProductValue * numberOfsixProduct;
                            printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                            scanf("%s",&newProduct);
                            if(newProduct == 's'){
                                printf("Escriba el nombre del producto: ");
                                scanf("%s",&sevenProductName);
                                fflush(stdin);
                                sevenProductValue = productValue(sevenProductName);
                                numberOfSevenProduct = numberOfProducts();
                                totalValueSevenProduct = sevenProductValue * numberOfSevenProduct;
                                printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                                scanf("%s",&newProduct);
                                if(newProduct == 's'){
                                    printf("Escriba el nombre del producto: ");
                                    scanf("%s",&eigthProductName);
                                    fflush(stdin);
                                    eigthProductValue = productValue(eigthProductName);
                                    numberOfEigthProduct = numberOfProducts();
                                    totalValueEigthProduct = eigthProductValue * numberOfEigthProduct;
                                    printf ( " <<< Limite de productos facturados 8 >>>\n" );
                                    printf ( "\nPRODUCTOS:\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n\nDESCUENTO: 15%c al valor total de la compra " , oneProductName,oneProductValue,numberOfoneProduct,twoProductName,twoProductValue,numberOfTwoProduct,threeProductName,threeProductValue,numberOfthreeProduct,fourProductName,fourProductValue,numberOffourProduct, fiveProductName,fiveProductValue,numberOffiveProduct, sixProductName,sixProductValue,numberOfsixProduct,sevenProductName,sevenProductValue,numberOfSevenProduct,eigthProductName,eigthProductValue,numberOfEigthProduct,37 );
                                    purchaseFinal15Porcent(totalValueOneProduct,totalValueTwoProduct,totalValuethreeProduct,totalValuefourProduct,totalValuefiveProduct,totalValuesixProduct,totalValueSevenProduct,totalValueEigthProduct);
                                }else{
                                    printf ( "\nPRODUCTOS:\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n\nDESCUENTO: 15%c al valor total de la compra " , oneProductName,oneProductValue,numberOfoneProduct,twoProductName,twoProductValue,numberOfTwoProduct,threeProductName,threeProductValue,numberOfthreeProduct,fourProductName,fourProductValue,numberOffourProduct, fiveProductName,fiveProductValue,numberOffiveProduct, sixProductName,sixProductValue,numberOfsixProduct,sevenProductName,sevenProductValue,numberOfSevenProduct,37 );
                                    purchaseFinal15Porcent(totalValueOneProduct,totalValueTwoProduct,totalValuethreeProduct,totalValuefourProduct,totalValuefiveProduct,totalValuesixProduct,totalValueSevenProduct,0);
                                }
                            }else{
                                printf ( "\nPRODUCTOS:\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n\nDESCUENTO: 15%c al valor total de la compra " , oneProductName,oneProductValue,numberOfoneProduct,twoProductName,twoProductValue,numberOfTwoProduct,threeProductName,threeProductValue,numberOfthreeProduct,fourProductName,fourProductValue,numberOffourProduct, fiveProductName,fiveProductValue,numberOffiveProduct, sixProductName,sixProductValue,numberOfsixProduct,37 );
                                purchaseFinal15Porcent(totalValueOneProduct,totalValueTwoProduct,totalValuethreeProduct,totalValuefourProduct,totalValuefiveProduct,totalValuesixProduct,0,0);
                            }
                        }else{
                            printf ( "\nPRODUCTOS:\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n\nDESCUENTO: 15%c al valor total de la compra " , oneProductName,oneProductValue,numberOfoneProduct,twoProductName,twoProductValue,numberOfTwoProduct,threeProductName,threeProductValue,numberOfthreeProduct,fourProductName,fourProductValue,numberOffourProduct, fiveProductName,fiveProductValue,numberOffiveProduct,37 );
                            purchaseFinal15Porcent(totalValueOneProduct,totalValueTwoProduct,totalValuethreeProduct,totalValuefourProduct,totalValuefiveProduct,0,0,0);
                        }
                    }else{
                        printf ( "\nPRODUCTOS:\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n\nDESCUENTO: 15%c al valor total de la compra " , oneProductName,oneProductValue,numberOfoneProduct,twoProductName,twoProductValue,numberOfTwoProduct,threeProductName,threeProductValue,numberOfthreeProduct,fourProductName,fourProductValue,numberOffourProduct,37 );
                        purchaseFinal15Porcent(totalValueOneProduct,totalValueTwoProduct,totalValuethreeProduct,totalValuefourProduct,0,0,0,0);
                    }
                }else{
                    printf ( "\nPRODUCTOS:\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n\nDESCUENTO: 15%c al valor total de la compra " , oneProductName,oneProductValue,numberOfoneProduct,twoProductName,twoProductValue,numberOfTwoProduct,threeProductName,threeProductValue,numberOfthreeProduct,37 );
                    purchaseFinal15Porcent(totalValueOneProduct,totalValueTwoProduct,totalValuethreeProduct,0,0,0,0,0);
                }
            }else{
                printf ( "\nPRODUCTOS:\n-> %s..........$%f x %i unds.\n-> %s..........$%f x %i unds.\n\nDESCUENTO: 15%c al valor total de la compra " , oneProductName,oneProductValue,numberOfoneProduct,twoProductName,twoProductValue,numberOfTwoProduct,37 );
                purchaseFinal15Porcent(totalValueOneProduct,totalValueTwoProduct,0,0,0,0,0,0);
            }
        }else{
            printf ( "\nPRODUCTOS:\n-> %s..........$%f x %i unds.\n\nDESCUENTO: 15%c al valor total de la compra " , oneProductName,oneProductValue,numberOfoneProduct,37 );
            purchaseFinal15Porcent(totalValueOneProduct,0,0,0,0,0,0,0);
        }    
    }  
printf ("\nGRACIAS POR SU COMPRA"); 
return 0;    
}
