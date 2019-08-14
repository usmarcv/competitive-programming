/*#include <bits/stdc++.h>

using namespace std;

int fib(int n){
    if(n < 2){
      return 1; //Casos de base, F(1) e F(0)
    }
    return fib(n - 1) + fib(n - 2); //funciona para os demais casos
}

int main(){

  std::ios::sync_with_stdio(0);
  cin.tie(NULL);

  int n, i = 0;
  cin >> n;
    while(n--){
      cout << fib(n);
      if(i != n ){
        cout << " ";
      }
    }
    cout <<"\n";

  return 0;
} 740 ms essa disgraça
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  short n;
  long long fib[41];

  memset(fib, 0, sizeof(fib));
  fib[0] = 1;
  fib[1] = 1;

  scanf("%hd",&n);
  for(int i = 2; i < n; ++i){
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  for(int i = n - 1; i >= 1; --i){
    printf("%lld ",fib[i]);
  }
    printf("%lld\n",fib[0]);

  return 0;
}

