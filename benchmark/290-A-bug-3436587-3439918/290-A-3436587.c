#include<stdio.h>
int func(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}
int main(int argc, char *argv[])
{
    int prime[12]={2,3,5,7,11,13,17,19,23,29,31,37};
    int a,flag=0,i;
    char string[50][50]={"Washington","Adams","Jefferson","Madison","Monroe","Adams","Jackson","Van Buren","Harrison","Tyler","Polk","Taylor","Fillmore","Pierce","Buchanan","Lincoln","Johnson","Grant","Hayes","Garfield","Arthur","Cleveland","Harrison","Cleveland","Mckinley","Roosevelt","Taft","Wilson","Harding","Coolidge","Hoover","Roosevelt","Truman","Eisenhower","Kennedy","Johnson","Nixon","Ford","Carter","Reagan"};
    scanf("%d",&a);
    printf("%s",string[a-1]);
    return 0;
}

