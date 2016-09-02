//�е�̰�ĵ�ζ����������ô�ˣ���ô���ױ����ţ�
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a>b)?b:a)
#define LLg long long
#define MAX 2147483647
int cmp(const void *a,const void *b){
          return *(int *)a-*(int *)b;
}
int A[100002],B[100002],T[200005],C[200005];
int N,M,K,Tt=0;
void init();
void doit();
int main(int argc, char *argv[])
{
    //freopen("D.in","r",stdin);
    init();
    doit();
    return 0;
}
void init()
{
    scanf("%d%d%d",&N,&M,&K);
}
void doit()
{
    int i,j,ja=1,jb=1;
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
        C[i]=A[i];
    }
    for(j=0;j<M;j++)
    {
        scanf("%d",&B[j]);
        C[N+j]=B[j];
    }
    qsort(A,N,sizeof(A[0]),cmp);
    qsort(B,M,sizeof(B[0]),cmp);
    qsort(C,N+M,sizeof(C[0]),cmp);
    j=0;
    while(j<N+M)
    {
        Tt++;
        while(C[j]==C[j+1]) j++;
        while(A[ja]<=C[j]&&ja<N) T[Tt]++,ja++;
        while(B[jb]<=C[j]&&jb<M) T[Tt]--,jb++;
        j++;
    }
    for(i=Tt;i>0;i--)
    if(T[i]>0)
    {
        printf("YES\n");
        return;
    }else T[i-1]+=T[i];
    printf("NO\n");
    return;
}

