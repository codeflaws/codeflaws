#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define s(a) scanf("%d",&a) 
void computeLPSArray(int *pat, int M, int *lps);
int count = 0; 
void KMPSearch(int *pat, int *txt,int l1,int l2)
{
    int M = l1;
    int N = l2;
 
    // create lps[] that will hold the longest prefix suffix values for pattern
    int *lps = (int *)malloc(sizeof(int)*M);
    //printf("here\n");
    int j  = 0;  // index for pat[]
 
    // Preprocess the pattern (calculate lps[] array)
    computeLPSArray(pat, M, lps);
 
    int i = 0;  // index for txt[]
    while(i < N)
    {
      if(pat[j] == txt[i])
      {
        j++;
        i++;
      }
      //printf("j = %d\n",j);
      if (j == M)
      {
        //printf("Found pattern at index %d \n", i-j);
        count++;
        j = lps[j-1];
      }
 
      // mismatch after j matches
      else if(pat[j] != txt[i])
      {
        // Do not match lps[0..lps[j-1]] characters,
        // they will match anyway
        if(j != 0)
         j = lps[j-1];
        else
         i = i+1;
      }
    }
    free(lps); // to avoid memory leak
}
 
void computeLPSArray(int *pat, int M, int *lps)
{
    int len = 0;  // lenght of the previous longest prefix suffix
    int i;
 
    lps[0] = 0; // lps[0] is always 0
    i = 1;
 
    // the loop calculates lps[i] for i = 1 to M-1
    while(i < M)
    {
       if(pat[i] == pat[len])
       {
         len++;
         lps[i] = len;
         i++;
       }
       else // (pat[i] != pat[len])
       {
         if( len != 0 )
         {
           // This is tricky. Consider the example AAACAAAA and i = 7.
           len = lps[len-1];
 
           // Also, note that we do not increment i here
         }
         else // if (len == 0)
         {
           lps[i] = 0;
           i++;
         }
       }
    }
}
// Driver program to test above function
int main(int argc, char *argv[])
{
      int n1,n2,i;
      int txt[200005],pat[200005];
      s(n1);s(n2);
      for(i=0;i<n1;i++)
            s(txt[i]);
      for(i=0;i<n2;i++)
            s(pat[i]);
      for(i=0;i<(n1-1);i++)
            txt[i] = txt[i+1]-txt[i];
      for(i=0;i<(n2-1);i++)
            pat[i] = pat[i+1]-pat[i];
      //print(txt,n1-1);
      //print(pat,n2-1);
      KMPSearch(pat, txt,n2-1,n1-1);
      printf("%d\n",count);
      return 0;
}
