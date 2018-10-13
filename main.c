#include <stdio.h>
#include <math.h>
int main(void)
{

    double a,b,wynik;
    int wybor;


    printf("KALKULATOR.\n");
    printf("wprowadz pierwsza liczbe:\n");
    scanf("%lf",&a);
    printf("wprowadz druga liczbe:\n");
    scanf("%lf", &b);


    printf("wybhierz dzialanie:\n1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n4. Dzielenie\n");
    scanf("%i", &wybor);


    switch(wybor)
    {
        case 1:
            wynik = a+b;
            break;
            printf("wynik dzialania to %lf\n", wynik);
        case 2:
            wynik = a-b;
            break;
            printf("wynik dzialania to %lf\n", wynik);
        case 3:
            wynik = a*b;
            if((a ==0) || (b ==0)){
        printf("Nie mnóż przez 0");
    }
            if((a!=0) && (b!=0)) {
                printf("wynik dzialania to %lf\n", wynik);
            }

            break;
        case 4:
            wynik = a/b;
            if((a ==0) || (b ==0)){
                printf("Nie dziel przez 0");
            }
            if((a!=0) && (b!=0)) {
                printf("wynik dzialania to %lf\n", wynik);
            }
            break;


    }

        return 0;
}