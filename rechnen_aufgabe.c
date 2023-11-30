#include <stdio.h>
#include <math.h>

int add(int num1, int num2);
int subb(int num1, int num2);
float div(float num1, float num2);
int multi(int num1, int num2);
int potenz(int num1, int num2);
double qwurz(double num1);
void vergleich_num(int num1, int num2);


int main(){
    int num1 = 12;
    int num2 = 4;
    int addition, subtraktion, multiplikation, potenze, wert;
    float division;
    double quadrat_wurzel;

    printf("Diese Programm ist ein Rechner\n");
    
    addition = add(num1, num2);
    printf("Die addition ist %d\n", addition);

    subtraktion = subb(num1, num2);
    printf("Die subtraktion ist %d\n", subtraktion);

    multiplikation = multi(num1, num2);
    printf("Die multiplikation ist %d\n", multiplikation);

    division = div(num2, num1);
    printf("Die division ist %f\n", division);

    potenze = potenz(num1, num2);
    printf("Die potenze ist %d\n", potenze);

    quadrat_wurzel = qwurz(potenze);
    printf("Die wurzel ist %lf\n", quadrat_wurzel);
    
    vergleich_num(num1,num2);
   
}

int add(int num1, int num2){
    return num1 + num2;
}
int subb(int num1, int num2){
    return num1 - num2;
}
float div(float num1, float num2){
    if(num1 == 0){
        printf("Division Fehler");
        return 0;
    }
    return num2 / num1;
}
int multi(int num1, int num2){
    return num1 * num2;
}
int potenz(int num1, int num2){
    return pow(num1, num2);
}
double qwurz(double num1){
    return sqrt(num1); 
}
void vergleich_num(int num1, int num2){
    if (num1 < num2){
        printf("Die zahlt %d ist kleiner als %d",num2,num1);
    } else if(num1 > num2){
        printf("Die zahlt %d ist Grosser als zahl %d",num1, num2);
    } else {
        printf("Beide zahlen sind gleich");
    }
}
