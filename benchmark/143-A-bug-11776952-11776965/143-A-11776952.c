//emre
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int r1,r2,d1,d2,c1,c2,x,y,z,t,emre,f,g,var=-1;
    scanf("%d %d",&r1,&r2);
    scanf("%d %d",&c1,&c2);
    scanf("%d %d",&d1,&d2);
    
    for(x=1;x<=9;x++)
        {
            y=r1-x;
            t=d1-x;
            z=c1-x;
            if ( (r2==t+z) && (d2==y+z) && (c2==y+t) )
            {
                if(x==y || x==z || x==t || y==z || y==t || z==t || x>9 || y>9 || z>9 || t>9)
                {
                    var=-1;
                }
                else
                {           
                printf("%d %d\n",x,y);
                printf("%d %d\n",z,t);
                var=0;
                x+=10;
                }
            }
        }
    
    if(var==-1)
    {
        printf("-1");
    }
    
        
        return 0;
}