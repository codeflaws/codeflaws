#include<stdio.h>

int main(int argc, char *argv[])
{
    int n, i;
    int x=0;
    int y=0;
    scanf("%d", &n);
    switch(n%10){
        case 0:
            x = x+2;
            break;
        case 1:
            x = x+7;
            break;
        case 2:
            x = x+2;
            break;
        case 3:
            x = x+3;
            break;
        case 4:
            x = x+3;
            break;
        case 5:
            x = x+4;
            break;
        case 6:
            x = x+2;
            break;
        case 7:
            x = x+5;
            break;
        case 8:
            x = x+1;
            break;
       default:
            x = x+2;
            break;
    }
    switch(n/10){
        case 0:
            y = y+2;
            break;
        case 1:
            y = y+7;
            break;
        case 2:
            y = y+2;
            break;
        case 3:
            y = y+3;
            break;
        case 4:
            x = x+3;
            break;
        case 5:
            y = y+4;
            break;
        case 6:
            y = y+2;
            break;
        case 7:
            y = y+5;
            break;
        case 8:
            y = y+1;
            break;
       default:
            y = y+2;
            break;
    }

    printf("%d", x*y);
    return 0;
}
