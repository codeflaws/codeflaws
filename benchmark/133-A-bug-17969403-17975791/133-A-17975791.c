#include <stdio.h>

int main(int argc, char *argv[])
{
        char c;
        int flag=0;

        while(1)
        {   
                scanf("%c",&c);
                if( c == '\n') break;
                if(flag) continue;
                if( c == 'H'||c=='Q'||c=='9') flag =1; 
        }   
        if(flag) printf("YES");
        else printf("NO");

        return 0;
}