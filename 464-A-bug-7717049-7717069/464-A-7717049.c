int main(int argc, char *argv[]){
    int n,k;
    scanf("%d %d",&n,&k);
    char s[n];
    scanf("%s",s);
    int i=n-1,fl=1;
    while (i>=0 && fl) {
        int j;
        for (j=s[i]+1; j<='z' && fl && j<('a'+k); j++) {
            //printf("%c %c\n",s[i],j);
            if(((j!=s[i-1] && i>0) && ((j!=s[i-2] && i>1)||i==1))||i==0){
                s[i]=j;
                fl=0;
                break;
            }
        }
        if (!fl) {
            break;
        }
        i--;
    }
    if (fl) {
        printf("NO");
    }
    else {
        int j=0;
        while (j!=i) {
            printf("%c",s[j]);
            j++;
        }
        printf("%c",s[i]);
        j++;
        while (j<n) {
            if((j>=2 && s[j-2]!='a') && (s[j-1]!='a' && j>=1)){
                s[j]='a';
                printf("a");
            }
            else if(((j>=2 && s[j-2]!='b')|| j<2) && ((s[j-1]!='b' && j>=1)||j<1)){
                s[j]='b';
                printf("b");
            }
            else {printf("c");s[j]='c';}
            j++;
            
        }
    }
    return 0;
}