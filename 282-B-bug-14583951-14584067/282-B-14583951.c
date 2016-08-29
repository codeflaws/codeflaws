#include<stdio.h>
int a[1000001][2],b[1000001][2],temp[1000001][2],temp2[1000001][2];
char s[1000001];
void mergeSort(int low,int mid,int high){
    int i,m,k,l;
    l=low;
    i=low;
    m=mid+1;
    while((l<=mid)&&(m<=high)){
         if(a[l][0]<=a[m][0]){
             temp[i][0]=a[l][0];
             temp2[i][0]=b[l][0];
             temp[i][1]=a[l][1];
             temp2[i][1]=b[l][1];
             l++;
         }
         else{
             temp[i][0]=a[m][0];
             temp2[i][0]=b[m][0];
             temp[i][1]=a[m][1];
             temp2[i][1]=b[m][1];
             m++;
         }
         i++;
    }
    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i][0]=a[k][0];
             temp2[i][0]=b[k][0];
             temp[i][1]=a[k][1];
             temp2[i][1]=b[k][1];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i][0]=a[k][0];
             temp2[i][0]=b[k][0];
             temp[i][1]=a[k][1];
             temp2[i][1]=b[k][1];
             i++;
         }
    }
    for(k=low;k<=high;k++){
         a[k][0]=temp[k][0];
         b[k][0]=temp2[k][0];
         a[k][1]=temp[k][1];
         b[k][1]=temp2[k][1];
    }
}

void partition(int low,int high){
    int mid;
    if(low<high){
         mid=(low+high)/2;
         partition(low,mid);
         partition(mid+1,high);
         mergeSort(low,mid,high);
    }
}

int main(int argc, char *argv[])
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d%d",&a[i][0],&b[i][0]);
        a[i][1]=b[i][1]=i;
    }
    partition(1,n);
    for(i=1;i<=n;++i)
        a[i][0]+=a[i-1][0];
    for(i=n;i>0;--i)
        b[i][0]+=b[i+1][0];
    for(i=1;i<=n;++i)
    {
        if(abs(a[i][0]-b[i+1][0])<=500)
            break;
    }
    if(i==n+1)
    {
        printf("-1");
        return 0;
    }
    for(j=1;j<=i;++j)
        s[a[j][1]-1]='A';
    for(j=i+1;j<=n;++j)
        s[a[j][1]-1]='G';
    s[n]='\0';
    printf("%s",s);
    return 0;
}
