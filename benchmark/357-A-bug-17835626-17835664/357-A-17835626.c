#include<stdio.h>

int main(int argc, char *argv[]){
    int m,x,y, novatos=0 , total = 0, intermedios=0, pos,i, band;

    scanf("%d", &m);
    int cant_notas[m];

    for( i = 0 ; i<m ; i++){//leer cant notas
        scanf("%d", &cant_notas[i]);
        total += cant_notas[i];
    }
    scanf("%d%d", &x, &y);
    i=0;
	band = 1;
    while( i < m && band){
    	
    	novatos +=  cant_notas[i];
    	intermedios = total -novatos;
    	if ( novatos >=x && novatos <=y &&  intermedios <= y && intermedios >= x ){
    		band = 0;
    		pos = i+1;
    	}
	}  
	if (band == 1)
		printf("0");
	else 
	printf("%d", pos);                                                                                                 
    
return 0;
}
