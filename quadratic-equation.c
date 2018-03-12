//
//  wip_lab1
//  Zadanie 2
//  Równanie kwadratowe
//
//  Autor: Patryk Barczak

#include<stdio.h>
#include<math.h>

int main() {
    double a;
    double b;
    double c;
    
    //Wczytanie współrzędnych
    printf("Podaj współrzędną a: ");
    scanf("%lf",&a);
    printf("Podaj współrzędną b: ");
    scanf("%lf",&b);
    printf("Podaj współrzędną c: ");
    scanf("%lf",&c);
    
    if(a != 0) { //sprawdzenie czy jest to równanie kwadratowe (a różne od 0)
        double delta = pow(b,2)-4*a*c;
    
        if(delta > 0) { //dwa rozwiązania
            double x1 = (-b+sqrt(delta))/(2*a);
            double x2 = (-b-sqrt(delta))/(2*a);
            printf("Rozwiązaniami równania są: %lf i %lf\n", x1,x2);
        } else if(delta == 0) { //jedno rozwiązanie
            double x = (-b)/(2*a);
            printf("Rozwiązaniem równania jest: %lf\n", x);
        } else //brak rozwiązań
            printf("Brak rozwiązań\n");
    } else
        printf("To nie jest równanie kwadratowe (a = 0)\n");
    
:i


    return 0;
:a




}
