#include <stdio.h>

int main() {
    
    int tabuleiro[10][10], navio_h[2], navio_v[2];

    navio_h[0]=3;
    navio_h[1]=5;
    navio_v[0]=2;
    navio_v[1]=8;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    if(navio_h[0]+2 <= 9 ) {
        int j=navio_h[0];
        while(j<navio_h[0]+3) {
            tabuleiro[navio_h[1]][j] = 3;
            j++;
        }
    }

    if(navio_v[0]+2 <= 9 ) {
        if(navio_v[1]!=3 || navio_v[1]!=4 || navio_v[1]!=5) {
        int j=navio_v[0];
        while(j<navio_v[0]+3) {
            tabuleiro[j][navio_v[1]] = 3;
            j++;
        }
        }
    }
    

    printf("\nTabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        printf("|");
        for (int j = 0; j < 10; j++) {
            printf("%d|", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}
