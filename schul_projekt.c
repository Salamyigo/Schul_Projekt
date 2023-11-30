#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void bSPLF (double a, double b); //Berechne Schnittpunkt Lineare Funktion

void bSPQF (double a, double b); //Berechne Schinttpunkt Quadratische Funktion

void bGSPF (double a, double b); // Berechene Gemeinsame Schinttpunkt Funktion


int main(){
    char password[100] = "FSET_Funktion"; //passwordschutz
    char input[100];
    int funktion1, funktion2;

    printf("Bitte das PASSWORD eingeben :\n");
    scanf("%s",input);

    if(strcmp(password, input) != 0 ){
        printf("Die eingeben Password is faslch!!\n");
        return 0;
    } 
    
    printf("\nWillkommen zu den Software für Funktion \n"); //Begrußung

    while (funktion1 != 1 && funktion2 != 2)
    {
       printf("\nBitte die erste funktion auswahlen (1: linear, 2: Quadratisch)\n");
       scanf("%d",&funktion1);
    }
   while (funktion1 != 1 && funktion2 != 2)
    {
       printf("\nBitte die zweite funktion auswahlen (1: linear, 2: Quadratisch)\n");
       scanf("%d",&funktion2);
    } 
}

void bSPLF (double a, double b){

}

void bSPQF (double a, double b){

}

void bGSPF (double a, double b){

}