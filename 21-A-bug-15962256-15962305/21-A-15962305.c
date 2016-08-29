#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int valid(char c){
    if((c>='A' && c<='z')|| (c>='0'&&c<='9') || c=='_') return 1;
    return 0;
}
void no(){
    printf("NO\n");
    exit(0);
}
int main(int argc, char *argv[])
{
    //freopen("in.txt", "r", stdin);
    char id[110];
    fgets(id,110, stdin);

    char *user, *host, *res;

    if(id[0]=='@') no();
    if(id[strlen(id)-2]=='/') no();

    user = strtok(id, "@");
    host = strtok(NULL, "/");
    if(host==NULL) {
        host=strtok(NULL, "\n");
        res=NULL;
    }
    else {
        res = strtok(NULL, "\n");
    }

    //printf("%s %s %s\n", user, host, res);

    if(user==NULL || host==NULL) no();
    if(strlen(user)>16 || strlen(host)>32) no();

    int i;

    if(user){
        for(i=0; user[i]!='\0'; i++){
            if(!valid(user[i])) no();
        }
    }
    int word=0;
    if(host){
        for(i=0; host[i]!='\0'; i++){
            if(valid(host[i])) word++;
            else if(host[i]=='.'){
                if(word<1 || word>16) no();
                word=0;
            }
            else{
                if(host[i]!='\n') no();
            }
        }
    }
    if(word==0) no();

    if(res){
        for(i=0; res[i]!='\0'; i++) {
            if(!valid(res[i])) no();
        }
    }
    //printf("%s %s %s\n", user, host, res);
    printf("YES\n");
    return 0;
}
