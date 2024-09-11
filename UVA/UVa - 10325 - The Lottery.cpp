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
#define ii pair<int, int>
#define iii tuple<int ,int , int>
#define PB push_back
using namespace std;
using namespace __gnu_pbds;
template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template<class T>
istream &operator>>(istream &input, vector<T> &v) {
    for (int i = 0; i < sz(v); i++)
        input >> v[i];

    return input;
}

template<class T>
ostream &operator<<(ostream &output, const vector<T> &v) {
    for (int i = 0; i < sz(v); i++)
        output << v[i] << ' ';

    return output;
}

const int N = 205, MAX = 5e7 + 6, MOD = 1073741824;
const double EPS = 1e-8, PI = 2 * acos(0.0);
#define int long long

int lcm(int a , int b) {
    return (a * b) / __gcd(a, b);
}

void solve() {
    int n, m;
    while(cin >> n >> m) {
        int a[m] , ans = 0;
        for(auto & i : a) cin >> i ;

        //Approach (reverse thinking) : I get the count of numbers that divisible by at least one number of M numbers and remove the common between them ,
        //                              then subtract them from total numbers  :)

        //Inclusion and Exclusion with bitmask
        for(int i = 0; i < (1 << m) ; i++) { // O((2^m - 1) * m) -> max m -> 15 and bitmask fit till m = 25 (~ about 10^8 operations)
            int mult = 1 , cnt = 0;
            for(int j = 0; j < m; j++) {
                if(i & (1 << j)) {
                    mult = lcm(mult, a[j]); //Think about it
                    cnt++;
                }
            }
            if(mult == 1) continue; // empty subset

            if(!(cnt & 1)) // if number of element in this subset is even then subtract from total because this common (Probability :( )
                mult *= -1;

            ans += n/mult;
        }

        cout << n - ans << '\n';
    }
}

int32_t main(int argc, char *argv[]) {
    //freopen("input", "rt", stdin);
    __ELWKEL__

    // testCase
    solve();
}
