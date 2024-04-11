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
//////////////// Logic of Problem\\\\\\\\\\\\\\/
/////////But I don`t know if this code Accepted or not on UVA\\\\\\/
/////////Becuase UVA is very boring :( \\\\\/
int n , m;
vector<vector<char>> in;
string ch = "@IEHOVA#";
bool ok , f;
bool allow(int r , int c){
    return (r >= 0 && r < n && c >= 0 && c < m);
}

void DFS(int r, int c , int i = 1){
    if(i > sz(ch)) return;

    if(! ok ) ok = 1;
    else cout << " ";

    if(allow(r , c + 1) && in[r][c + 1] == ch[i]){
        cout << "right";
        DFS(r, c + 1 , i + 1);
    }else if(allow(r , c - 1) && in[r][c - 1] == ch[i]){
        cout << "left" ;
        DFS(r, c - 1 , i + 1);
    }else if(allow(r - 1 , c) && in[r - 1][c] == ch[i]){
        cout << "forth";
        DFS(r - 1, c , i + 1);
    }

    // DFS(r - 1, c + 1);
    // DFS(r + 1, c - 1);
    // DFS(r - 1, c - 1);
    // DFS(r + 1, c + 1);
}
void solve(){
    cin >> n>> m;
    // i = 0;
    ok = 0;
    in.assign(n + 1, vector<char>(m + 1));
    int r, c;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> in[i][j];
            if(in[i][j] == '@')
                r = i, c = j;
        }
    }
    if(! f) f = 1;
    else cout << '\n';

    DFS(r, c);
}

int main(){
/*<<<<<*/ELWKEL/*>>>>>*/
// #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
// #endif
    testCase
    {
        /*////////////*/
        /*/////*/solve();/*\*/
        /*////////////*/
    }
}