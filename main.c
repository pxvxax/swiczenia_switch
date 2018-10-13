#include <stdio.h>
#include <math.h>

void wyswietl_informacje(double *a, double *b);

char wczytaj(char *wybor);

int main(void) {

    double a, b, wynik;
    char wybor;


    wyswietl_informacje(&a, &b);


    wybor = wczytaj(&wybor);


    switch (wybor) {
        case '+':
            wynik = a + b;

            printf("wynik dzialania to %lf\n", wynik);
            break;
        case '-':
            wynik = a - b;

            printf("wynik dzialania to %lf\n", wynik);
            break;
        case '*':
            wynik = a * b;
            if ((a == 0) || (b == 0)) {
                printf("Nie mnóż przez 0");
            }
            if ((a != 0) && (b != 0)) {
                printf("wynik dzialania to %lf\n", wynik);
            }

            break;
        case '/':
            wynik = a / b;
            if ((a == 0) || (b == 0)) {
                printf("Nie dziel przez 0");
            }
            if ((a != 0) && (b != 0)) {
                printf("wynik dzialania to %lf\n", wynik);
            }
            break;


    }

    return 0;
}

char wczytaj(char *wybor) {
    printf("wybierz dzialanie:\n1. dodawanie\n2. odejmowanie\n3. mnożenie\n4. dzielenie\n");
    scanf("%s", wybor);
    return (*wybor);
}

void wyswietl_informacje(double *a, double *b) {
    printf("KALKULATOR.\n");
    printf("wprowadz pierwsza liczbe:\n");
    scanf("%lf", a);
    printf("wprowadz druga liczbe:\n");
    scanf("%lf", b);
}