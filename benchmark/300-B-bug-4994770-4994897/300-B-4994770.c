#include <stdio.h>
// coach
void fun(m){
     int a,b;
     for(m--;m>0;m--)scanf("%d%d",&a,&b);
     printf("-1");
     return;
     }
int main(int argc, char *argv[]){
    int a,b,i,j,n,m,z=1;scanf("%d%d",&n,&m);int s[n];for(i=0;i<n;i++)s[i]=0;
    for(i=0;m>0;m--){
                  scanf("%d%d",&a,&b);
                  for(j=0;j<n;j++){
                                   if(a==s[j]){
                                             j-=j%3;
                                             if(s[j]==0)s[j]=b;
                                             else if(s[j+1]==0)s[j+1]=b;
                                             else if(s[j+2]==0)s[j+2]=b;
                                             else if(s[j]==b||s[j+1]==b||s[j+2]==b);
                                             else {fun(m);return 0;}
                                             z=0;
                                             break;
                                             }
                                   if(b==s[j]){
                                             j-=j%3;
                                             if(s[j]==0)s[j]=a;
                                             else if(s[j+1]==0)s[j+1]=a;
                                             else if(s[j+2]==0)s[j+2]=a;
                                             else if(s[j]==a||s[j+1]==a||s[j+2]==a);
                                             else {fun(m);return 0;}
                                             z=0;
                                             break;
                                             }
                                   }
                  if(z){
                        s[i]=a;
                        s[i+1]=b;
                        i+=3;
                        if(i>n){fun(m);return 0;}
                        }
                  }
    for(i=0;i<n;i++){
                     for(j=0;j<n;j++)if(s[j]==i+1){i++;j=-1;}
                     for(j=0;j<n;j++)if(s[j]==0){s[j]=i+1;break;}
                     }
    for(i=0;i<n/3;i++)printf("%d %d %d\n",s[3*i],s[i*3+1],s[3*i+2]);
    return 0;
}
