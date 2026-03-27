/*variables:
a:entier, b:entier
Début :
AFFICHER : "entrez la valeur de a"
LIRE "a"
AFFICHER : "entrez la valeur de b"
LIRE "b"
si ((a>0 && b>0) || (a<0 && b<0)) ALORS
AFFICHER "le produit est positif"
 sinon
AFFICHER : "le produit est négatif"
FIN*/
#include <stdio.h>
  int main ()
  {
    int a , b ;       
    printf ("entrez la valeur de a");
    scanf ("%d" , &a) ;
    printf ("entrez la valeur de b");
    scanf ("%d" , &b);
    if ((a>0 && b>0) || (a<0 && b<0))
    {
    printf ("le produit est positif"); 
    }
    else
    {
    printf ("le produit est négatif");
    }
return (0);
  }


