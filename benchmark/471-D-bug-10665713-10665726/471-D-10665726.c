#include<stdio.h>
#define BUFFER_SIZE 2000000
int lenP,lenT,sz,pat[BUFFER_SIZE],z[BUFFER_SIZE],in1[BUFFER_SIZE],in2[BUFFER_SIZE];

void z_algo(){
    int lf=0,rt=0,i,k,ip;/*lf,rt記錄現在檢查過最右邊的區間*/
    z[0]=sz;
    for(i=1;i<sz;i++){
        if(i>rt){ /*i不在[lf,rt] 需要從頭比對*/
            for(k=0;i+k<sz&&pat[k]==pat[i+k];k++);
            z[i]=k;
            lf=i;
            rt=i+k-1;
        }
        else{ /*i在[lf,rt] 可將i映射至ip*/
            ip=i-lf;
            if(i+z[ip]>rt){
                for(k=rt-i+1;i+k<sz&&pat[k]==pat[i+k];k++);
                z[i]=k;
                lf=i;
                rt=i+k-1;
            }
            else z[i]=z[ip];
        }
    }
}

int main(int argc, char *argv[]){
    int i,n,w,x,y,find,cnt=0;
        scanf("%d %d",&x,&y);
        for(i=0;i<x;i++)scanf("%d",in1+i);
        for(i=0;i<y;i++)scanf("%d",in2+i);
        for(i=1;i<x;i++)in1[i-1] = in1[i]-in1[i-1];
        for(i=1;i<y;i++)in2[i-1] = in2[i]-in2[i-1];
        lenP = x-1;
        lenT = y-1;
        for(i=lenT+1,sz=lenP+lenT+1;i<sz;i++)
            pat[i] = in1[i-(lenT+1)];
        for(i=0;i<lenT;i++)
            pat[i] = in2[i];
        pat[i++]=2147483647;
        if(lenT>lenP)printf("0\n");
        else if(lenT==0)printf("%d\n",x);
        else{
            z_algo();
            for(find=0;i<sz;i++)
                if(z[i]==lenT)
                    cnt++;
            printf("%d\n",cnt);
        }
    return 0;
}