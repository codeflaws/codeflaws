#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Flatland[201][201]; //los 1s en triangulo inferior rehastasenta las ciudades conectadas
int n,j,profundidad;
int max(int,int);   //Funcion para comparar si un numero es mayor que otro
int fun(int,int);
int main(int argc, char *argv[]){
   int u,v;
   scanf("%d",&n);//Se carga el numero de ciudades
       int i,j;
       for(i=1;i<n;i++){ //Se cargan las Ciudades
           scanf("%d%d",&u,&v);
           Flatland[u][v]=1;
           Flatland[v][u]=1;
       }
        int beneficio=0;
        for(i=1; i<=n; i++){
            for(j=i+1;j<=n;j++){
                if(Flatland[i][j]==1){
                    int a=fun(i,j);//Devuelve valor 1 o 0 dependiendo si las ciudades estan conecatadas
                    int b=fun(j,i);
                    beneficio=max(beneficio,a*b);
                }
            }
        }
        printf("%d",beneficio);
return 0;
}

int fun(int u,int hasta){
    int i,s=0;
    int distancia1=0,distancia2=0;
    for(i=1;i<=n;i++)
    if(Flatland[u][i]==1 && i!=hasta){  //si encuentra por 2da vez en la misma fila pasa al a fila duperior o inferior
       s=max(fun(i,u),s);               //dependiendo del valor del indice de la columna
      if(profundidad>distancia1){       //el valor de la fila es la columna a ignorada en la linea a saltar
          distancia2=distancia1;
          distancia1=profundidad;
      }
    }
    s=max(s,distancia1+distancia2);
    profundidad=distancia1+1;
    return s;
}

int max(int n1,int n2){
    int aux;
    if(n1<=n2){ //Compara los valores de guarda el mayor de ellos
        aux=n2;
    }else{
        aux=n1;
    }
    return aux;   //Retorna el dato guardado
}


