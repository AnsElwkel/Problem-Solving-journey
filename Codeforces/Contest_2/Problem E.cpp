#include <bits/stdc++.h>
#define int long long
signed main(){
    int t ;
    std::cin >> t;
    while(t--){
        int l , r;
        std::cin >> l >> r;

        std::cout<< (int)(log2(r)) << '\n';
    }
}