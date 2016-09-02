/*  
 *  CodeForces 24 / 1
 *  Petr Pecha
 *  26. 7. 2010  
 *  
 */

#include <stdio.h>

#define MAX_VELIKOST 120000
 
int suma(int smer, int matice[MAX_VELIKOST][7], int mest)
{
  int soucet = 0;
  int dalsi, prichod;
  int plus;
  int i;
  
  prichod = 0;
  dalsi = 1;
  for (i = 0; i < mest; i++){
    if (matice[dalsi][0] == prichod){
      plus = 3;
    } else {
      plus = 0;
    }
    if (matice[dalsi][2 + plus] != smer){
      soucet += matice[dalsi][1 + plus];
    }
    prichod = dalsi;
    dalsi = matice[dalsi][0 + plus];
  }
  
  return soucet;
}
 
int main(int argc, char *argv[])
{
  int mest;
  int matice[MAX_VELIKOST][7];
  int buf, buff;
  int kam, odkud, zaKolik;
  
  int i, j;
  int plus;
  
  for (i = 0; i < mest; i++){
    matice[i][0] = 0;
    matice[i][0] = 0;
  }
  
  scanf("%d\n", &mest);
  for (i = 0; i < mest; i++){
    scanf("%d %d %d", &odkud, &kam, &zaKolik);
    if (matice[odkud][0] != 0){
      plus = 3;
    } else {
      plus = 0;
    }
    matice[odkud][0 + plus] = kam;
    matice[odkud][1 + plus] = zaKolik;
    matice[odkud][2 + plus] = 1;
    
    if (matice[kam][0] != 0){
      plus = 3;
    } else {
      plus = 0;
    }
    matice[kam][0 + plus] = odkud;
    matice[kam][1 + plus] = zaKolik;
    matice[kam][2 + plus] = -1;
  }
  
  // KONTROLA VSTUPU
  /*
  printf("mest: %d\n", mest);
  for (i = 1; i <= mest; i++){
    for (j = 0; j < 6; j++){
      printf("%d ", matice[i][j]);
    }
    printf("\n");
  }
  */
  // KONTROLA VSTUPU
  
  buf = suma(-1, matice, mest);
  buff = suma(1, matice, mest);

  if (buf < buff){
    printf("%d", buf);
  } else {
    printf("%d", buff);
  }
  
  return 0;
}
