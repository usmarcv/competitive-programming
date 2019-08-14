#include <stdio.h>
#include <string.h>

int main(){

  char dodo[100] = {"Os atributos dos monstros vao ser inteligencia, sabedoria..."},
       leo[100] = {"Iron Maiden's gonna get you, no matter how far!"},
       pepper[100] = {"Urano perdeu algo muito precioso..."},
       empate[100] = {"Putz vei, o Leo ta demorando muito pra jogar..."},
       a[10],
       b[10],
       c[10];

  while (scanf("%s %s %s",a,b,c) != EOF) {

    if(strcmp(a,"papel") == 0 && strcmp(c,"pedra") == 0 && strcmp(b,"pedra") == 0)
      printf("%s\n",dodo);
    else if(strcmp(a,"pedra") == 0 && strcmp(b,"papel") == 0 && strcmp(c,"pedra") == 0)
      printf("%s\n",leo);
    else if(strcmp(a,"pedra") == 0 && strcmp(b,"pedra") == 0 && strcmp(c,"papel") == 0)
      printf("%s\n",pepper);
    else if(strcmp(a,"pedra") == 0 && strcmp(b,"tesoura") == 0 && strcmp(c,"tesoura") == 0)
      printf("%s\n",dodo);
    else if(strcmp(a,"tesoura") == 0 && strcmp(b,"pedra") == 0 && strcmp(c,"tesoura") == 0)
      printf("%s\n",leo);
    else if(strcmp(a,"tesoura") == 0 && strcmp(b,"tesoura") == 0 && strcmp(c,"pedra") == 0)
      printf("%s\n",pepper);
    else if(strcmp(a,"papel") == 0 && strcmp(b,"papel") == 0 && strcmp(c,"tesoura") == 0)
      printf("%s\n",pepper);
    else if(strcmp(a,"papel") == 0 && strcmp(b,"tesoura") == 0 && strcmp(c,"papel") == 0)
      printf("%s\n",leo);
    else if(strcmp(a,"tesoura") == 0 && strcmp(b,"papel") == 0 && strcmp(c,"papel") == 0)
      printf("%s\n",dodo);
    else printf("%s\n",empate);

  }

  return 0;

}

