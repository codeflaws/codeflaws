#include <stdio.h>
#include <stdlib.h>
/*
int main(int argc, char *argv[])
{int i,j;
char s[100];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
    if(s[i]>='A'&&s[i]<='Z'){
        s[i]=s[i]+32;
    }}

    for(i=0;i<strlen(s);i++){
    if(s[i]=='A'||s[i]=='O'||s[i]=='Y'||s[i]=='E'||s[i]=='U'||s[i]=='I'||s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i'){
      for(j=i;j<strlen(s)-1;j++){
        s[j]=s[j+1];
      }

      printf("%s",s);

    }
    else
        for(j=i;j<strlen(s)-1;j++)
    {s[j]='.';
    s[j+1]=s[j];

    }
    //printf("%s",s);

    }
    //printf("%s",s);

    return 0;
}*/


int main(int argc, char *argv[]){
char s[100],c[100];
int l,i,j;
scanf("%s",s);
l=strlen(s);
j=0;

for(i=0;i<l;i++){

    if(s[i]!='a'&&s[i]!='o'&&s[i]!='y'&&s[i]!='e'&&s[i]!='u'&&s[i]!='i'&&s[i]!='A'&&s[i]!='O'&&s[i]!='Y'&&s[i]!='E'&&s[i]!='U'&&s[i]!='I'){
        c[j]='.';

        j++;

        if(s[i]>='a'&&s[i]<='z'){
            c[j]=s[i];

            j++;
        }
        if(s[i]>='A'&&s[i]<='Z'){
            c[j]=(char)(s[i]+32);


            j++;

        }
    }

}
c[j]='\0';
printf("%s\n",c);

}
