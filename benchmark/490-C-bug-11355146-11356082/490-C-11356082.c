#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000001

char public_key[MAX_SIZE];

int main(int argc, char *argv[])
{
    int a, b;
    int left_side[MAX_SIZE];
    int right_side[MAX_SIZE];
    
    scanf("%s", public_key);
    scanf("%d %d", &a, &b);
    
    int key_length = strlen(public_key);
    int multiple = 1;
    int tmp_l_num = 0;
    int tmp_r_num = 0;
    
    int i;
    for(i = 0; i < key_length; i++)
    {
        tmp_r_num = ((public_key[key_length-1-i] - '0') * multiple + tmp_r_num) % b;
        multiple = (multiple * 10) % b;
        right_side[key_length-1-i] = tmp_r_num;
        
        tmp_l_num = (tmp_l_num * 10 + (public_key[i] - '0')) % a;
        left_side[i] = tmp_l_num;
    }
    
    int pos = key_length;
    
    for(i = 0; i < key_length; i++)
    {
        if(left_side[i] == 0 && right_side[i+1] == 0)
        {
            while(!(public_key[i+1] - '0')) i++;
            pos = i;
            break;
        }
    }
    
    if(pos < key_length-1)
    {
        printf("YES\n");
        
        for(i = 0; i <= pos; i++)
            printf("%c", public_key[i]);
        printf("\n");
        
        for(; i < key_length; i++)
            printf("%c", public_key[i]);
        printf("\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}
