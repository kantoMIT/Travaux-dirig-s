/* VARIABLES :
note1: réel
note2: réel
coef1: réel
coef2: réel
  DÉBUT :
AFFICHAGE : "entrez la valeur du première note"
LIRE note1
AFFICHAGE : "entrez le coefficient de la première note"
LIRE coefficient1
AFFICHAGE :"entrez la valeur du deuscième note"
LIRE note2
AFFICHAGE :"entrez le coefficient de la deuscième note"
LIRE coefficient2
M<-((note1*coef1)+(note2*coef2))/(coef1+coef2)
AFFICHER M
  FIN*/
#include <stdio.h>
  int main()
  {
    float note1, coef1 ;
    float note2, coef2;
    printf ("entrez la valeur de la première note");
    scanf ("%f" , &note1);
    printf ("entrez le coefficient de la première note");
    scanf ("%f" , &coef1);
    printf ("entrez la valeur de la deuscième note");
    scanf ("%f" , &note2);
    printf ("entrez le coefficient de la deuscième note");
    scanf ("%f" , &coef2);
return (0);
  }
    
