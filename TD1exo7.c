/*VARIABLES :
A: réel 
b: réel
C: réel
max: réel
DÉBUT :
AFFICHAGE ("entrez la valeur de a")
LIRE a 
AFFICHAGE ("entrez la valeur de b")
LIRE b
AFFICHAGE ("entrez la valeur de c")
LIRE c
max<-A
SI (B>max) ALORS
max<-B
FIN SI
SI (C>max) ALORS 
max<-C
FIN SI 
AFFICHER "le maximum"
FIN*/
#include <stdio.h>
  int main()
  {
    float A, B, C, max ;
    printf ("entrez la valeur de A");
    scanf ("%f" , &A);
    printf ("entrez la valeur de B");
    scanf ("%f" , &B);
    printf ("entrez la valeur de C");
    scanf ("%f" ,&C);
    max=A;
    if (B>max) 
    {
      max=B;
    }
    if (C>max); 
    {
      max=C;
    }
      printf ("le maximum");
return (0);
  }
  
