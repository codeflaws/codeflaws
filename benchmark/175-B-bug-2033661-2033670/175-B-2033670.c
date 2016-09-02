#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
struct score
{
  char s[20]; 
  int c;
}a[1005],b[1002];

int main(int argc, char *argv[])
{
  int n,m,i,j,k,flag,t1,t2;
  double f1,f2;
  char s[1005][20];
  while(scanf("%d",&n)!=EOF){
    for(i=0;i<n;i++)
      scanf("%s %d",a[i].s,&a[i].c);
    strcpy(b[0].s,a[0].s);   b[0].c=a[0].c;    m=1;
    for(i=1;i<n;i++){
	  flag=1;
	  for(j=0;j<m;j++){
	    if(strcmp(a[i].s,b[j].s)==0){
		  if(a[i].c>b[j].c) 	b[j].c=a[i].c;
		  flag=0;
	    }	
	  }
	  if(flag){
		strcpy(b[m].s,a[i].s);    b[m].c=a[i].c;
		m++;	
	  }
	}	
    printf("%d\n",m);
    for(i=0;i<m;i++){
	  t1=0;   t2=0;
	  for(j=0;j<m;j++){	
	   if(b[j].c>b[i].c)   t1++;
	   else                t2++;	
	  }
	  f1=1.0*t1/m;   f2=1.0*t2/m;
	  if(f1>0.50)  printf("%s noob\n",b[i].s);
	  else if(f1>0.20 && (f2>0.50||fabs(f2-0.50)<0.00000001)) printf("%s random\n",b[i].s);
	  else if(f1>0.10 && (f2>0.80||fabs(f2-0.80)<0.00000001)) printf("%s average\n",b[i].s);
	  else if(f1>0.01 && (f2>0.90||fabs(f2-0.90)<0.00000001)) printf("%s hardcore\n",b[i].s);
	  else if(f2>99.0/100||fabs(f2-0.99)<0.00000001) printf("%s pro\n",b[i].s);
    }
  }
  return 0;	
}
