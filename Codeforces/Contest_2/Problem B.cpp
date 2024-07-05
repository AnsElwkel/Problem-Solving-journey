#include <bits/stdc++.h>
#define int long long
int main(){
    int n ,  m ;
    std::cin >> n >> m;

    int cycles = (m + 4)/ 5;

    int ans = cycles * n;
    for(int i = 1 ; i <= n ; ++i)
        if(cycles * 5 - (i % 5) > m) --ans;

    std::cout << ans << '\n';
}