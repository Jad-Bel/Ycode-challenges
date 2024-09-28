#include <stdio.h>

typedef struct {
    int mois;
    int jours;
    int heures;
    int minutes;
    int secondes;
} Conversion;

Conversion convertir_annee(int annee) {
    Conversion conv;
    conv.mois = annee * 12;
    conv.jours = annee * 365;
    conv.heures = conv.jours * 24;
    conv.minutes = conv.heures * 60;
    conv.secondes = conv.secondes * 60;
return conv;
}

int affichier_menu() {
  int choix;
  printf("/nChoisiser une option de conversion : \n");
  printf("1. Convertir en mois\n");
  printf("2. Convertir en jours\n");
  printf("3. Convertir en heures\n");
  printf("4. Convertir en minutes\n");
  printf("5. Convertir secondes\n");
  printf("Entrer votre choix: ");
  scanf("%d", &choix);
}

void afficher_resultat(int choix, int annee, Conversion conv){
  switch (choix) {
    case 1 : printf("%d annee equivaut a %d mois. \n", annee, conv.mois);break;
    case 2 : printf("%d annee equivaut a %d jours. \n", annee, conv.jours);break;
    case 3 : printf("%d annee equivaut a %d heures. \n", annee, conv.heures);break;
    case 4 : printf("%d annee equivaut a %d minutes. \n", annee, conv.minutes);break;
    case 5 : printf("%d annee equivaut a %d secondes. \n", annee, conv.secondes);break;
    default : 
    printf("Choix non valide. ENtrer un nombre entre 1 et 5.\n");

  }
}

int main() {
  int annee, choix;
  Conversion conv;

  printf("Entrer le nombre d'annees: \n");
  scanf("%d", &annee);

//Effectuer les conversion:
  conv = convertir_annee(annee);

//afficher le menu et obtenir le choix:
choix = affichier_menu();

//afficher le result:
afficher_resultat(choix, annee, conv);

return 0;
}