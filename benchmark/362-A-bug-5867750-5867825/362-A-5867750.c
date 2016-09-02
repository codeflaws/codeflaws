#include<stdio.h>
#include<math.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int l,k,i,z,j,g,r1,r2,c1,c2;
    z=0;
    l=1;
    scanf("%d",&k);
    char arr[9][9];
    
    
    
        for(i=0;i<k;i++)
    {getchar();
        for(j=0;j<8;j++)
        {
            for(g=0;g<8;g++)
            {   scanf("%c",&arr[j][g]);
                if (arr[j][g]=='K'&&(z%2==0))
                {r1=j;
                c1=g;
                z++;
                }
                else if (arr[j][g]=='K'&&(z%2==1))
                {r2=j;
                c2=g;
                z++;
                }
            
            }
            getchar();
        }   
                
                if((abs(r1-r2)+abs(c1-c2))%4==0)
        
            printf("YES\n");
        
    
        
        else
        printf("NO\n"); 
                
        
                
                
            
        
        
    }
        
        
        
        
        
    
    return 0;
}