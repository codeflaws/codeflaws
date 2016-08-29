#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int k = 0, actuelMonth = 0, resultat = 0;
	char s[10];

	scanf("%s %d", &s, &k);
    if(k>=0 && k<=100)
    {
        if(strcmp(s, "January") == 0)
        {
            actuelMonth = 1;
            if((actuelMonth + k)>12)
                resultat = (actuelMonth + k)%12;
            else
                resultat = actuelMonth + k;
        }
        else if(strcmp(s, "February") == 0)
        {
            actuelMonth = 2;
            if((actuelMonth + k)>12)
                resultat = (actuelMonth + k)%12;
            else
                resultat = actuelMonth + k;
        }
        else if(strcmp(s, "March") == 0)
        {
            actuelMonth = 3;
            if((actuelMonth + k)>12)
                resultat = (actuelMonth + k)%12;
            else
                resultat = actuelMonth + k;
        }
        else if(strcmp(s, "April") == 0)
        {
            actuelMonth = 4;
            if((actuelMonth + k)>12)
                resultat = (actuelMonth + k)%12;
            else
                resultat = actuelMonth + k;
        }
        else if(strcmp(s, "May") == 0)
        {
            actuelMonth = 5;
            if((actuelMonth + k)>12)
                resultat = (actuelMonth + k)%12;
            else
                resultat = actuelMonth + k;
        }
        else if(strcmp(s, "June") == 0)
        {
            actuelMonth = 6;
            if((actuelMonth + k)>12)
                resultat = (actuelMonth + k)%12;
            else
                resultat = actuelMonth + k;
        }
        else if(strcmp(s, "July") == 0)
        {
            actuelMonth = 7;
            if((actuelMonth + k)>12)
                resultat = (actuelMonth + k)%12;
            else
                resultat = actuelMonth + k;
        }
        else if(strcmp(s, "August") == 0)
        {
            actuelMonth = 8;
            if((actuelMonth + k)>12)
                resultat = (actuelMonth + k)%12;
            else
                resultat = actuelMonth + k;
        }
        else if(strcmp(s, "September") == 0)
        {
            actuelMonth = 9;
            if((actuelMonth + k)>12)
                resultat = (actuelMonth + k)%12;
            else
                resultat = actuelMonth + k;
        }
        else if(strcmp(s, "October") == 0)
        {
            actuelMonth = 10;
            if((actuelMonth + k)>12)
                resultat = (actuelMonth + k)%12;
            else
                resultat = actuelMonth + k;
        }
        else if(strcmp(s, "November") == 0)
        {
            actuelMonth = 11;
            if((actuelMonth + k)>12)
                resultat = (actuelMonth + k)%12;
            else
                resultat = actuelMonth + k;
        }
        else if(strcmp(s, "December") == 0)
        {
            actuelMonth = 12;
            if((actuelMonth + k)>12)
                resultat = (actuelMonth + k)%12;
            else
                resultat = actuelMonth + k;
        }
        if(resultat == 1)
            printf("January");
        else if(resultat == 2)
            printf("February");
        else if(resultat == 3)
            printf("March");
        else if(resultat == 4)
            printf("April");
        else if(resultat == 5)
            printf("May");
        else if(resultat == 6)
            printf("June");
        else if(resultat == 7)
            printf("July");
        else if(resultat == 8)
            printf("August");
        else if(resultat == 9)
            printf("September");
        else if(resultat == 10)
            printf("October");
        else if(resultat == 11)
            printf("November");
        else if(resultat == 12)
            printf("December");
        return 0;
    }
    else
        return 1;
}
