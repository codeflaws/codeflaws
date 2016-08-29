#include <stdio.h>

int main(int argc, char *argv[]){

int n,i,k=0,swap;

scanf("%d", &n);

char arr[n+1],are[4*n+1],temp;

scanf("%s", arr);

for(i=0;i<n;i++){

    if(arr[i] == '4'){
        are[k++] = '3';
        are[k++] = '2';
        are[k++] = '2';

    }
    
    if(arr[i] == '9'){
        are[k++] = '7';
        are[k++] = '3';
        are[k++] = '3';
        are[k++] = '2';
    }

    else if(arr[i] == '6'){

        are[k++] = '5';
        are[k++] = '3';
    }

    else if(arr[i] == '8'){

        are[k++] = '7';
        are[k++] = '2';
        are[k++] = '2';
        are[k++] = '2';

    }

    else if(arr[i] == '0')
        arr[i] == '1';

    else
        are[k++] = arr[i];


}

while(1){

    swap = 0;

    for(i=0;i<k-1;i++){

        if(are[i] < are[i+1]){

            temp = are[i];
            are[i] = are[i+1];
            are[i+1] = temp;
            swap =1;

        }


    }

    if(swap == 0)
        break;
}

for(i=0;i<k;i++){

    if(are[i] != '1')
        printf("%c",are[i]);
}



return 0;
}