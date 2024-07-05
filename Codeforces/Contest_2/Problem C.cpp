#include <bits/stdc++.h>
#define int long long
const int MAXN = 101;
int n , freq[MAXN];
signed main(){
    int t;
    std::cin >> t;
    while(t--){
        memset(freq , 0 , sizeof freq);
        std::cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++){
            std::cin >> a[i];
            freq[a[i]]++;
        }

        for(int j = 0 ; j < MAXN ; j++)
            if(freq[j] == 1)
                for(int i = 0 ; i < n ; i++)
                    if(a[i] == j)
                        std::cout << i + 1<< '\n' , 0;
    }
}