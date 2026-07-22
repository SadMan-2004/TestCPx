// Problem: C2. Renako Amaori and XOR Game (hard version)
// Platform: codeforces
// Contest: 1400
// Rating/Difficulty: 1400
// Language: C++17
// Verdict: Accepted
// URL: 
// Solved on: 2026-07-22T20:29:00.063Z

#include <bits/stdc++.h>
using namespace std;
//anywayss
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n), b(n);
        for(int &x: a) 
        cin>>x;
        for(int &x: b) 
        cin>>x;
        bool dec = false;
 
        //chk
        for(int bit = 20; bit >= 0; bit--){
            int S = 0;
            int last = -1;
 
            for(int i = 0; i < n; i++){
                int ai = (a[i] >> bit) & 1;
                int bi = (b[i] >> bit) & 1;
                int c = ai ^ bi;
 
                S ^= c;
                if(c == 1) last = i + 1; //1b
            }
 
            if(S == 0) continue; 
 
           
            if(last % 2 == 1) cout << "Ajisai\n";
            else cout << "Mai\n";
 
            dec = true;
            break;
        }
 
        if(!dec) cout << "Tie\n";
    }
 
    return 0;
}