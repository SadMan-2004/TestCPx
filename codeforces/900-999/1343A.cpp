// Problem: A - Candies
// Platform: codeforces
// Contest: Contest-1343
// Rating/Difficulty: 900
// Language: C++20 (GCC 13-64)
// Verdict: Accepted
// URL: https://codeforces.com/contest/1343/submission/383874879
// Solved on: 2026-07-22T20:30:54.097Z

#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define ld long double
 
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 //sad
void solve() {
    int n;
    cin>>n;
    int sum = 1;
    int term =1;
    for(int i = 2;i<=30;i++){
        term*=2;
        sum+=term;
        if(n%sum==0){
            cout <<n/sum<<"\n";
            break;
        }
    }
}
 
int main() {
    fastio
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}