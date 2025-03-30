
#include <stdio.h>

int main () {

printf("Nivel novato\n");
printf("Commit\n");

int i;

printf("Movimentos da torre\n");

printf("digite o numero de casas para torre andar para direita:");
scanf("%d", &i);
// movimentação pra direita em 5 casas com a torre

for ( i = 0; i < 5; i++)
{
 printf("Direita\n");
}

printf("----------------------------\n");

printf("digite o numero de casas para torre andar para esquerda:");
scanf("%d", &i);
for ( i = 0; i < 5; i++)
{
 printf("Esquerda\n");
}

printf("----------------------------\n");

// movimentação pra cima em 5 casas com a torre

printf("digite o numero de casas para torre andar para cima:");
scanf("%d", &i);

for ( i = 0; i < 5; i++)
{
 printf("cima\n");
}

printf("----------------------------\n");

 // movimentação pra baixo em 5 casas com a torre 

 printf("digite o numero de casas para torre andar para baixo:");
 scanf("%d", &i);

for (i = 0; i < 5; i++)
{
 printf("baixo\n");
}

printf("----------------------------\n");

printf("Movimentos do bispo\n");

// movimentação pras diagonais em 5 casas com o bispo
do
{
 printf("digite o numero de casas para o bispo andar:");
 scanf("%d", &i);
 if ( i % 2 != 0)
 {
  printf("Cima,Esquerda\n");
 }
 else
 {
  printf("Cima,Direita\n");
 }
 
 
} while (i % 2 == 0);

printf("----------------------------\n");

printf("Movimentos da rainha\n");

// movimentação pra direita em 8 casas com a rainha

printf("digite o numero de casas para a rainha andar pra direita:");
 scanf("%d", &i);

while (i < 16)
{
  printf("Direita\n");
 i++;
}

printf("----------------------------\n");

// movimentação pra esqquerda em 8 casas com a rainha

printf("digite o numero de casas para a rainha andar pra esquerda:");
 scanf("%d", &i);

while (i < 16)
{
  printf("Esquerda\n");
 i++;
}

printf("----------------------------\n");

// movimentação pra cima 8 casas com a rainha

printf("digite o numero de casas para a rainha andar pra cima:");
 scanf("%d", &i);

while (i < 16)
{
  printf("Cima\n");
 i++;
}

printf("----------------------------\n");

// movimentação pra baixo 8 casas com a rainha

printf("digite o numero de casas para a rainha andar pra baixo:");
 scanf("%d", &i);

while (i < 16)
{
  printf("Baixo\n");
 i++;
}

printf("----------------------------\n");

// movimentação pra diagonal 8 casas com a rainha

printf("digite o numero de casas para a rainha andar:");
 scanf("%d", &i);

while (i < 16)
{
  printf("Cima,Direita\n");
 i++;
}

printf("----------------------------\n");

// movimentação pra diagonal 8 casas com a rainha

printf("digite o numero de casas para a rainha andar:");
 scanf("%d", &i);

while (i < 16)
{
  printf("Cima,Esquerda\n");
 i++;
}

return 0;

}