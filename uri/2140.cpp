#include <stdio.h>

int main(){

  int N, M, i, restoNotas, duasNotas;
  int notas[15] = {7,12,22,52,102,15,25,55,105,30,60,110,70,120,150};

  for(;;){
    scanf("%d %d",&N,&M);

    if(N == 0 && M == 0)
      break;
      restoNotas = M - N; //erro o valor seria sempre negativo com N-M//////////////

      for(i=0;i<15;i++) {
        duasNotas=0;
          if(notas[i] == restoNotas){
            duasNotas = 1;
            break;
          }
      }
      if(duasNotas)
        printf("possible\n");
      else  printf("impossible\n");
  }

  return 0;
}
