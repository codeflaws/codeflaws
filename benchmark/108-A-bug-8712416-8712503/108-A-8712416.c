#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct hora{
    char hh[3];
    char mm[3];
};

typedef struct hora Hora;
int espalindromo(Hora h);
Hora siguientePalindromo(Hora hra);

int main(int argc, char *argv[]){

    char cadenaHora[6];
    Hora hr,aux;
    scanf("%s", cadenaHora);
    hr.hh[0] = cadenaHora[0];
    hr.hh[1] = cadenaHora[1];
    /* se asigna terminación de cadena '\0' */
    hr.hh[2] = hr.mm[2] = '\0';

    hr.mm[0] = cadenaHora[3];
    hr.mm[1] = cadenaHora[4];

    aux = siguientePalindromo(hr);

    printf("%s:%s\n", aux.hh, aux.mm);

    return 0;
}

/* verifica si la hora pasada es un palindromo */

int espalindromo(Hora h){
    char horaInvertida[3];
    horaInvertida[0] = h.hh[1];
    horaInvertida[1] = h.hh[0];
    horaInvertida[2] = h.hh[2];

    if(!strcmp(horaInvertida, h.mm))
        return 1;
    else
        return 0;
}

/* asigna siguientePalindromo comparando si el min es o no mayor a la hora para luego sumar uno a la hora o solo sumar al minuto */

Hora siguientePalindromo(Hora hra){

    int horPalindromo;
    Hora horaPalindromo;
    char horaInvert[3];

    /* asignamos la hora invertida a la variable horaInvert para verificar si los minutos son menores a esta hora invertida */
    horaInvert[0] = hra.hh[1];
    horaInvert[1] = hra.hh[0];
    horaInvert[2] = hra.hh[2];

    /* compara si los minutos son menores a la hora invertida */
    if(strcmp(hra.mm, horaInvert) < 0){
        /* no se modifica la hora palindromo */
        sprintf(horaPalindromo.hh, "%s", hra.hh);
        /* se asigna como minuto la hora invertida*/
        sprintf(horaPalindromo.mm, "%s", horaInvert);

    }
    else if(strcmp(hra.hh, "23") != 0){
            /* suma una hora más para la siguiente hora palindromo  */
            horPalindromo = atoi(hra.hh);
            horPalindromo++;
            /* se asigna la nueva hora palindromo a la variable horaPalindromo */
            sprintf(horaPalindromo.hh, "%2d", horPalindromo);

            /* se invierte la nueva hora palindromo para obtener los minutos palindromo */
            horaInvert[0] = horaPalindromo.hh[1];
            horaInvert[1] = horaPalindromo.hh[0];
            horaInvert[2] = horaPalindromo.hh[2];

            /* se asigna la hora invertida como el nuevo minuto palindromo */
            sprintf(horaPalindromo.mm, "%s",horaInvert);
    }else{/* para el caso 23 horas, el nuevo palindromo seria 00:00 */
            sprintf(horaPalindromo.hh, "%s", "00\0");
            sprintf(horaPalindromo.mm ,"%s","00\0");

    }

    if(strcmp(horaPalindromo.mm,"60")< 0)
        return horaPalindromo;
    else
        return siguientePalindromo(horaPalindromo);

}
