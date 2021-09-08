
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int dateAndTime (){
    // variables to store the date and time components
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


int main (){
    int numberOfoneProduct,numberOfTwoProduct,numberOfthreeProduct,numberOffourProduct,numberOffiveProduct,numberOfsixProduct,numberOfSevenProduct,numberOfEigthProduct;
    float oneProductValue,totalValueOneProduct,twoProductValue,totalValueTwoProduct,threeProductValue,totalValuethreeProduct,fourProductValue,totalValuefourProduct,fiveProductValue,totalValuefiveProduct,sixProductValue,totalValuesixProduct,sevenProductValue,totalValueSevenProduct,eigthProductValue,totalValueEigthProduct;
    float totalpurchase,totalDiscount;
    char oneProductName[20],twoProductName[20],threeProductName[20],fourProductName[20],fiveProductName[20],sixProductName[20],sevenProductName[20],eigthProductName[20];
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
        printf("Valor del producto (%s): $",oneProductName);
        scanf("%f",&oneProductValue);
        printf("Cantidad:");
        scanf("%i",&numberOfoneProduct);
        totalValueOneProduct = oneProductValue * numberOfoneProduct;
        printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
        scanf("%s",&newProduct);
        if(newProduct == 's'){ 
            printf("Escriba el nombre del producto: ");
            scanf("%s",&twoProductName);
            printf("Valor del producto (%s): $",twoProductName);
            scanf("%f",&twoProductValue);
            printf("Cantidad:");
            scanf("%i",&numberOfTwoProduct);
            totalValueTwoProduct = twoProductValue * numberOfTwoProduct;
            printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
            scanf("%s",&newProduct);
             if(newProduct == 's'){
                printf("Escriba el nombre del producto: ");
                scanf("%s",&threeProductName);
                printf("Valor del producto (%s): $",threeProductName);
                scanf("%f",&threeProductValue);
                printf("Cantidad:");
                scanf("%i",&numberOfthreeProduct);
                totalValuethreeProduct = threeProductValue * numberOfthreeProduct;
                printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                scanf("%s",&newProduct);
                if(newProduct == 's'){
                    printf("Escriba el nombre del producto: ");
                    scanf("%s",&fourProductName);
                    printf("Valor del producto (%s): $",fourProductName);
                    scanf("%f",&fourProductValue);
                    printf("Cantidad:");
                    scanf("%i",&numberOffourProduct);
                    totalValuefourProduct = fourProductValue * numberOffourProduct;
                    printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                    scanf("%s",&newProduct);
                    if(newProduct == 's'){
                        printf("Escriba el nombre del producto: ");
                        scanf("%s",&fiveProductName);
                        printf("Valor del producto (%s): $",fiveProductName);
                        scanf("%f",&fiveProductValue);
                        printf("Cantidad:");
                        scanf("%i",&numberOffiveProduct);
                        totalValuefiveProduct = fiveProductValue * numberOffiveProduct;
                        printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                        scanf("%s",&newProduct);
                        if(newProduct == 's'){
                            printf("Escriba el nombre del producto: ");
                            scanf("%s",&sixProductName);
                            printf("Valor del producto (%s): $",sixProductName);
                            scanf("%f",&sixProductValue);
                            printf("Cantidad:");
                            scanf("%i",&numberOfsixProduct);
                            totalValuesixProduct = sixProductValue * numberOfsixProduct;
                            printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                            scanf("%s",&newProduct);
                            if(newProduct == 's'){
                                printf("Escriba el nombre del producto: ");
                                scanf("%s",&sevenProductName);
                                printf("Valor del producto (%s): $",sevenProductName);
                                scanf("%f",&sevenProductValue);
                                printf("Cantidad:");
                                scanf("%i",&numberOfSevenProduct);
                                totalValueSevenProduct = sevenProductValue * numberOfSevenProduct;
                                printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                                scanf("%s",&newProduct);
                                if(newProduct == 's'){
                                    printf("Escriba el nombre del producto: ");
                                    scanf("%s",&eigthProductName);
                                    printf("Valor del producto (%s): $",eigthProductName);
                                    scanf("%f",&eigthProductValue);
                                    printf("Cantidad:");
                                    scanf("%i",&numberOfEigthProduct);
                                    totalValueEigthProduct = eigthProductValue * numberOfEigthProduct;
                                    printf ( " <<< Limite de productos facturados 8 >>> " );
                                    printf ( "PRODUCTOS:\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\n DESCUENTO: 10 % c al valor total de la compra " , oneProductName, twoProductName, threeProductName, fourProductName, fiveProductName, sixProductName,sevenProductName,eigthProductName, 37 );
                                    totalpurchase = totalValueOneProduct + totalValueTwoProduct + totalValuethreeProduct + totalValuefourProduct + totalValuefiveProduct + totalValuesixProduct + totalValueSevenProduct + totalValueEigthProduct;
                                    totalDiscount = totalpurchase - ((totalpurchase) * 0.10 );
                                    printf ( "Total compra: $%f\nValor total a pagar (con el 10 % c de descuento): $%f" , totalpurchase, 37 , totalDiscount);
                                }else{
                                    printf("PRODUCTOS:\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\nDESCUENTO: 10%c al valor total de la compra",oneProductName,twoProductName,threeProductName,fourProductName,fiveProductName,sixProductName,sevenProductName,37);
                                    totalpurchase=totalValueOneProduct+totalValueTwoProduct+totalValuethreeProduct+totalValuefourProduct+totalValuefiveProduct+totalValuesixProduct+totalValueSevenProduct;
                                    totalDiscount = totalpurchase-((totalpurchase)*0.10);
                                    printf("Total compra: $%f\nTotal valor a pagar (con el 10%c de descuento): $%f",totalpurchase,37,totalDiscount);
                                }
                            }else{
                                printf("PRODUCTOS:\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\nDESCUENTO: 10%c al valor total de la compra",oneProductName,twoProductName,threeProductName,fourProductName,fiveProductName,sixProductName,37);
                                totalpurchase=totalValueOneProduct+totalValueTwoProduct+totalValuethreeProduct+totalValuefourProduct+totalValuefiveProduct+totalValuesixProduct;
                                totalDiscount = totalpurchase-((totalpurchase)*0.10);
                                printf("Total compra: $%f\nTotal valor a pagar (con el 10%c de descuento): $%f",totalpurchase,37,totalDiscount);
                            }
                        }else{
                            printf("PRODUCTOS:\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\nDESCUENTO: 10%c al valor total de la compra",oneProductName,twoProductName,threeProductName,fourProductName,fiveProductName,37);
                            totalpurchase=totalValueOneProduct+totalValueTwoProduct+totalValuethreeProduct+totalValuefourProduct+totalValuefiveProduct;
                            totalDiscount = totalpurchase-((totalpurchase)*0.10);
                            printf("Total compra: $%f\nTotal valor a pagar (con el 10%c de descuento): $%f",totalpurchase,37,totalDiscount);
                        }
                    }else{
                        printf("PRODUCTOS:\n-> %s\n-> %s\n-> %s\n-> %s\nDESCUENTO: 10%c al valor total de la compra",oneProductName,twoProductName,threeProductName,fourProductName,37);
                        totalpurchase=totalValueOneProduct+totalValueTwoProduct+totalValuethreeProduct+totalValuefourProduct;
                        totalDiscount = totalpurchase-((totalpurchase)*0.10);
                        printf("Total compra: $%f\nTotal valor a pagar (con el 10%c de descuento): $%f",totalpurchase,37,totalDiscount);
                    }
                }else{
                    printf("PRODUCTOS:\n-> %s\n-> %s\n-> %s\nDESCUENTO: 10%c al valor total de la compra",oneProductName,twoProductName,threeProductName,37);
                    totalpurchase=totalValueOneProduct+totalValueTwoProduct+totalValuethreeProduct;
                    totalDiscount = totalpurchase-((totalpurchase)*0.10);
                    printf("Total compra: $%f\nTotal valor a pagar (con el 10%c de descuento): $%f",totalpurchase,37,totalDiscount);
                }
             }else{
                printf("PRODUCTOS:\n-> %s\n-> %s\nDESCUENTO: 10%c al valor total de la compra",oneProductName,twoProductName,37);
                totalpurchase=totalValueOneProduct+totalValueTwoProduct;
                totalDiscount = totalpurchase-((totalpurchase)*0.10);
                printf("Total compra: $%f\nTotal valor a pagar (con el 10%c de descuento): $%f",totalpurchase,37,totalDiscount);
             }
        
        }else{
            printf("PRODUCTOS:\n-> %s\nDESCUENTO: 10%c al valor total de la compra",oneProductName,37);
            totalDiscount = totalValueOneProduct-(totalValueOneProduct*0.10);
            printf("Total compra: $%f\nTotal valor a pagar (con el 10%c de descuento): $%f",totalValueOneProduct,37,totalDiscount);
        }
        
    }else{
        printf("Escriba el nombre del producto:");
        scanf("%s",&oneProductName);
        printf("Valor del producto (%s): $",oneProductName);
        scanf("%f",&oneProductValue);
        printf("Cantidad: ");
        scanf("%i",&numberOfoneProduct);
        totalValueOneProduct = oneProductValue * numberOfoneProduct;
        printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
        scanf("%s",&newProduct);
        if(newProduct == 's'){
            printf("Escriba el nombre del producto: ");
            scanf("%s",&twoProductName);
            printf("Valor del producto (%s): $",twoProductName);
            scanf("%f",&twoProductValue);
            printf("Cantidad:");
            scanf("%i",&numberOfTwoProduct);
            totalValueTwoProduct = twoProductValue * numberOfTwoProduct;
            printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
            scanf("%s",&newProduct);
            if(newProduct == 's'){
                printf("Escriba el nombre del producto: ");
                scanf("%s",&threeProductName);
                printf("Valor del producto (%s): $",threeProductName);
                scanf("%f",&threeProductValue);
                printf("Cantidad:");
                scanf("%i",&numberOfthreeProduct);
                totalValuethreeProduct = threeProductValue * numberOfthreeProduct;
                printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                scanf("%s",&newProduct);
                if(newProduct == 's'){
                    printf("Escriba el nombre del producto: ");
                    scanf("%s",&fourProductName);
                    printf("Valor del producto (%s): $",fourProductName);
                    scanf("%f",&fourProductValue);
                    printf("Cantidad:");
                    scanf("%i",&numberOffourProduct);
                    totalValuefourProduct = fourProductValue * numberOffourProduct;
                    printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                    scanf("%s",&newProduct);
                    if(newProduct == 's'){
                        printf("Escriba el nombre del producto: ");
                        scanf("%s",&fiveProductName);
                        printf("Valor del producto (%s): $",fiveProductName);
                        scanf("%f",&fiveProductValue);
                        printf("Cantidad:");
                        scanf("%i",&numberOffiveProduct);
                        totalValuefiveProduct = fiveProductValue * numberOffiveProduct;
                        printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                        scanf("%s",&newProduct);
                        if(newProduct == 's'){
                            printf("Escriba el nombre del producto: ");
                            scanf("%s",&sixProductName);
                            printf("Valor del producto (%s): $",sixProductName);
                            scanf("%f",&sixProductValue);
                            printf("Cantidad:");
                            scanf("%i",&numberOfsixProduct);
                            totalValuesixProduct = sixProductValue * numberOfsixProduct;
                            printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                            scanf("%s",&newProduct);
                            if(newProduct == 's'){
                                printf("Escriba el nombre del producto: ");
                                scanf("%s",&sevenProductName);
                                printf("Valor del producto (%s): $",sevenProductName);
                                scanf("%f",&sevenProductValue);
                                printf("Cantidad:");
                                scanf("%i",&numberOfSevenProduct);
                                totalValueSevenProduct = sevenProductValue * numberOfSevenProduct;
                                printf("Desea ingresar un producto mas a la factura\nSI[Presione 's']\nNO[Presione 'n']\n--> ");
                                scanf("%s",&newProduct);
                                if(newProduct == 's'){
                                    printf("Escriba el nombre del producto: ");
                                    scanf("%s",&eigthProductName);
                                    printf("Valor del producto (%s): $",eigthProductName);
                                    scanf("%f",&eigthProductValue);
                                    printf("Cantidad:");
                                    scanf("%i",&numberOfEigthProduct);
                                    totalValueEigthProduct = eigthProductValue * numberOfEigthProduct;
                                    printf ( " <<< Limite de productos facturados 8 >>> " );
                                    printf ( "PRODUCTOS:\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\n DESCUENTO: 15%c al valor total de la compra " , oneProductName, twoProductName, threeProductName, fourProductName, fiveProductName, sixProductName,sevenProductName,eigthProductName, 37 );
                                    totalpurchase = totalValueOneProduct + totalValueTwoProduct + totalValuethreeProduct + totalValuefourProduct + totalValuefiveProduct + totalValuesixProduct + totalValueSevenProduct + totalValueEigthProduct;
                                    totalDiscount = totalpurchase - ((totalpurchase) * 0.15 );
                                    printf ( "Total compra: $%f\nValor total a pagar (con el 15%c de descuento): $%f" , totalpurchase, 37 , totalDiscount);
                                }else{
                                    printf("PRODUCTOS:\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\nDESCUENTO: 15%c al valor total de la compra",oneProductName,twoProductName,threeProductName,fourProductName,fiveProductName,sixProductName,sevenProductName,37);
                                    totalpurchase=totalValueOneProduct+totalValueTwoProduct+totalValuethreeProduct+totalValuefourProduct+totalValuefiveProduct+totalValuesixProduct+totalValueSevenProduct;
                                    totalDiscount = totalpurchase-((totalpurchase)*0.15);
                                    printf("Total compra: $%f\nTotal valor a pagar (con el 15%c de descuento): $%f",totalpurchase,37,totalDiscount);
                                }
                            }else{
                                printf("PRODUCTOS:\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\n-> %s\nDESCUENTO: 15%c al valor total de la compra",oneProductName,twoProductName,threeProductName,fourProductName,fiveProductName,sixProductName,37);
                                totalpurchase=totalValueOneProduct+totalValueTwoProduct+totalValuethreeProduct+totalValuefourProduct+totalValuefiveProduct+totalValuesixProduct;
                                totalDiscount = totalpurchase-((totalpurchase)*0.15);
                                printf("Total compra: $%f\nTotal valor a pagar (con el 15%c de descuento): $%f",totalpurchase,37,totalDiscount);
                            }
                        }else{
                            printf("PRODUCTOS:\n->%s\n->%s\n->%s\n->%s\n->%s\nDESCUENTO: 15%c al valor total de la compra",oneProductName,twoProductName,threeProductName,fourProductName,fiveProductName,37);
                            totalpurchase =  totalValueOneProduct + totalValueTwoProduct + totalValuethreeProduct + totalValuefourProduct + totalValuefiveProduct;
                            totalDiscount = totalpurchase-(totalpurchase*0.15);
                            printf("Total compra: $%f\nTotal valor a pagar (con el 15%c de descuento): $%f",totalpurchase,37,totalDiscount);
                        }
                    }else{
                        printf("PRODUCTOS:\n->%s\n->%s\n->%s\n->%s\nDESCUENTO: 15%c al valor total de la compra",oneProductName,twoProductName,threeProductName,fourProductName,37);
                        totalpurchase = totalValueOneProduct + totalValueTwoProduct + totalValuethreeProduct + totalValuefourProduct;
                        totalDiscount = totalpurchase-(totalpurchase*0.15);
                        printf("Total compra: $%f\nTotal valor a pagar (con el 15%c de descuento): $%f",totalpurchase,37,totalDiscount);
                    }
                }else{
                    printf("PRODUCTOS:\n->%s\n->%s\n->%s\nDESCUENTO: 15%c al valor total de la compra",oneProductName,twoProductName,threeProductName,37);
                    totalpurchase = totalValueOneProduct + totalValueTwoProduct + totalValuethreeProduct;
                    totalDiscount = totalpurchase-(totalpurchase*0.15);
                    printf("Total compra: $%f\nTotal valor a pagar (con el 15%c de descuento): $%f",totalpurchase,37,totalDiscount);
                }
            }else{
                printf("PRODUCTOS:\n->%s\n->%s\nDESCUENTO: 15%c al valor total de la compra",oneProductName,twoProductName,37);
                totalpurchase = totalValueOneProduct + totalValueTwoProduct;
                totalDiscount = totalpurchase-(totalpurchase*0.15);
                printf("Total compra: $%f\nTotal valor a pagar (con el 15%c de descuento): $%f",totalpurchase,37,totalDiscount);
            }
        }else{
                printf("PRODUCTOS:\n->%s\nDESCUENTO: 15%c al valor total de la compra",oneProductName,37);
                totalDiscount = totalValueOneProduct-(totalValueOneProduct*0.15);
                printf("Total compra: $%f\nTotal valor a pagar (con el 15%c de descuento): $%f",totalValueOneProduct,37,totalDiscount);
        }    
    }  
return 0;    
}
