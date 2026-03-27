
/*variables: 
a:entier
Début: :
AFFICHAGE: "entrez la valeur de a"
LIRE "a"
 si (a>=0) ALORS
 AFFICHER: "a est positif
 sinon:
 AFFICHER "a est négatif"*/
 #include <stdio.h>
  int main ()
    {
    int a; 
    printf ("entrez la valeur de a");
    scanf ("%d" , &a);
    if (a>=0)
    {
    printf ("a est positif");
    }
    else 
    {
    printf ("a est négatif");
    }
return (0);//FIN
  }
