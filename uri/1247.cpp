#include <bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	double d, vf, vg, distance, distGuard = 0.0 , distThief = 0.0;
	
	while(scanf("%lf %lf %lf",&d, &vf, &vg) != EOF){
				distance = sqrt(pow(d,2) + pow(12,2));	
				distGuard = distance / vg;
				distThief = 12 / vf;
				if(distGuard > distThief) printf("N\n");
				else printf("S\n");	
	}

	return 0;
}

