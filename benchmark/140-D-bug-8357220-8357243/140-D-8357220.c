#include <stdio.h>

void sort(int *pointer, int size, int comienzo, int fin);

int main(int argc, char *argv[]){
    int n, done = 0, penalty = 0, total = 0, ban = 0, count=0;
    int i;

    scanf("%d", &n);
    int time[n];

    for(i=0; i<n; i++){
        scanf("%d", &time[i]);
    }

    sort(time, n, 0, n);

    total = 350;
    for(i=0; i<n; i++){
        if(time[i] <= total){
            total-=time[i];
            done++;
            if(ban==1){
                count += time[i];
                penalty+=count;
            }
        }else{
            if((time[i] > total) && (ban == 0) && (time[i]-360 < 360) && time[i]<710){
                penalty = penalty + (time[i] - total);
                count = penalty;
                total = (360 - penalty);
                done++;
                ban = 1;
            }
        }
    }

    printf("%d %d", done, penalty);

    return 0;
}

void sort(int *pointer, int size, int comienzo, int fin){
  int i, j, temp;
  for(i = comienzo; i < fin; i++){
     for(j = i + 1; j < fin; j++){
         if(*(pointer+j) < *(pointer+i)){
             temp = *(pointer+j);
             *(pointer+j) = *(pointer+i);
             *(pointer+i) = temp;
         }
     }
  }
}