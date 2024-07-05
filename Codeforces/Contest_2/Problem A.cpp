#include <bits/stdc++.h>
int32_t main(){
    int p , q , l , r;
    std::cin >> p >> q >> l >> r ;
    int intervalL[p*q] , intervalR[p*q] , la[p] , ra [p] , lb[q] , rb[q];

    for(int i = 0 ; i < p ; i++)std::cin >> la[i] >> ra[i];

    for(int i = 0 ; i < q ; i++)std::cin >> lb[i] >> rb[i];
    int idx = 0;
    for(int i = 0 ; i < p ; i++){
        for(int j = 0; j < q ; j++){
            intervalR[idx] = ra[i] - lb[j] , intervalL[idx] = la[i] - rb[j];
            if(intervalR[idx] < intervalL[idx]) std::swap(intervalR[idx], intervalL[idx]);
            idx++;
        }
    }
    bool vis[r + 1]{};
    for(int i = 0 ; i < p*q ; i++){
        for(int j = (intervalL[i] < l ? l : intervalL[i]) ; j < (intervalR[i] > r ? r+1 : intervalR[i]+1) ; ++j)
            vis[j] = 1;
    }
    int ans = 0 ;
    for(auto i : vis) ans += i;

    std::cout << ans << '\n';
}