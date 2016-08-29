#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int num,i;
scanf("%d",&num);
int given[num+1],solved[num+1];//2 3 4 1-----4 1 2 3
for (i=0;i<num;i++){
scanf("%d",&given[i]);
}
for (i=0;i<num;i++){

   solved[given[i]-1]=i+1;
}
for (i=0;i<num;i++){
printf("%d",solved[i]);
}

    return 0;
}
