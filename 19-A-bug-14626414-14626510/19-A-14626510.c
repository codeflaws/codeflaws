#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
    {
        int n,i,j,k,m,x,y,z;
        int score[50],diff[50],goal[50],classement[50],classementN[50];
        char c;
        char s[100],nom1[31],nom2[31];
        char nom[50][31];
        scanf("%d",&n);
        for (i=0;i<n;i++)
            {
                scanf("%s",nom[i]);
                score[i] = 0;
                diff[i] = 0;
                goal[i] = 0;
            }
        m = (n * (n - 1)) / 2;
        for (i=0;i<m;i++)
            {
                scanf("%s",s);
                //scanf("%c",&c);
                j = 0;
                while (s[j]!='-')
                    {
                        nom1[j] = s[j];
                        j++;
                    }
                nom1[j] = '\0';
                strcpy(nom2,s+j+1);
                scanf(" %d:%d",&x,&y);
                z = 0;
                j = 0;
                while (z<2)
                    {
                        if (strcmp(nom[j],nom1)==0)
                            {
                                if (x==y) score[j] = score[j] + 1;
                                else if (y<x) score[j] = score[j] + 3;
                                diff[j] = diff[j] + x - y;
                                goal[j] = goal[j] + x;
                                z++;
                            }
                        else
                            {
                                if (strcmp(nom[j],nom2)==0)
                                    {
                                        if (x==y) score[j] = score[j] + 1;
                                        else if (x<y) score[j] = score[j] + 3;
                                        diff[j] = diff[j] + y - x;
                                        goal[j] = goal[j] + y;
                                        z++;
                                    }
                            }
                        j++;
                    }
                //printf("\nBien : %s %d:%d\n",s,x,y);
            }

        //Le tri des elements du tableau
        for (i=0;i<n;i++)
            {
                j = 0;
                while ((j<i) && ((score[i]<score[classement[j]]) || ((score[i]==score[classement[j]]) && (diff[i]<diff[classement[j]])) || ((score[i]==score[classement[j]]) && (diff[i]==diff[classement[j]]) && (goal[i]<goal[classement[j]])))) j++;
                for (k=i;k>j;k--) classement[k] = classement[k-1];
                classement[j] = i;
            }

        for (i=0;i<n/2;i++)
            {
                j = 0;
                while ((j<i) && (strcmp(nom[classementN[j]],nom[classement[i]])<0)) j++;
                for (k=i;k>j;k--) classementN[k] = classementN[k-1];
                classementN[j] = classement[i];
            }

        for (i=0;i<n/2;i++)
            {
                printf("%s",nom[classementN[i]]);
                if (i<n/2-1) printf("\n");
            }
    return 0;
}
