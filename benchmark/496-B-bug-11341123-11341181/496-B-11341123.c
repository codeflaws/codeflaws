#include <stdio.h>

int numbers[1000];
char temp[1000];

void add(int i, int size ){
    int j = 0;
    
    while(numbers[i] != 0){
            for(j = 0; j < size; j++){
                numbers[j]++;
                if(numbers[j] == 10)
                    numbers[j] = 0;
            }    
    }

}

void move(int i, int size){
    int j = 0;
    int first_number = 0;
    while(i > 0){
        for(j = 0; j < size; j++){
            if(j == 0){
                first_number = numbers[j];
                numbers[j] = numbers[j + 1];
            } else if (j == size - 1){
                numbers[j] = first_number;
            } else {
                numbers[j] = numbers[j + 1];
            }
        }    
        i--;
    }
}

void set(int size){
    int i = 0;
    for(i = 0; i < size; i++){
        numbers[i] = (int) temp[i] - 48;
    }
}

int main(int argc, char *argv[]){
    int size = 0;
    int results[1000][1000];
    

    //for loops
    int i = 0;
    int j = 0;
    //Get the inputs   
    scanf("%d", &size);
    scanf("%s", temp);

    //initiallize
    set(size);
    
    //solve
    for(i = 0; i < size; i++){
        add(i, size);
        move(i, size);
        for(j = 0; j < size; j++){
            results[i][j] = numbers[j];
        }
        
        set(size);
    }
    
    //compare
    int min = 9;
    for(j = 0; j < size; j++){
        min = 9;
        
        for(i = 0; i < size; i++){
            if(min > results[i][j])
                min = results[i][j]; 
        }
        
        if(j != size - 1){
            for(i = 0; i < size; i++){
                if(results[i][j] != min)
                    results[i][j+1] = 9;
            }
        }
        
        numbers[i] = min;
        printf("%d", numbers[i]);
    }
    
    
    return 0;
}