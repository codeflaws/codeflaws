#include<stdio.h>
int main(int argc, char *argv[])
{
    int dim,i,menor=0,mayor,posmay,posmen,r;
    scanf("%d",&dim);
    int vect[dim],aux1[dim+1],aux2[dim+1],resul[dim];
    for(i=0;i<dim;i++)
    {
        scanf("%d",&vect[i]);
    }
    mayor=vect[dim-1];
    posmay=dim-1;
    posmen=dim-1;
    for(i=dim-1;i>=0;i--)
    {
        if(i==dim-1 ||(vect[i]<menor && vect[i+1]>vect[i]))
        {
            menor=vect[i];
            aux1[posmen] = vect[i];
            aux2[posmen] = i;
            --posmen;
            resul[i]=-1;
        }
        else
        {
            if(vect[i]>mayor)
            {
                resul[i]=posmay-i-1;
                posmay=i;
            }
            else if(vect[i]>menor)
            {
                r=busquedaBin(aux1,aux2,posmen+1,dim,vect[i]);
                resul[i]=r-i-1;
            }
            else
            {
                resul[i]=-1;
            }
        }

    }
    for(i=0;i<dim;i++)
        {
            printf("%d ",resul[i]);
        }
    return 0;
}
int busquedaBin(int lista[],int aux[],int inicio,int fin, int clave)
{
    int central, bajo, alto, valorCentral;
    bajo = inicio;
    alto = fin;
    while (bajo <= alto)
    {
        central = (bajo + alto)/2;
        valorCentral = lista[central];
        if (lista[central] < clave && lista[central+1] >= clave)
            return aux[central];
        else if (lista[central] < clave)
            bajo = central + 1;
        else if(lista[central] >= clave)
            alto = central - 1;
    }
    return -1;
}
