#include<stdio.h>
#include<string.h>

char *lines[4];

int pos(char *s,int l,int k){
    int vc=0,i,j;
    for(i=l-1,j=1;i>=0;i--,j++){
        switch(s[i]){
            case 'a':case 'e':case 'i': case 'o':case 'u':
            vc++;
        }
        if(vc == k) return i;
    }
    return -1;
}

int compare(char *s1,char *s2,int l1,int l2,int p1,int p2){
    int i;
    printf("###%s %s###\n",s1,s2);
    if(p1!=p2) return 0;
    l1--;
    l2--;
    for(i=0;i<p1;i++){
        if(s1[l1] != s2[l2]) return 0;
    }
    return 1;
}

int main(int argc, char *argv[]){
    int n,k,i,j,last;
    int l[4],p[4];
    int aabb=1,abab=1,abba=1,aaaa=1,no=0;
    for(i=0;i<4;i++){
        lines[i] = (char*)malloc(sizeof(char)*100000);
    }

    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        for(j=0;j<4;j++){
            scanf("%s",lines[j]);
            printf("%s\n",lines[j]);
            l[j] = strlen(lines[j]);
            p[j] = pos(lines[j],l[j],k);
            if(p[j]==-1){
                no = 1;
                break;
            }
        }
        if(no) break;
        //printf("%s %s\n",lines[0],lines[1]);
        //printf("%d",compare(lines[0],lines[1],l[0],l[1],p[0],p[1]));
        if(aabb)
        if(!strcmp(lines[0]+p[0],lines[1]+p[1]) && !strcmp(lines[2]+p[2], lines[3]+p[3])){
            aabb=1;
        }else{
            aabb=aaaa=0;
        }

        if(abab)
        if(!strcmp(lines[0]+p[0],lines[2]+p[2]) && !strcmp(lines[1]+p[1], lines[3]+p[3])){
            abab=1;
        }else{
            abab=aaaa=0;
        }

        if(abba)
        if(!strcmp(lines[0]+p[0],lines[3]+p[3]) && !strcmp(lines[1]+p[1], lines[2]+p[2])){
            abba=1;
        }else{
            abba=aaaa=0;
        }
        if(aabb==0 && abab==0 && abba==0 && aaaa==0){
            no=1;
            break;
        }
    }
    if(no)printf("NO");
    else if(aaaa) printf("aaaa");
    else if(aabb) printf("aabb");
    else if(abab) printf("abab");
    else if(abba) printf("abba");
    else printf("NO");
        return 0;
}
