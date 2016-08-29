#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,j=0,count=0,c=0,e=0,f=0,g=0,d=0,k,flag=0;
    char a[100], b[5]={"hello"};
    gets(a);
     for(i=0;a[i]!='\0';i++){
        if(a[i]=='h'){
            c++;
        }
        if(a[i]=='o'){
            e++;
        }
          if(a[i]=='e'){
            f++;
        }
          if(a[i]=='l'){
        g++;
        }
    }
  //  printf("%d",c);
  //  exit(0);
  if(c==0 || e==0 || f==0 || g<2){
    printf("N0");
    exit(0);
  }
  else{
        d=0;
    for(i=0;a[i]!='\0';i++){
            for(j=d;b[j]!='\0';j++){
            if(a[i]!=b[j]){
                break;
            }

           if(a[i]==b[j]){
                    count++;
                    d++;
                    break;
                }
            }
    }
  }

//  printf("%d",count);
  //exit(0);
 if(count>=5){
    printf("YES");
 }
 else{
    printf("NO");
 }
return 0;
}

