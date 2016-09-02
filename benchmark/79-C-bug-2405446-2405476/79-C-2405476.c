#include<stdio.h>
#include<string.h>
#define MAX 100032
int main(int argc, char *argv[]){
  char str[MAX],c,hate[16];
  int i,j,k,n,lstr,pstr,maxlen=0,len,maxp,p,sub,count,check[MAX]={0};
  fgets(str,sizeof(str)/sizeof(char),stdin);
  lstr=strlen(str);
  //printf("%d\n",lstr);
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s%*c",hate);
    pstr=strlen(hate);
    //printf("%d\n",pstr);
    for(j=0;j<lstr-pstr;j++){
      if(str[j]==hate[0]){
	count=1;
	for(k=j+1;k<j+pstr;k++){
	  if(str[k]==hate[k-j]) count++;
	  else break;
	}
	if(count==pstr && (!check[j] || check[j]>pstr)) check[j]=pstr;
      }
    }
  }
  len=0;
  //for(i=0;i<lstr-1;i++) printf("%d ",check[i]);
  //putchar('\n');
  for(i=lstr-2;i>=0;i--){
    len++;
    if(check[i] && len>check[i]-1) len=check[i]-1;
    if(maxlen<=len){
      maxlen=len;
      maxp=i;
    }
  }
  printf("%d %d\n",maxlen,maxp);
  return 0;
}
  
