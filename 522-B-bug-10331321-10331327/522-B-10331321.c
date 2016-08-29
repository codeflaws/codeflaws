#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int n,i,j,width,height;
	scanf("%d",&n);
      int hw[200001][2];
      for(i=0;i<n;i++)
      {
      	scanf("%d%d",&hw[i][0],&hw[i][1]);
      }
      width=0,height=0;
      int isize=0;
      int maxHeight=0;
      for(i=0;i<n;i++)  ////find the max height
      {
      	    width+=hw[i][0];
            if(maxHeight<hw[i][1])
                  maxHeight=hw[i][1];
      }
      int maxWidth=width;
      for(i=0;i<n;i++)
      {
            if(hw[i][1]==maxHeight)
            {
                  isize++;
                  if(isize>2)
                        break;
            }
      }
      int secondHeight=0;
      for(i=0;i<n;i++)//find the second height
      {
            if(hw[i][1]==maxHeight)  continue;
            if(secondHeight<hw[i][1])
                  secondHeight=hw[i][1];
      }
      printf("maxheight= %d  secondHeight= %d   isize= %d\n",maxHeight,secondHeight,isize);
      for(i=0;i<n;i++)
      {
      	height=maxHeight;
      	width=maxWidth-hw[i][0];
      	if(hw[i][1]==maxHeight)
      	{
      		if(isize>=2)
                        ;
                  else height=secondHeight;
      	}
      	printf("%d  ",height*width);
      }
	return 0;
}