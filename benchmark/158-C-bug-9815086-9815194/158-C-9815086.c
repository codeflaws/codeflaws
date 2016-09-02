#include <stdio.h>

char temp[205];
char A[10005][204];
int top=0;

void push(char *a)
{   
//    printf("received:%s\n",a);
   /* int j=0;
    while(a[j]!='\0')
    {
        printf("%c",a[j]);
        j++;
    }
    printf("\n");*/

  // if(a[8]=='\0')
    //   printf("hello\n");
   top++;
   int i;
   for(i=0;a[i]!='\0';i++)
       A[top][i]=a[i];
   A[top][i]='\0';

//   printf("stack: top is %d %s\n",top,A[top]);
}

void pop()
{
    top--;
}


void pwd()
{
    int i;
    printf("/");
    for(i=1;i<=top;i++)
    {
        printf("%s/",A[i]);
    }
    printf("\n");
}

void cd(char *param)
{   
//    printf("%s\n",param);
    int i,j;
    if(param[0]=='/')
    {
        top=0;
    }
    for(i=1;param[i]!='\0';i++)
    {
        if(param[i]=='/')
            continue;
        else if(param[i]=='.')
        {
            i++;
            pop();
        }
        else
        {   
            j=0;
            while(param[i]!='/' && param[i]!='\0')
            {   
                temp[j]=param[i];
                i++;
                j++;
            }
  //          printf("J is %d\n",j);
            temp[j]='\0';
            push(temp);
            if(param[i]=='\0')
                break;
        }
    }
}

int main(int argc, char *argv[])
{
    A[top][0]='/';
    A[top][1]='\0';
    int t;
    scanf("%d",&t);
    getchar();
    char input[300];
    while(t--)
    {
        scanf("%[^\n]s",input);
        getchar();
//        printf("%s\n",input);
    

    if(input[0]=='p')
        pwd();
    else
        cd(input+3);
    }



return 0;
}
