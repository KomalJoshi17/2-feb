// https://www.codechef.com/problems/MAXCOUNT

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_cases; cin >> test_cases;
    vector <int> count(10001,0);
    while(test_cases--){
        int n,a; cin >> n;
        int max_value(0), max_count(0);
        for(int i=0;i<n; i++){
            cin >> a;
            count[a]++;
        }
        for(int i=10001; i>=1; i--){
            if(count[i]>=max_count){
                max_count = count[i];
                max_value = i;
            }
            count[i] = 0;
        }
        cout << max_value << " " << max_count << "\n";
    }	// your code goes here

}