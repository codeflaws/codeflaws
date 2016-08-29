 long long int constant,i,j,n,temp,tmp;
 long long int c,start,count,L,R,mid,ans=0,tmpans=0,y,z;
 long long int f(long long int x)
{
    long long int y = 9, z = 0, ans = 0, i;
    
    for (i = 1; ; i++) {
        if (x <= y) {
            ans += (x - z) * i;
            
            break;
        }
        
        ans += (y - z) * i;
        
        z = y;
        y = y * 10 + 9;
    }
    
    return ans;
}
#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[]){

scanf("%I64d %I64d %I64d",&c,&start,&constant);

c=c/constant+1;
temp=log10(start)+1;
if(temp>c-1){puts("0");return 0;}
L=0;R=10e16/constant+1;
tmpans=f(start-1);
c+=f(start-1);
while(R-L>1){

mid=(L+R)/2;
count=mid+start;

ans=f(count);
if(c>ans)
L=mid;
else
R=mid;
}

printf("%I64d",L+1);

return 0;
}