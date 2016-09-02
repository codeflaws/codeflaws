#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    long int n,i=0,q,j,t[1001];
    scanf("%ld",&n);
    q=n;
    char str[42],old[n][22],neww[n][22];
   while(n--)
    {
          scanf(" %[^\r\n]",str); //space before % to buffer the last input
          sscanf(str,"%s %s",old[i],neww[i]); // using sscanf separate strings after space n sscanf of string of arrays
            i++;
    }
    int cou=q;
    for(i=0;i<q;i++)
    {
        t[i]=i;
        for(j=0;j<q;j++)
        {
            if(strcmp(neww[i],old[j])==0)
            {
                strcpy(old[j],old[i]);
                strcpy(neww[i],neww[j]);
                t[j]=j;
                t[i]=99999;
                cou--;
            }
        }
    }
    printf("%d\n",cou);
    for(i=q-1;i>=0;i--)
    {
        if(t[i]!=99999)
        {
            printf("%s %s\n",old[t[i]],neww[t[i]]);

        }
    }

        return 0;
}
