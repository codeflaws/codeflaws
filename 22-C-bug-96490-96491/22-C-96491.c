#include <stdio.h>

int v;
int n;

int out(int a, int b){
    int x;
    int c,d;
    c = a;
    d = b;
    if (a==v) c=n+1;
    if (b==v) d=n+1;
    if (a==n+1) c = v;
    if (b==n+1) d = v;
    
    printf("%d %d\n", c, d);   
}

int main(int argc, char *argv[])
{
  int m,mm;
  int l,r;
  int min, max;
  int f = 0;
  int i,j,k;
  int off=1;
  int stage;
  scanf("%d %d %d", &n, &mm, &v);
  
  n--; //îñòàâëÿåì "ðàçðûâíîé" êîìïüþòåð
  for (i=1; i<=n/2; i++){
          l = i; //êîìïüþòåðîâ ñëåâà
          r = n-i; //êîìïüþòåðîâ ñïðàâà
          m = mm;
          //âîçìîæíî îò (s-1) äî (s(s-1)/2) ñîåäèíåíèé â êàæäîé ÷àñòè
          min = (l-1) + (r-1);
          max = (l*(l-1)/2 + r*(r-1)/2);
          //ðàçðûâíîé êîìïüþòåð ìîæåò èìåòü îò 2x äî n ñîåäèíåíèé
          min += 2;
          max += n;
          
         //printf("[%d %d %d]", min , m , max);
          
          if ((m>=min) && (m<=max)) {
             f = 1;
             
             for (j=1; j<l; j++){
                 out(j, j+1);
                 m--;
             }
             /*if (l>2) {
                      out(l,1);
                      m--;
             }*/
        
             for (j=1; j<r; j++){
                 out(j+l,j+l+1);
                 m--; 
             }
             /*if (r>2) {
                out(n,l+1);
                m--;
             }*/
             
             out (1,n+1);
              m--;
             out(n, n+1);
             m--;
            
             stage=0; 
             j =2;
             while (m){
                   //if (stage==3) {system("PAUSE");}
                     if (stage==0){
                        if (j<=n-1){
                           out(j, n+1);  
                           j++;
                           m--;          
                        }
                        else{
                             stage = 1;     
                        }
                        if (m==0) break;
                     }
                     if (stage==1){
                        for (j=1; j<l; j++){
                            if (m==0) break;
                            for (k=j+2; k<l; k++){
                                if(m==0) break;
                                out(j, k);
                                m--;
                            }
                        } 
                        stage = 2;
                     }
                     if (stage==2){
                        for (j=1; j<r-1; j++){
                             if (m==0) break;
                             for (k=j+2; k<n; k++){
                                 if (m==0) break;
                                 out(j+l,k+l);
                                 m--; 
                            }
                        }
                        stage = 3;
                     }   
             }
             break;
          }
  }       
  if (!f) printf("-1");
  return 0;
}
