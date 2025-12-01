#include <stdio.h>

void afficherBinaire(int n) {
    int i;
    int taille = sizeof(int) * 8;  

    int debut = 0; 

    for (i = taille - 1; i >= 0; i--) {
        if (n & (1 << i)) {
            printf("1");
            debut = 1;
        } else {
            if (debut) {
                printf("0");
            }
        }
    }

    if (!debut) { 
        printf("0");
    }

    printf("\n");
}

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int nb = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < nb; i++) {
        printf("%d en binaire : ", nombres[i]);
        afficherBinaire(nombres[i]);
    }

    return 0;
}
