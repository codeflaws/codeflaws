#include<stdio.h>
//#include<math.h>
int main(int argc, char *argv[]){
    int n,*r1,i,m,*p1,*p2,k,a,b,j,l,rm,p1m,p2m;
    float t,r2,temp,z;
    scanf("%d",&n);
    r1=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;++i){
                     
                     scanf("%d",&r1[i]);
                     if(i==0)
                     rm=r1[i];
                     else if(r1[i]>rm)
                     rm=r1[i];
                     }
    scanf("%d",&m);
    p1=(int*)malloc(m*sizeof(int));
    for(i=0;i<m;++i){
                     scanf("%d",&p1[i]);
                     if(i==0)
                     p1m=p1[i];
                     else if(p1[i]>p1m)
                     p1m=p1[i];
                     }
    scanf("%d",&k);
    p2=(int*)malloc(k*sizeof(int));
    for(i=0;i<k;++i){
                     scanf("%d",&p2[i]);
                     if(i==0)
                     p2m=p2[i];
                     else if(p2[i]<p2m)
                     p2m=p2[i];
                     }
    scanf("%d %d",&a,&b);
    t=(float)a/b;
    /*r2=((float)r1[0]*r1[0])/((p2[0]*t/p1[0])+1);
    //printf("%f \n",max);
    
    //for(i=0;i<n;++i){
                     z=(float)p2[0]/p1[0];
                     //temp=((float)r1[i]*r1[i])/(z*t+1);
                     temp=((float)rm*rm)/(z*t+1);
                     if(temp>r2)
                     r2=temp;
                     for(j=0;j<m;++j)
                     {
                                     
                                     for(l=0;l<k;++l){
                                               temp=(float)p2[l]/p1[j];
                                               if(temp<z)      
                                               {               z=temp;
                                                               //temp=((float)r1[i]*r1[i])/(z*t+1);
                                                               temp=((float)rm*rm)/(z*t+1);
                                               //printf("%f \n",temp);
                                               if(temp>r2)
                                               r2=temp;
                                               }
                                               
                                     }
                     }
    //}
    */
    r2=((float)rm*rm)/(((float)p2m/p1m)*t+1);
    r2=sqrt(r2);      
    printf("%f",r2);
    //getchar();
    //getchar();
    return 0;
}
