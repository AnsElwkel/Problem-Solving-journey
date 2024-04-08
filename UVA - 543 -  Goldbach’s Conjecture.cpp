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
vector<int> prfxPrime(MAX);

void seive(){
    v[0] = v[1] = false;
    for (int i = 2; i * i <MAX ; ++i) {
        if(v[i])
            for (int j = i * i; j < MAX; j += i) {
                v[j] = 0;
            }
    }
    int prev = 3;
    for (int i = 4; i < MAX; ++i){
        if(!v[i]) prfxPrime[i] = prev;
        else{
            prev = i;
            prfxPrime[i] = prev;
        }
    }
}

void elwkel(){
    while(true){
        int n;cin >> n; if(!n) return;
        bool ok = 0;
        for (int i = 2; i < n and !ok; ++i) {
            int x = prfxPrime[n - i], y = prfxPrime[i];
            if(x + y == n)
                ok = 1,cout << n << " = " << y << " + " << x << '\n';
        }
        if(!ok)
            cout << "Goldbach's conjecture is wrong.\n";
    }
}

int main(){
/*<<<<<*/Please_Not_Focus_To_My_Code/*>>>>>*/
    seive();
    prfxPrime[2] = 2;
    prfxPrime[3] = 3;

    int t = 1;
//    cin >> t;
    while(t--)
    {
        /*/\/\/\/\/\/\/\/\/\/\/\/*/
        /*/////*/elwkel();/*\\\\\*/
        /*/\/\/\/\/\/\/\/\/\/\/\/*/
    }
}