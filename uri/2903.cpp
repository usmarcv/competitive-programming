#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  if(b != 0){
    return (gcd(b, a%b));
  }else
    return a;
}

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b, R, D, pizza;
  scanf("%d.%d",&a,&b);

  R = 360 * 100;	
  D = (100 * a) + b;
  pizza = (R/(gcd(R,D)));

  printf("%d\n",pizza);

  return 0;
}
