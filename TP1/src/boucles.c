#include <stdio.h>

int main() {
    int compteur = 5;
    int i = 1;

    if (compteur >= 10) {
        printf("Erreur : compteur doit être strictement inférieur à 10.\n");
        return 1;
    }

    while (i <= compteur) {

        if (i == 1 || i == compteur) {
            int j = 1;
            while (j <= i) {
                printf("* ");
                j++;
            }
        } else {
            printf("* ");

            int j = 1;
            while (j <= i - 2) {
                printf("# ");
                j++;
            }

            printf("* ");
        }

        printf("\n");
        i++;
    }

    return 0;
}
