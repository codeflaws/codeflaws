#include<stdio.h>
char str[250][250]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
char str1[250][250]={" ","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
int main(int argc, char *argv[]){
int a;

scanf("%d",&a);
if(a<20){
puts(str[a]);
}
else{
if(a%10==0){
puts(str1[a/10-1]);
}
else{
int t=a%10;
a/=10;
int t1=a;
printf("%s-%s",str1[t1-1],str[t]);

}
}
return 0;
}
