#include <stdio.h>

int main () {
  
printf("Nivel novato\n");
printf("Commit\n");

int i = 1;
int j = 1;
int k = 1;

printf("Movimentos da torre\n");
// movimentação pra direita em 5 casas com a torre

for ( i = 0; i < 5; i++)
{
 printf("Direita\n");
}

printf("----------------------------\n");

printf("Movimentos do bispo\n");

// movimentação pras diagonais em 5 casas com o bispo

for (j = 0; j < 5; j++) 
{
 printf("Cima,Direita\n");
}

printf("----------------------------\n");

// movimentação pra esqquerda em 8 casas com a rainha

while (k < 8)
{
  printf("Esquerda\n");
 k++;
}

return 0;

}