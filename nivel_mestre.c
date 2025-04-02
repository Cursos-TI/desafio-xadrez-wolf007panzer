#include <stdio.h>

void movimento_peca (int p, int m, char d []){ // Pointer porque o valor é alterado na função
    for (p = 3, m = 8; p < m; (p)++){
        printf("%s\n", d);
    }
}

void movimento_rainha (int a, int b, char c []){
    for(a = 0, b = 8; a < b; (a)++){
        printf("%s\n", c);
    }
}

int main () {

  printf("Nivel mestre\n");
  printf("Commit\n");
  
    printf("Movimento da torre:\n");
    int peca = 0;
    int torre = 5;

    movimento_peca (peca, torre, "Direita");
    printf("\n");


    printf("Movimento do bispo:\n");

    for (int vertical = 0; vertical < 5; vertical++) {         
        printf("Cima\t");
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n");
        }
    }

    printf("\n");

    int rainha = 8;

    printf("Movimento da rainha:\n");
    movimento_rainha (peca, rainha , "Esquerda");

    printf("\n");

    printf("Movimento do cavalo:\n");

    for (int baixo = 0; baixo <= 2; baixo++) {
        if (baixo < 2) { // 
            printf("Cima\n");
        }
        for (int esquerda = 0; baixo == 2 && esquerda < 1; esquerda++) {
            printf("Direita\n");
        }
    }

}