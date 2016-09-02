long long a[4000000],d[4000],e[4000],v,y,z;
int main(int argc, char *argv[]){
int n,i,j,p,q,r,s;
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",a+i*n+j),d[i+j]+=a[i*n+j],e[i-j+n]+=a[i*n+j];
y=z=-1;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
v=d[i+j]+e[i-j+n]-a[i*n+j],(i+j)&1?v>y?y=v,p=i,q=j:0:
v>z?z=v,r=i,s=j:0;
printf("%lld\n%d %d %d %d",y+z,p+1,q+1,r+1,s+1);
return 0;
}
