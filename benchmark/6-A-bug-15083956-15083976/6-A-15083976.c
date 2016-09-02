#include<stdio.h>
is_triangle(int a,int b,int c) {
  if(a+b>c && a+c>b && b+c>a) return 1;
  else return 0;
}
is_segment(int a,int b,int c) {
  if(a+b==c || a+c==b || b+c==a) return 1;
  else return 0;
}
int main(int argc, char *argv[]) {
  int s1,s2,s3,s4;
  scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
  int a,b,c;
  int segment=0;
  
  a=s1,b=s2,c=s3;
  if(is_triangle(a,b,c)) {
    printf("TRIANGLE");
    return 0;
  } else if(is_segment(a,b,c)) {
    segment=1;
  }
    a=s1,b=s2,c=s4;
  if(is_triangle(a,b,c)) {
    printf("TRIANGLE");
    return 0;
  } else if(is_segment(a,b,c)) {
    segment=1;
  }
    a=s1,b=s3,c=s4;
  if(is_triangle(a,b,c)) {
    printf("TRIANGLE");
    return 0;
  } else if(is_segment(a,b,c)) {
    segment=1;
  }
    a=s2,b=s3,c=s4;
  if(is_triangle(a,b,c)) {
    printf("TRIANGLE");
    return 0;
  } else if(is_segment(a,b,c)) {
    segment=1;
  }
  if(segment==1) printf("SEGMENT");
  else printf("IMPOSSIBLE");
  return 0;
}