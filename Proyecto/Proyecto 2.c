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
    printf("Fecha: %02d/%02d/%d\n", day, month, year);
    // print local time
    if (hours < 12) {    // before midday
        printf("Hora: %02d:%02d:%02d am\n\n", hours, minutes, seconds);
    }
    else {    // after midday
        printf("Hora: %02d:%02d:%02d pm\n\n", hours - 12, minutes, seconds);
    }
    return 0;


}

int main (){
    printf("Bienvenido\nEn este programa podras conocer el valor total de tus productos y mirar si aplicas a los descuentos del mes de Septiembre\n");
    
    printf("¿Dentro de los productos a facturar se encuentra algun televisor?");

    return 0;
}