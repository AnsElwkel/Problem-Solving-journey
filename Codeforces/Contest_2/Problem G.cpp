#include <bits/stdc++.h>
int main(){
    int n ;
    std::cin >> n;
    double ans = sqrt(n);
    std::cout << (ans == int(ans) ? "YES\n" : "NO\n");
}