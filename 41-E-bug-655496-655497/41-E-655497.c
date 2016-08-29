int main(int argc, char *argv[]){
	int n,u,v; scanf("%d",&n);
	printf("%d\n",n*n/4);
	for(u=0;u<n/2;u++) for(v=n/2;v<n;v++) printf("%d %d\n",u+1,v+1);
	return 0;
}
