#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, sh, sm, eh, em;
    int totalInicio, totalFinal, ans, ansHora, ansMin;
    
    cin >> n;
    while(n--){
        cin >> sh >> sm >> eh >> em;
        totalInicio = sh * 60 + sm;
        totalFinal = eh * 60 + em;
        ans = abs(totalInicio-totalFinal);
        if(ans < 60){
            cout << "0 " << ans << endl;
        }else if(ans >= 60){
            ansMin = ans%60;
						ansHora = ans/60;
            cout << abs(ansHora) << " ";
			      cout << abs(ansMin) << endl;
        }
    }

	return 0;
}
