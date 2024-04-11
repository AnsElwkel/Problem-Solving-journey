/*صل علي النبي*/
#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define ll long long
#define ull unsigned long long
#define all(v)	((v).begin()), ((v).end())
#define sz(v)	((int)((v).size()))
#define Please_Not_Focus_To_My_Code ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const ll mod = 1e9 + 7;
const int MAX = 1e6 + 5;

vector<bool> v(MAX , true);
vector<int> digPrimes(MAX);
int isDigitPrime(int n){
    if(n == 0)
        return 0;

    return n % 10 + isDigitPrime(n / 10);
}
void seive(){
    v[0] = v[1] = false;
    for (int i = 2; i * i <MAX ; ++i) {
        if(v[i]){
            for (int j = i * i; j < MAX; j += i) {
                v[j] = 0;
            }
        }
    }
}

void solve(){
    for (int i = 2; i < MAX; ++i) {
        if(v[i]){
            if(v[isDigitPrime(i)])
                digPrimes[i] = digPrimes[i - 1] + 1;
            else
                digPrimes[i] = digPrimes [i - 1];
        }else{
            digPrimes[i] = digPrimes [i - 1];
        }
    }
}

void elwkel(){
    int l , r; cin >> l >> r;
    cout << digPrimes[r] - digPrimes[l - 1] << '\n';
}

int main(){
/*<<<<<*/Please_Not_Focus_To_My_Code/*>>>>>*/
    seive();
    solve();
    int t = 1;
    cin >> t;
    while(t--)
    {
        /*/\/\/\/\/\/\/\/\/\/\/\/*/
        /*/////*/elwkel();/*\\\\\*/
        /*/\/\/\/\/\/\/\/\/\/\/\/*/
    }
}