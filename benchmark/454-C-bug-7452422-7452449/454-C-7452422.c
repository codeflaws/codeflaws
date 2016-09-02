#include <stdio.h>
#include <stdlib.h>

double power(double base, double exp){
  double result = 1.0f;
  int i;
  for (i = 0; i < exp; i++) {
    result *= base;
  }
  return result;
}

double maxExpected(double numFace, double numTrail){
  double e = 0.0f;
  double i;
  for (i = 1.0f; i <= numFace; i+=1.0f) {

    e += i * (power(i/numFace, numTrail) - power((i-1.0f)/numFace, numTrail));
  }
  return e;
}

int main(int argc, char *argv[]) {

  int numFace;
  int numTrail;

  //read input 
  scanf("%d", &numFace);
  scanf("%d", &numTrail);
  
  printf("%.12lf", maxExpected((double)numFace, (double)numTrail));

  
  return 0;
}
