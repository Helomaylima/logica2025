#include <stdio.h>
 
int main() {
 
  int N;
  scanf("%d", &N);
  
  int X[N]; //vetor com N posições
  
  for (int i = 0; i < N; i++){
      scanf("%d", &X[i]);
  }
  
  int menor = X[0]; //assume que o primeiro é o menor
  int posicao = 0; //posição inicial
  
  for (int i = 1; i < N; i++){
      if(X[i] < menor){
          menor = X[i];
          posicao = i;
      }
  }
  
  printf("Menor valor: %d\n", menor);
  printf("Posicao: %d\n", posicao);
  
  return 0;
}