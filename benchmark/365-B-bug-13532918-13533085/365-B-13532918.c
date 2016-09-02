int main(int argc, char *argv[]){

long int i,n,len=2,maxlen=2;

scanf("%ld",&n);

long long int a[n];

for (i=0;i<n;i++)
scanf("%lld",&a[i]);


for (i=2;i<n;i++){
if (a[i-2]+a[i-1]==a[i]){
len++;
if (maxlen<len)
maxlen=len;
}
else
len=2;
}

printf("%d",maxlen);

return 0;
}