#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char months[12][15] = {"January", "February", "March", "April", "May", "June",
                  "July", "August", "September", "October", "November", "December"};
    char now[14];
    gets(now);
    int k,i;
    scanf("%d",&k);

    for(i=0; i<12; i++){
        if (strcmp(months[i], now) == 0)
            break;}
            //printf("%s",months[i]);

   // puts(months[i+((i+k)%12)]);
    printf("%s",months[i+k%12]);
    return 0;
}
