#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
    {
        int i,j,k,test;
        char s[101];
        scanf("%s",s);
        i = 0;
        while ((s[i]!='\0') && (s[i]!='@') && ((('a'<=s[i]) && (s[i]<='z')) || (('A'<=s[i]) && (s[i]<='Z')) || (('0'<=s[i]) && (s[i]<='9')) || (s[i]=='_'))) i++;
        if ((s[i]=='\0') || (s[i]!='@') || (i==0) || (16<i)) printf("NO");
        else
            {
                test = 0;
                k = 0;
                j = 0;
                while ((s[i+j+1]!='\0') && (s[i+j+1]!='/') && ((('a'<=s[i+j+1]) && (s[i+j+1]<='z')) || (('A'<=s[i+j+1]) && (s[i+j+1]<='Z')) || (('0'<=s[i+j+1]) && (s[i+j+1]<='9')) || (s[i+j+1]=='_') || (s[i+j+1]=='.')) && (test==0))
                    {
                        if (s[i+j+1]=='.')
                            {
                                if((k==0) || (16<k)) test = 1;
                                else k = 0;
                            }
                        else k++;
                        j++;
                    }
                if ((test==1) || (j==0) || (32<j) || (k==0) || (16<k)) printf("NO");
                else
                    {
                        if (s[i+j+1]=='\0') printf("YES");
                        else
                            {
                                if (s[i+j+1]!='/') printf("NO");
                                else
                                    {
                                        k = 0;
                                        while ((s[i+j+k+2]!='\0') && ((('a'<=s[i+j+k+2]) && (s[i+j+k+2]<='z')) || (('A'<=s[i+j+k+2]) && (s[i+j+k+2]<='Z')) || (('0'<=s[i+j+k+2]) && (s[i+j+k+2]<='9')) || (s[i+j+k+2]=='_'))) k++;
                                        if ((s[i+j+k+2]!='\0') || (k==0) || (16<k)) printf("NO");
                                        else printf("YES");
                                    }
                            }
                    }
            }
    return 0;
}
