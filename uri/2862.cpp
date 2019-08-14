#include <stdio.h>

int main() {

  short c,n;

  scanf("%hd",&c);

  while (c--) {

    scanf("%hd",&n);

    if(n>8000){
	    printf("Mais de 8000!\n");
    }else printf("Inseto!\n");

  }

  return 0;
}
