#include <stdio.h>
#include <string.h>  
#include <math.h>  

#define PI 3.14159265


float findAngle(float pointA[2], float pointB[2], float pointC[2]);
void setPoint(float point[2]);
float findLength(float pointA[2], float pointB[2]);
float findSquare(float sideLength, float alpha);

int isNGoodForAngles(float alpha1, float alpha2, float alpha3, int n);

int isNGoodForAngles(float alpha1, float alpha2, float alpha3, int n)
{
    int result = 0;
    float eps = 0.005 ;

    float q1,q2,q3, oneAngle;
 
//    if ( (((360.0/n) - q1 <= 4) || (q1 <= eps)) && ((360.0/n - q2 <= 4) || (q2 <= eps)) &&           ((360.0/n - q3 <= 4) || (q3 <= eps))) result =1 ;
   
   oneAngle = 2*PI/n;
 //  oneAngle = round(oneAngle * 1000) / 1000.0;
   
    q1 = fmod(alpha1, oneAngle); 
    q2 =  fmod(alpha2, oneAngle);
    q3 = fmod(alpha3, oneAngle);
    
    q1 = round (q1 * 1000) / 1000.0;
    q2 = round (q2 * 1000) / 1000.0;
    q3 = round (q3 * 1000) / 1000.0;
    
    /*q11 = alpha1/oneAngle;
    q22 = alpha2/oneAngle;
    q33 = alpha3/oneAngle;
    
    q11 = round (q11 * 1000) / 1000.0;
    q22 = round (q22 * 1000) / 1000.0;
    q33 = round (q33 * 1000) / 1000.0;*/

   //if ( (oneAngle - q1 <= 1) || (q1 <= eps) && ((oneAngle - q2 <= 1) || (q2 <= eps)) &&           ((oneAngle- q3 <= 1) || (q3 <= eps))) result = 1 ;
   
     if ( ((oneAngle - q1 <= eps) || (q1 <= eps)) && ((oneAngle - q2 <= eps) || (q2 <= eps)) &&           ((oneAngle - q3 <= eps) || (q3 <= eps))) result = 1 ;
 
  //if ( (q1 <= eps) && (q2 <= eps) && (q3 <= eps)) result = 1;
  
/*if (n == 12) 
{
 //printf("%d\n", ((360.0/n) - q1 <= 2) || (q1 <= eps));
   printf("fmod - %f / %f = %f and %f\n", alpha1, oneAngle, alpha1/oneAngle, q1 );
    printf("fmod - %f / %f = %f and %f\n", alpha2, oneAngle, (alpha2/oneAngle), q2 );
printf("fmod - %f / %f = %f and %f\n", alpha3, oneAngle, (alpha3/oneAngle), q3 );}*/
    
    return result;
}

float findSquare(float sideLength, float alpha)
{
    float result, r;
    int n;

    //n = round(360/(180 - alpha));
    n = round(360/(180 - alpha));
    
    r = sideLength/(2 * sin(PI/n));
    
    result = ((n * r * r)/2) * (sin(2*PI/n));
    
    printf("%d, %f, %f\n",n, r,result);
    
    return result;
}

float findLength(float pointA[2], float pointB[2])
{
    float result, vectorAB[2];
    
    vectorAB[0] = pointB[0] - pointA[0];
    vectorAB[1] = pointB[1] - pointA[1];    
    
    result = sqrt(vectorAB[0] * vectorAB[0] + vectorAB[1] * vectorAB[1]);
    result = round(result * 100000)/100000;
   // printf("!%f\n",result);
    
    
    return result;
}

void setPoint(float point[2])
{
    scanf("%f %f", &point[0], &point[1]);
    return;
}

