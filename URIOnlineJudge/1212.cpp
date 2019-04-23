#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 	unsigned long int a, b, modA, modB, carry, flag, ans = 0, maior = 0;

	while(cin >> a >> b && (a || b)){
		carry = 0; flag = 0;
		while(a != 0 || b != 0){
			modA = a % 10;
			a = a/10;
			modB = b % 10;
			b = b/10;
			ans = modA + modB + flag;
				if(ans >= 10){
					flag = 1;
					carry += 1;
				}else flag = 0;
		}
			if(carry == 0) printf("No carry operation.\n");
			else if	(carry == 1) printf("%ld carry operation.\n",carry);
			else if(carry > 1) printf("%ld carry operations.\n",carry);
	}
		
	return 0;
}

