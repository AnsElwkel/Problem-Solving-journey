#include <bits/stdc++.h>
#define int long long
signed main(){
    int t;
    std::cin >> t;
    while(t--){
        int n ,  m;
        std:: cin >> n >> m;
        int remainder = m % (n - 1);// To check remain cycles or not
        int nCycles = m / (n - 1); // Number of Cycles
        int ans = (n - 1) * (nCycles); // Count of nums are not divisible
        ans += (!remainder ? nCycles - 1: nCycles); // Count of nums are divisible
        ans += remainder; // to get last number

        std::cout << ans << '\n';
    }
}