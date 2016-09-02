#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct user{
    char *name;
    struct user *prev, *next;
} user;

typedef struct USERS{
    user *first, *last;
} USERS;

int main(int argc, char *argv[])
{
    char line[100+1];
    unsigned long int traffic = 0UL;
    int usernum = 0;
    USERS *userlist = (USERS *)malloc(sizeof(USERS));
    userlist->first = (user *)malloc(sizeof(user));
    userlist->last = (user *)malloc(sizeof(user));
    userlist->first->prev = NULL;
    userlist->last->next = NULL;
    userlist->first->next = userlist->last;
    userlist->last->prev = userlist->first;
    while(gets(line)){
        if(line[0] == '+'){
            user *newuser = (user *)malloc(sizeof(user));
            newuser->name = (char *)malloc((1+strlen(line+1))*sizeof(char));
            strcpy(newuser->name, line+1);
            newuser->next = userlist->first->next;
            newuser->prev = userlist->first;
            userlist->first->next->prev = newuser;
            userlist->first->next = newuser;
            usernum++;
        }
        else if(line[0] == '-'){
            user *moving = userlist->first->next;
            while(strcmp(moving->name, line+1) != 0)
                moving = moving->next;
            moving->prev->next = moving->next;
            moving->next->prev = moving->prev;
            free(moving->name);
            free(moving);
            usernum--;
        }
        else{
            int i;
            for(i = 0; line[i] != ':'; i++)
                ;
            traffic += usernum*strlen(line+i+1);
        }
        getchar();
    }
    printf("%lu", traffic);
    return 0;
}
