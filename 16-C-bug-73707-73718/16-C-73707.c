int main(int argc, char *argv[]){
	int a,b,x,y,d;
	scanf("%d%d%d%d",&a,&b,&x,&y);
	d=(a/=x)<(b/=y)?a:b;
	printf("%d %d\n",a,b);
	return 0;
}
