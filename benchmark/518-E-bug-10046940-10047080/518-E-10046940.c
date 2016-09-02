#include <stdio.h>
#define maxn 100001
int inf=1000000001;
int a[maxn],m,n,k,i,j,flag;
char c;
int char_read()
{
  c=getchar();
  if(c=='?'){getchar();return inf;}
  if(c=='-'){scanf("%d",&m);getchar();return -m;}
  m=c-'0';while(c=getchar(),c!=' ')m*=10,m+=c-'0';
  return m;
}
int judge(){
   for(i=0,j=i+k;i<k;i++,j=i+k){
        if(a[i]==inf){
                for(m=i+k;m<n && a[m]==inf;m+=k);
                flag=((m-i)/k)>>1;
                if(m>=n || a[m]>=((m-i)/k+1>>1)) a[i]=-flag;
                else a[i]=a[m]-(m-i)/k;
                for(;j<m;j+=k)a[j]=a[j-k]+1;
        }
        for(;j<n;j+=k){
                if(a[j]==inf){
                        for(m=j+k;m<n && a[m]==inf;m+=k);
                        flag=((m-j)/k)>>1;
                        if(m<n && (a[m]-a[j-k]<=((m-j)/k)))return 0;
                        if(a[j-k]<(-flag) && (m>=n || a[m]>=((m-j)/k+1>>1)))a[j]=-flag;
                        else if(a[j-k]>=(-flag))a[j]=a[j-k]+1;
                        else a[j]=a[m]-(m-j)/k;
                        for(j+=k;j<m;j+=k)a[j]=a[j-k]+1;
                        continue;
                }
                if(a[j-k]>=a[j])return 0;
        }
  }
  return 1;
}
int main(int argc, char *argv[])
{
        while(scanf("%d%d%*c",&n,&k)==2){
                for(i=0,flag=n-1;i<flag;i++)a[i]=char_read();
                char ch[10];scanf("%s",ch);
                if(ch[0]=='?')a[i]=inf;
                else {
                        a[i]=0,m=1;while(ch[m])a[i]*=10,a[i]+=ch[m]-'0';
                        if(ch[0]=='-')a[i]=-a[i];
                        else {for(j=1,flag=1;j<m;j++,flag*=10);a[i]+=(ch[0]-'0')*flag;}
                }
                if(!judge())printf("Incorrect sequence\n");
                else {printf("%d",a[0]);for(i=1;i<n;i++)printf(" %d",a[i]);printf("\n");}
        }
        return 0;
}
