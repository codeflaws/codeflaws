#include <stdio.h>
#define max 2000001
int prime[max],pal[max],digits[10];

int isPalindrome(int a){
    int temp=a,i=0;
    while(temp!=0){
        digits[i++]=temp%10;
        temp/=10;
    }
    int k=i-1;
    i=0;
    while(i<k && digits[i]==digits[k]){
        i++;
        k--;
    }
    if(i<k)
        return 0;
    else{
        return 1;
    }
}

void set(){
int i=2;
while(i<max){
    int j=2;
    int p=j*i;
    while(p<max){
        prime[p]=1;
        j++;
        p=i*j;
    }
    i++;
    while(prime[i]==1)
        i++;
}
int count=0;
for(i=2;i<max;i++){
    if(prime[i]==0)
        prime[i]=(++count);
    else
        prime[i]=count;
}

i=1;
//printf("test\n");
while(i<max){
        pal[i]=pal[i-1];
    if(isPalindrome(i))
        pal[i]+=1;
 i++;
}
}

int main(int argc, char *argv[]){
int p,q,i=1;
set();
int res=-1;
scanf("%d%d",&p,&q);
while(i<max){
    if(q*prime[i]<=p*pal[i]){
        res=i;
    }
    i++;
}
if(res==-1)
printf("Palindromic tree is better than splay tree");
else
    printf("%d\n",res);
    return 0;
}
