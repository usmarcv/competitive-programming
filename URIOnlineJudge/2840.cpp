#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main(){

  long long int r, l, v, resto;

  scanf("%lld %lld",&r,&l);

  v = (4.0/3) * (PI*(pow(r,3)));

  printf("%lld\n",l/v);

  return 0;
}