float findAngle(float pointA[2], float pointB[2], float pointC[2])
{
    float vector1x, vector2x, vector1y, vector2y, vector1mod, vector2mod, result;

    vector1x = pointB[0] - pointA[0];
    vector1y = pointB[1] - pointA[1];

    vector2x = pointC[0] - pointB[0];
    vector2y = pointC[1] - pointB[1];
    
    vector1mod = findLength(pointA, pointB);
    vector2mod = findLength(pointB, pointC);

    // Так как многоугольник правильный, то все стороны равны, и следовательно модуль веткора 1 = модулю вектора 2  
    result = acos(((vector1x * vector2x) + (vector1y * vector2y)) / (vector1mod * vector2mod));
    //result *= 180.0 / PI;
    
    //result = PI - round(result*100)/100;
    
    //result = 180 - result;

    
    return result;
}

int main(int argc, char *argv[])
{
    float pointA[2], pointB[2], pointC[2], sideLength, s, a, b, c,  alpha1, alpha2, alpha3;
    int i, n, bufN;
    float p, triangleSquare, r;

    setPoint(pointA);
    setPoint(pointB);
    setPoint(pointC);
    
    a = findLength(pointA, pointB);
    b = findLength(pointB, pointC);
    c = findLength(pointA, pointC);
    
    alpha1 = findAngle(pointA, pointB, pointC);
    alpha2 = findAngle(pointB, pointA, pointC);
    alpha3 = findAngle(pointA, pointC, pointB);
    
    
  //  printf("%f %f %f\n", a, b, c);
  //  printf("%f %f %f\n", alpha1, alpha2, alpha3);

    s = 0.0;


    p = (a + b + c) / 2;
    triangleSquare = sqrt(p * (p-a) * (p-b) * (p-c));
    r = (a * b * c) / (4 * triangleSquare);
        
if (r >= 1.0)   r = round (r * 1000.0) / 1000.0;

    //n = round (PI / (asin(sideLength/(2*r))));
    
    n = 0;
    
    //float medianaTriangle;
    
    //i = 3;

   /* medianaTriangle = sqrt(r*r - a*a/4);
    alpha1 = acos((2*medianaTriangle*medianaTriangle/(r*r)) - 1);;
    
    medianaTriangle = sqrt(r*r - b*b/4);
    alpha2 = acos((2*medianaTriangle*medianaTriangle/(r*r)) - 1);
*/
    //medianaTriangle = sqrt(r*r - c*c/4);
    //alpha3 = acos((2*medianaTriangle*medianaTriangle/(r*r)) - 1);
    //alpha3 = acos((2*r*r - c*c)/(2*r*r));
//  alpha1 = acos((2*r*r - a*a)/(2*r*r));
//  alpha2 = acos((2*r*r - b*b)/(2*r*r));
    alpha1 = acos(1.0 - (a*a)/(2.0*r*r) );
    alpha2 = acos(1.0 - (b*b)/(2.0*r*r) );
    alpha3 = acos(1.0 - (c*c)/(2.0*r*r) );
    
        
    //printf("%f %f\n", r, alpha3 );
    
    /*alpha1 = round(alpha1 * 1000) / 1000.0;
    alpha2 = round(alpha2 * 1000) / 1000.0;
    alpha3 = round(alpha3 * 1000) / 1000.0;*/
    
    
//i=13;
   for (i = 3; !(isNGoodForAngles(alpha1, alpha2, alpha3, i)); i++);
     // i = 12;      
  //    isNGoodForAngles(alpha1, alpha2, alpha3, i);
    n = i;
 
    s = ((n * r * r)/2) * sin(2*PI/n);
    s = ceil(s*100000.0)/100000.0;
// printf("side = %f\n", sideLength);
//printf("p = %f\n", p);
//printf("triangleSquare = %f\n",  triangleSquare);
//   printf("%f %f %f\n", alpha1, alpha2, alpha3);

 //printf("r = %f\n", r );
//printf("n = %d\n", n);
//printf("oneAngle = %f, 2*PI/n = %f\n", (round((2*PI/n) * 1000) / 1000.0)*(180.0/PI) , (2*PI/n) * (180.0/PI));
   printf("%f\n", s);
    
    return 0;
}