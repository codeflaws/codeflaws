#include<stdio.h>
long long find_max(long long low,long long high,long long power)
{
    if(low>high)
        return 0;
    if((power/2>=low&&power/2<=high)||(power/2-1>=low&&power/2-1<=high))
        return (power/2*(power/2-1));
    if(low>power/2)
        return (low*(power-1-low));
    return (high*(power-1-high));
}
int main(int argc, char *argv[])
{
 long long l,r,max=0;
 scanf("%lld%lld",&l,&r);
 int low_digit=0,high_digit=0;
 long long no=l,power=1;
 while(no!=0)
 {
    low_digit++;
    no/=10;
    power*=10;
 }
 no=r;
 while(no!=0)
 {
     high_digit++;
     no/=10;
 }
 long long current_max,low=l,high=power-1;
 while(low_digit<high_digit)
 {
     current_max=find_max(low,high,power);
     if(max<current_max)
        max=current_max;
     low=power;
     high=power*10-1;
     power=power*10;
     low_digit++;
 }
 current_max=find_max(low,r,power);
 if(current_max>max)
    max=current_max;
 printf("%lld",max);
 return 0;
}
