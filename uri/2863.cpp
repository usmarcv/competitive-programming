#include <bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	short t, i;
	double qt, menor = 11;

	while(cin >> t){
		menor = 11;
		for(int i = 0; i < t; i++){
			cin >> qt;
			if(qt < menor){
				menor = qt;
			}
		}
		printf("%.2lf\n",menor);
	}

	return 0;
}
