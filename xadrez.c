#include <stdio.h>

//movimentação do Bispo
void bispo(int casas) {
  if (casas > 0) {
    printf("Cima\n");
    printf("Direita\n");
    bispo(casas - 1);
  }
}

//movimentação da Torre
void torre(int casas) {
  if (casas > 0) {
    printf("Cima\n");
    torre(casas - 1);
  }
}

//movimentação da Rainha
void rainha(int casas) {
  if (casas > 0) {
    printf("Esquerda\n");
    rainha(casas - 1);
  }
}

//movimentação do Cavalo
void cavalo() {
  for (int i = 1; i <= 3; i++) {
    printf("Cima\n");
      while (i == 3) {
        printf("Direita\n");
        break;
      }
  }
}

int main() {

  printf("Bispo:\n\n");
  bispo(5);
  printf("\n\n");

  printf("Torre:\n\n");
  torre(5);
  printf("\n\n");

  printf("Rainha:\n\n");
  rainha(8);
  printf("\n\n");

  printf("Cavalo:\n\n");
  cavalo();
  printf("\n\n");

  return 0;
}
