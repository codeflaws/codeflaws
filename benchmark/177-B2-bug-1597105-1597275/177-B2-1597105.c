#define MAX 10010
int prime[MAX];
int p[MAX];

int main(int argc, char *argv[]){
  int i,j,k,n,c,x;
  prime[0]=-1;prime[1]=-1;p[0]=1;
  for(k=1,i=2;i<MAX;i++)
    if(!prime[i])
      for(prime[i]=k,p[k++]=i,j=i*2;j<MAX;j+=i)
        prime[j]=-1;
	scanf("%d",&n);
	c=n;
	while(n>1){
		for(x=2;x<MAX;x++){
			if(prime[x]>=0&&n%x==0){
				c+=n/x;
				n/=x;
				//printf("--%d\n",n);
				goto next;
			}
		}
		if(x==MAX)break;
		next:;
	}
	printf("%d\n",c+(n>1?1:0));
  //for(j=1;j<k;j++)
	//printf("%d",p[j]);
	exit(0);
return 0;
}
