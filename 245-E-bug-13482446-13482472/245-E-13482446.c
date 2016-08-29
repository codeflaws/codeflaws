#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int i, j, m=0, p=0, max=0;
    char st[305];
    scanf("%s", st);
    for(i=0;st[i];i++){
        if(st[i]=='+'){
            if(m>0){
                m--;
            }
            else{
                p++;
            }
        }
        else{
            if(p>0){
                p--;
            }
            else{
                m++;
            }
        }
        if(max<m) max=m;
        if(max<p) max=p;
    }
    printf("%d", max);




    return 0;
}
