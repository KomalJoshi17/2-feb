// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/make-it-non-decreasing-7d3391fd/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        int n;
        cin >> n;
        vector<long long> arr(n);

        for(int i = 0; i < n ; i++)
            cin >> arr[i];

        cout << arr[0]; 
        for(int i = 1; i < n ; i++){
            arr[i] = arr[i]*((arr[i-1] + arr[i] - 1)/arr[i]);
            cout << " " << arr[i];
        }
        cout << '\n';
    }
}