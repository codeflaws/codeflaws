#include<stdio.h>
#include<stdlib.h>




int main(int argc, char *argv[])
{

     float vp,vd,t,f,c;
     scanf("%f%f%f%f%f",&vp,&vd,&t,&f,&c);

     float dist=c;
     int bijou = 0;
     dist = c-t*vp;

     while(dist>0)
      {

          float gap  = c-dist;
          float time = gap/(abs(vd-vp));
          dist = dist-time*vp;
          if(dist>0)
            {
                bijou+=1;
                dist = dist-((c-dist)/vd+f)*vp;
            }


      }


         printf("%d\n",bijou);  
         return 0;

}
