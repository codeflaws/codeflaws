unsigned a,b,c,x=1;
int main(int argc, char *argv[]){
for(scanf("%d%d",&a,&c);a|b;x*=3,a/=3,c/=3)b+=(3+c%3-a%3)%3*x;
printf("%d",b);exit(0);
return 0;
}