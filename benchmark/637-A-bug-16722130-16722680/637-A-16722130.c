#include <stdio.h>


int main(int argc, char *argv[])
{
    int i;
    int nums;
    int* num;
    int maxnum, maxid;
    
    int idnums;
    int ids[1000];
    int idnum[1000];
    
    idnums = 0;
    maxnum = 0;
    
    scanf("%d\r\n",&nums);
    num = (int*)malloc(nums*4);
    
    memset(idnum,0,nums*4);
    memset(ids,0,nums*4);
    
    for (i=0; i<nums; i++)
        scanf("%d",&num[i]);
        
    for (i=0; i<nums; i++)
    {
        int j;
        j=0;
        while ((j<idnums) && (ids[j]!=num[i]))
            j++;
        idnum[j]++;
        if (j==idnums) ids[idnums++]=num[i];
        
        if (maxnum < idnum[j]){
             maxnum = idnum[j];
             maxid = ids[j];
        }
    }

    printf("%d\r\n",maxid);
    
    system("PAUSE");	
    return 0;
}
