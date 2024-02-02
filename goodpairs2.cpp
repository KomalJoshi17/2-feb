// https://codeforces.com/problemset/problem/1656/A

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int min_element = INT_MAX;
        int max_element = INT_MIN;
        int min_index;
        int max_index;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            if (a > max_element) {
                max_index = i + 1;
                max_element = a;
            }
            if (a < min_element) {
                min_index = i + 1;
                min_element = a;
            }
        }
        cout << min_index << " " << max_index << endl;
    }
    return 0;
}