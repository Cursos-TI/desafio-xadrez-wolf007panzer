#include <stdio.h>

int main () {

printf("Nivel aventureiro\n");
printf("Commit\n");

int i = 1;
int j = 1;
int k = 1;
int l = 1;

printf("Movimento da torre\n");
// movimentação pra direita em 5 casas com a torre

for ( i = 0; i < 5; i++)
{
 printf("Direita\n");
}

printf("----------------------------\n");

printf("Movimento do bispo\n");

// movimentação pras diagonais em 5 casas com o bispo

for (j = 0; j < 5; j++) 
{
 printf("Cima,Direita\n");
}

printf("----------------------------\n");

printf("Movimento da rainha\n");
// movimentação pra esquerda em 8 casas com a rainha


while (k < 16)
{
  printf("Esquerda\n");
 k++;
}

printf("----------------------------\n");

printf("Movimentação do cavalo\n");
// movimentação em L em 3 casas com o cavalo

while (l--)
{
 for ( int m = 0; m < 2; m++)
 {
  printf("Cima\n");
 }
 printf("Direita\n");
}

return 0;

}