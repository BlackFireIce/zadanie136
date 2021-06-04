#include <stdio.h>
#include <stdlib.h>

#define TRUE    1
#define FALSE   0

#define OPCJA_PROSTOPADLOSCIAN 1
#define OPCJA_OSTROSLUP   2
#define OPCJA_WYJSCIE   0

void prostopadloscian();
void ostroslup();

int main() {
    int wybrana_opcja, wyjscie_z_programu;

    wyjscie_z_programu = FALSE;
    while(TRUE) {
        printf("Opcje programu:\n");
        printf("===============\n");
        printf("%d %s\n", OPCJA_PROSTOPADLOSCIAN,  " - pole prostopadloscianu");
        printf("%d %s\n", OPCJA_OSTROSLUP,    " - pole ostroslupa");
        printf("%d %s\n", OPCJA_WYJSCIE,    " - koniec");
        printf("\nPodaj kod polecenia: ");
        scanf("%d", &wybrana_opcja);

        switch(wybrana_opcja) {
            case OPCJA_PROSTOPADLOSCIAN:  prostopadloscian();          break;
            case OPCJA_OSTROSLUP:     ostroslup();            break;
            case OPCJA_WYJSCIE:     wyjscie_z_programu = TRUE;  break;
            default:                printf("Niepoprawny kod polecenia.\n");

        }
        if (wyjscie_z_programu == TRUE)
            break;
    }

    return EXIT_SUCCESS;
}

void prostopadloscian() {
}
void ostroslup() {
}
