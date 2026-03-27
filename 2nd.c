#include <stdio.h>
#include <math.h>
int main ()
{
  float a , b, c , delta ;
  float x1 , x2 , x;
  float s1 , s2;
  char i;
  printf ("entrez la valeur de a");
  scanf ("%f", &a);
  printf ("entrez la valeur de b");
  scanf ("%f" , &b); 
  printf ("entrez la valeur de c");
  scanf ("%f" , &c);
  if 
  delta = b*b-(4*a*c);
  printf ("%f" , delta);
  if (delta>0)
  {
    printf ("deux solutions: x1 et x2\n");
    x1 = (-b-sqrt(delta))/(2*a);
    x2 = (-b+sqrt(delta))/(2*a);
    printf ("%f et %f" , x1 , x2);
  }
  else if (delta == 0)
  {
    printf ("une solution double : x\n");
    x = -b/(2*a);
    printf ("%f" , x);
  }
  else if (delta<0)
  {
    printf ("pas de solution réelle");
  }
  else
  {
    printf ("deux solutions imaginaires"); 
    i*i=-1
    s1 = ((-b)-'i'(sqrt(-delta)))/2*a; 
    s2 = ((-b)+'i'(sqrt(-delta)))/2*a;
    return (0);
  }
    
  
  
