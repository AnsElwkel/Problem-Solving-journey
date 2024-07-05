#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <unordered_map>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define __ELWKEL__ ios_base::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define testCase int t;cin>>t;while(t--)
#define ll long long
#define ull unsigned long long
#define all(v) ((v).begin()), ((v).end())
#define rall(v) ((v).rbegin()), ((v).rend())
#define sz(v) ((int)((v).size()))
#define INF 1000000000
#define INFLL 1000000000000000000
using namespace std;
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int MAX =1003, MOD = 5;
ll fact(int n){
    ll ret = 1;
    for(int i = 1 ; i <= n ; i++)
        ret *= i;

    return ret;
}

ll C(int n , int r){
    return fact(n) / (fact(n - r) * fact(r));
}
void solve(){
    string s , ss; cin >> s >> ss;

    int diffP = count(all(s) , '+') - count(all(ss) , '+')  ,
            diffN = count(all(s) , '-') - count(all(ss) , '-' ) ,
            Q = count(all(ss) , '?') ;
//    cout << diffP << ' ' << diffN << ' ' << Q << '\n';

    bool ok = diffP >= 0 ;
    ok &= diffN >= 0;
    double ans = C(Q , diffP) / (double)(1 << Q);

    cout << fixed << setprecision(12) << (ok ? ans : ok) << '\n';
}

int32_t main() {                /*____*/ __ELWKEL__ /*____*/
//    testCase
    solve();
}