//
//  main.c
//  t
//
//  Created by Chen Li Kuan on 5/14/16.
//  Copyright © 2016 kuan. All rights reserved.
//

#include <stdio.h>
#include <string.h>


int main(int argc, const char * argv[])
{
    int i;
    char s1[101],s2[101];
    scanf("%s",s1);
    scanf("%s",s2);
    for(i = 0; i < strlen(s1); i++){
        if(s1[i] >=65 && s1[i] <=90)
            s1[i]+=32;
        if(s2[i] >=65 && s2[i] <=90)
            s2[i]+=32;
    }
    printf("%s %s\n",s1,s2);
    printf("%d\n",strcmp(s1,s2));
    return 0;
}
