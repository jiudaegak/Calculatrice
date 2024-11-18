#include <stdio.h>


int main() {

// déclaration des chiffres

int premierchiffre, secondchiffre, choix;

printf("Bonjour, bienvenue dans une calculatrice graphique simple \n");
printf("Le but ici est de mettre en oeuvre le switch dans plusieurs cas de figure \n");
printf("Veuiller commencer par choisir deux chiffres \n");
scanf("%d", &premierchiffre);
scanf("%d", &secondchiffre);
//
printf("Maintenant que vous avez choisi des chiffres, veuillez choisir l'opération souhaitée \n");
printf("1 - Addition \n");
printf("2 - Soustraction \n");
printf("3 - Multiplication \n");
printf("4 - Division \n");
printf("5 - Valeur absolue \n");
//
scanf("%d", &choix);

switch(choix) {
    case 1:
        printf("%d + %d = %d",premierchiffre, secondchiffre, premierchiffre + secondchiffre);
        break;

    case 2:
        printf("%d - %d = %d",premierchiffre, secondchiffre, premierchiffre + secondchiffre);
        break;
    
    case 3:
        printf("%d * %d = %d", premierchiffre, secondchiffre, premierchiffre * secondchiffre);
        break;

    case 4:
        printf("%d / %d = %d",premierchiffre, secondchiffre, premierchiffre / secondchiffre);
        break;
    
    case 5:
        int valor;
        printf("Voulez-vous la valeur absolue du chiffre 1 ou du chiffre 2 ? \n");
        scanf("%d", &valor);
        //
        if (valor == 1 && premierchiffre < 0) {
            printf("La valeur absolue de %d est égale à %d", premierchiffre, -premierchiffre);}
            //
        else if (valor == 2 && secondchiffre < 0) {
            printf("La valeur absolue de %d est égale à %d", secondchiffre, -secondchiffre);}
        
        }

    return 0;
                

}