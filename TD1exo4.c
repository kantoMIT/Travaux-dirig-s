/*VARIABLES :
a: entier
b: entier
M: entier
S: entier
i: entier
DÉBUT:
AFFICHAGE : "entrez la valeur de a"
LIRE a
AFFICHAGE : "entrez la valeur de b"
LIRE b
POUR (i<-0 , i<2 , i<-i+1) ALORS
S<-0
S<-a+b
FIN POUR 
AFFICHER S

M<-S/2
AFFICHER M
FIN */
#include <stdio.h>
  int main ()
  {
    int a, b , i , S , M;
    printf ("entrez la valeur de a");
    scanf ("%d" , &a);
    printf ("entrez la valeur de b");
    scanf ("%d" , &b);
    for (i=0; i<2 ;i++)
    {
      S=a+b;
      printf ("S");
      M=S/2;
      printf ("M");
    }
return (0);
  }

