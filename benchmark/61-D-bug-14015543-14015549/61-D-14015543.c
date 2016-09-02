#include<stdio.h>

struct vertice
{
         long in;
         long fin;
         long longi;
         long siguiente;
}n[200001];

long long max,distancia[100001],suma;

long pos[100001],cantidad,linea[110000],ocu[100001],SI=1,NO=1,t,i;
int main(int argc, char *argv[])
{
   scanf("%d",&cantidad);
   for(i=1;i<cantidad;i++)
   {
      scanf("%d %d %d",&n[i].in,&n[i].fin,&n[i].longi);
      n[i].siguiente=pos[n[i].in];
      pos[n[i].in]=i;
      n[i+cantidad]=n[i];
      n[i+cantidad].fin=n[i].in;
      n[i+cantidad].in=n[i].fin;
      n[i+cantidad].siguiente=pos[n[i].fin];
      pos[n[i].fin]=i+cantidad;
      suma+=n[i].longi;
   }
   linea[1]=1;
   distancia[1]=0;
   ocu[1]=1;
   while(SI>=NO)
   {
      t=pos[linea[NO]];
      while(t!=0)
      {
         if(ocu[n[t].fin]==0)
         {
            distancia[n[t].fin]=distancia[linea[NO]]+n[t].longi;
            linea[++SI]=n[t].fin;
            ocu[n[t].fin]=1;
         }
         t=n[t].siguiente;
      }
      NO++;
   }
   for(i=1;i<=cantidad;i++)
   {
      if(distancia[i]>max)
      {
      max=distancia[i];
    }
   }
   printf("%I64d\n",(suma)-(max));

   return 0;
}
