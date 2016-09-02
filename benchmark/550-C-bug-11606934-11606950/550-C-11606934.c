
#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char num[101];
    scanf("%s", num);
  	int i, j, z; 
  	int length = (int)strlen(num);
  	int val;
    for (i = 0; i < length; i++)
    {
    	if (num[i] == '8' || num[i] == '0')
    	{
    		printf("YES\n%c\n", num[i]);
    		return 0;
    	}
    }
    if (length > 1)
    {
    	for (i = 0; i < length-1; i++)
    	{
            for (j = i + 1; j < length-1; ++j)
            {
                val = 10 * (num[i] - '0') + num[j] - '0';
                if (val % 8 == 0)
                {
                    printf("YES\n%d\n", val);
                    return 0;
                }
            }
    	}
    	if (length > 2)
    	{
    		for (i = 0; i < length - 2; ++i)
    		{
    			for (j = i + 1; j < length - 1; ++j)
    			{
    				for (z = j + 1; z < length; ++z)
    				{
    					val = 100 * (num[i] - '0') + 10 * (num[j] - '0') + num[z] - '0';
    					if (val % 8 == 0)
    					{
    						printf("YES\n%d\n", val);
    						return 0;
    					}
    				}
    			}
    		}
    	}
    }
    printf("NO\n");
    return 0;
}
