//
//  main.c
//  160319CF_B
//
//  Created by tjua on 16/3/19.
//  Copyright © 2016年 tjua. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,k;
    scanf("%d%d",&n,&k);
    if (k>n/2) k=n/2;
    //ans=C(2,2*k)+(n-2*k)*2*k;
    printf("%d\n",k*(2*n-2*k-1));
    return 0;
}
