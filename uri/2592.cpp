#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
	IOS
	int n;
	bool flag = false;
	int cont;
	while(cin >> n and n){
		cont = 0;
		while(!flag){
			int vet[n+5];
			cont++;
			for(int i = 0 ; i < n ; ++i)
				cin >> vet[i];
			flag = true;
			for(int i = 1 ; i < n ; ++i)
				if(vet[i] < vet[i-1]){
					flag = false;
					break;
				}
			if(flag)
				break;
			flag = false;
		}
		cout << cont << endl;
	flag = false;	
	}
	return 0;
}
