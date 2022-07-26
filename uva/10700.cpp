#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll  calculate (vector <ll> numbers, map <int, vector <int> > position, int v1, int v2){
    for(long unsigned int i = 0; i < position[v1].size(); i++){
        if(v1 == -1) numbers[position[v1][i] + 1] = numbers[position[v1][i] - 1] * numbers[position[v1][i] + 1];          
        else numbers[position[v1][i] + 1] = numbers[position[v1][i] - 1] + numbers[position[v1][i] + 1];
    }
    for(long unsigned int i = 0; i < numbers.size(); i++){
        if(v1 == numbers[i]){
            numbers.erase(numbers.begin() + i - 1);
            numbers.erase(numbers.begin() + i - 1);
            i -= 2;
        }
    }
    while(numbers.size() > 1){
        for(long unsigned int i = 0; i < numbers.size(); i++){
            if(numbers[i] == v2){
                if(v2 == -1) numbers[i + 1] = numbers[i - 1] * numbers[i + 1];
                else numbers[i + 1] = numbers[i - 1] + numbers[i + 1];

                numbers.erase(numbers.begin() + i - 1);
                numbers.erase(numbers.begin() + i - 1);

                break;
            }
        }
    }

    return numbers[0];
}

int main(){

    int n;

    cin >> n;

    while(n--){

        string s;

        cin >> s;

        vector <ll> numbers;
        map <int, vector <int> > position;
        stringstream ss(s);
        
        int num;
        string signal;
    
        while(ss >> num){
            numbers.push_back(num);

            ss >> signal;

            if(signal[0] == '*'){
                numbers.push_back(-1);
                position[-1].push_back(numbers.size() - 1);
            }
                
            else if(signal[0] == '+'){
                numbers.push_back(-2);
                position[-2].push_back(numbers.size() - 1);
            }

            else break;

            signal.erase(0, 1);

            ss.str(signal);
            ss.clear();
        }

        ll min = calculate(numbers, position, -1, -2);
        ll max = calculate(numbers, position, -2, -1);

        cout << "The maximum and minimum are " << max << " and " << min << ".\n";
    }

    return 0;
}

