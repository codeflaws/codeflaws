#include<stdio.h>
int main(int argc, char *argv[])
{
     int i,n,first,sec,len,third,a[2000000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    len=0;first=sec=third=-1;
    for(i=0;i<n;i++)
    {
        if(len==0) {len++; first=i;}
        else if(len==1){if (a[i]>a[first]) {len++; sec=i;}
                        else first=i;}
        else if(len==2){ if(a[i]<a[sec]) {len++; third=i; break;}
                                            else sec=i; }

    }
    if(third==-1)
    {
    len=0;
       for(i=0;i<n;i++)
       {
        if(len==0) {len++; first=i;}
        else if(len==1){if (a[i]<a[first]) {len++; sec=i;}
                        else first=i;}
        else if(len==2){ if(a[i]>a[sec]) {len++; third=i; break;}
                                            else sec=i; }

       }
    }
    if(third==-1) printf("0\n");
    else printf("3\n%d %d %d\n",first+1,sec+1,third+1);

}