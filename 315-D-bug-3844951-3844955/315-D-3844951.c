#include <stdio.h>
char a[101],c[101];
int before[101][101];//before[POS][Chk];
int beforeI[101][101];
int main(int argc, char *argv[]){
    int i,j,k,l,b,d,lenL=0,lenS=0,curChk=0,maxL,maxS,usebefore,first=-1,last=-1,point=i,memo,ans=0,remain,tmpa,tmpb,tmpChk;
    scanf ("%d%d",&b,&d);
    scanf ("%s%s",a,c);
    while (a[lenL]!=0)lenL++;
    while (c[lenS]!=0)lenS++;
    if (lenL*b<lenS*d){ //EXIT if can't possible
        printf ("0");
        exit(0);
    }
    maxL=lenL*b;
    maxS=lenS*d;
    for (i=0;i<maxL;i++){
        /*if (first%lenL==i%lenL&&curChk%lenS==0){
            point=i;
            remain = maxL-i+1;
            memo=point-first+1;
            curChk += (remain/memo)*curChk;
            //printf ("%d %d\n",maxL-i,memo);
            i+=(remain/memo)*(i-1);
            //i=maxL;
        }*/
            if (curChk==0&&i>lenS){
                printf ("0");
                exit(0);
            }
            if (before[i%lenL][curChk%lenS]==0){
                before[i%lenL][curChk%lenS]=curChk;
                beforeI[i%lenL][curChk%lenS]=i;
                if (a[i%lenL]==c[curChk%lenS]) curChk++;
                //printf ("test\n");
            }else if (maxL-i>i-beforeI[i%lenL][curChk%lenS]){
                tmpChk=curChk;
                tmpa=beforeI[i%lenL][curChk%lenS];
                tmpb=before[i%lenL][curChk%lenS];
                before[i%lenL][curChk%lenS]=curChk;
                beforeI[i%lenL][curChk%lenS]=i;
                //printf ("GG\n");
                curChk+=(curChk-tmpb)*((maxL-i)/(i-tmpa));
                i+=(i-tmpa)*((maxL-i)/(i-tmpa))-1;
                //curChk+=(curChk-before[i%lenL][curChk%lenS])*tmpb;
                //i+=(i-tmpa)*tmpb;
                //curChk+=tmpChk-before[i%lenL][curChk%lenS];
                //i+=i-tmpa;
            }else{
                if (a[i%lenL]==c[curChk%lenS])curChk++;
            }
            /*if (curChk==lenS){
                    last=i;
            }*/
            //curChk++;
            //if (curChk%maxS==0) ans++;

        /*
        if (curChk>=maxS&&first%lenL==i%lenL&&curChk%lenS==1){
            point=i;
            remain = maxL-i;
            memo=point-first;
            ans += remain/memo*ans;
            //printf ("%d %d\n",maxL-i,memo);
            i+=(remain/memo)*memo;
            //i=maxL;
        }*/
        /*
        if (first%lenL==i%lenL&&curChk%lenS==0){
            point=i;
            remain = maxL-i;
            memo=point-first+1;
            curChk += (remain/memo)*curChk;
            //printf ("%d %d\n",maxL-i,memo);
            i=(remain/memo)*i;
            //i=maxL;
        }
        */
    }
    //printf ("%d",curChk/maxS);
    //printf ("%d : %d\n",i,curChk);
    printf ("%d",curChk/maxS);
    exit(0);

return 0;
}
