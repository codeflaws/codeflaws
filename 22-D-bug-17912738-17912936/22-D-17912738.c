#include <stdio.h>

typedef struct{
	int isq;
	int der;
}punto;

int min(int x,int y);
int max(int x,int y);
void ordenar( punto *v,int f);

int main(int argc, char *argv[]){
	int n,i,p1,p2,segi,segd,cant=0;
	int mayor=2000;
	scanf("%d",&n);
	int clavo[n];
	punto a[n+1];
	for(i=0;i<n;i++){
		scanf("%d%d",&p1,&p2);
		a[i].isq=min(p1,p2);
		a[i].der=max(p1,p2);
	}
	ordenar(a,n);
	segi=a[0].isq;
	segd=a[0].der;
	a[n].isq=mayor;
	for(i=1;i<=n;i++){
		if(a[i].isq>segd){
			clavo[cant]=segd;
			cant++;
			segi=a[i].isq;
			segd=a[i].der;
		}else{
			if(a[i].isq>segi){
				segi=a[i].isq;
			}
			if(a[i].der<segd){
				segd=a[i].der;
			}
		}
	}
	printf("%d\n",cant);
	for(i=0;i<(cant/2+cant%2);i++){
		if(clavo[i]!=clavo[cant-1-i]){
			printf("%d %d ",clavo[i],clavo[cant-1-i]);
		}else{
			printf("%d ",clavo[i]);
		}
	}
}

int min(int x,int y){
	if(x>y){
		return y;
	}else{
		return x;
	}
}

int max(int x,int y){
	if(x>y){
		return x;
	}else{
		return y;
	}
}
void ordenar( punto *v,int f){
    int i,j;
    punto aux;
    for(i=0;i<f-1;i++){
        for(j=i+1;j<f;j++){
            if(v[i].isq!=v[j].isq){
                if(v[i].isq>v[j].isq){
                    aux=v[i];
                    v[i]=v[j];
                    v[j]=aux;
                }
            }
            else{
                if(v[i].der>v[j].der){
                    aux=v[i];
                    v[i]=v[j];
                    v[j]=aux;
                }
            }
        }
    }
}
