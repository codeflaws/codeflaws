#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int i,j,k,counter=1;
   char bus[6][26];

bus[0][0]=bus[0][25]=bus[5][0]=bus[5][25]='+';
/*
for(i=0;i<6;i++){
bus[i][26]='';
}
bus[1][26]=bus[4][26]=')';*/
for(i=1;i<5;i++){
bus[i][25]='|';
}
for(i=1;i<5;i++){
bus[i][0]='|';
}

bus[1][24]='D';
for(i=2;i<5;i++){
bus[i][24]='.';
}
for(i=1;i<25;i++){
bus[0][i]='-';
}

for(i=1;i<25;i++){
bus[5][i]='-';
}
for(i=1;i<5;i++){
bus[i][23]='|';
}
// still the donts betwwen the #
for(i=1;i<5;i++){
for(j=2;j<=22;j=j+2){
bus[i][j]='.';
}
}
for(i=1;i<5;i++){
for(j=1;j<22;j=j+2){
bus[i][j]='#';
}
}

for(i=2;i<25;i++){
bus[3][i]='.';
}
// making the empty bus finnished

// starting filling it
scanf("%d",&k);
for(i=1;i<21;i=i+2){
for(j=1;(j<=4)&&(counter<=k);j++){
if((j==3)&&(i>1)){
bus[j][i]='.';
}
else{
counter++;
bus[j][i]='O';

}
}
}

// printing the array
for(i=0;i<6;i++){
for(j=0;j<26;j++){
printf("%c",bus[i][j]);
}
if(i==1 ||i==4){
printf(")");
}
printf("\n");
}
    return 0;
}
