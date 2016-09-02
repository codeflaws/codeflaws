#include <stdio.h>
int main(int argc, char *argv[]){
    int i = 0  , j = 0  ;
char a[4][4];
for (i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf(" %c",&a[i][j]) ;
    }
}
if ( a[0][0]==a[2][2]&&a[0][1]==a[2][1]&&a[1][0]==a[1][2])printf("YES");
else printf("NO");


return 0 ;

}
