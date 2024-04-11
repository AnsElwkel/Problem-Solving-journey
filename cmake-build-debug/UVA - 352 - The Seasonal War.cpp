/*صل علي النبي*/
#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define ll long long
#define ull unsigned long long
#define all(v)	((v).begin()), ((v).end())
#define sz(v)	((int)((v).size()))
#define ELWKEL ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int t;cin>>t;while(t--)
const int MOD = 1e9 + 7;
const int MAX = 1e7 + 5;

int n;
vector<string> in;

bool allow(int r , int c){
    return (r >= 0 && r < n && c >= 0 && c < n && in[r][c] == '1');
}

int cnt;
void DFS(int r, int c){
    if(!allow(r , c)) return;

    in[r][c] = '0';

    DFS(r + 1, c);
    DFS(r, c + 1);
    DFS(r, c - 1);
    DFS(r - 1, c);
    DFS(r - 1, c + 1);
    DFS(r + 1, c - 1);
    DFS(r - 1, c - 1);
    DFS(r + 1, c + 1);
}
int Case = 1;
void solve(){
    while(cin >> n){
        in.resize(n);
        cnt = 0;
        for (int i = 0; i < n; i++)
            cin >> in[i];

        for (int r = 0; r < n; r++)
            for (int c = 0; c < n; c++)
                if(in[r][c] == '1')
                    cnt++,DFS(r, c);

        cout <<"Image number " << Case++ << " contains " <<cnt << " war eagles.\n";
    }
}

int main(){
/*<<<<<*/ELWKEL/*>>>>>*/
// #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
// #endif
//     testCase
    {
        /*////////////*/
        /*/////*/solve();/*\*/
        /*////////////*/
    }
}