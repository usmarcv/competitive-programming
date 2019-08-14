#include <bits/stdc++.h>
using namespace std;

int main(){

  std::ios::sync_with_stdio(false);
  cin.tie(NULL);

  int anterior = -1, n, num, maior = 0, cont = 0;

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> num;
    if(num == anterior){
        cont++;
    }
    if(num != anterior){
        cont = 0;
        anterior = num;
    }
    if(cont > maior){
        maior = cont;
    }
  }

  cout << ++maior << "\n";

  return 0;
}

