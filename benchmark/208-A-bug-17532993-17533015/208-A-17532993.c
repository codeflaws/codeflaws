#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
    char dj[500],original[500];
    scanf("%s",dj);
    int i,j,n=strlen(dj),flag=1;
    j=0;
    for(i=0;i<n-3;){
        if(dj[i]=='W'&&dj[i+1]=='U'&&dj[i+2]=='B'){
            i+=3;
            if(flag==0){
                original[j]=32;
                j++;
                flag=1;
            }
        }
        else{
            original[j]=dj[i];
            j++;
            i++;
            flag=0;
        }
    }
    original[j]='\0';
    printf("%s\n",original);
    return 0;
}
