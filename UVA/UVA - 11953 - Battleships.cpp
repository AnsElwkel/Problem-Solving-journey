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
/////////////! CODE !\\\\\\\\\\\\\\/
int n;
vector<vector<char>> in;
bool f , ok;
bool allow(int r , int c){
    return (r >= 0 && r < n && c >= 0 && c < n);
}

void DFS(int r, int c){
    if(!allow(r , c) || in[r][c] == '.' || in[r][c] == '*') return;
    if (in[r][c] == 'x')
        ok = 1;

    in[r][c] = '*';

    DFS(r - 1, c);
    DFS(r + 1, c);
    DFS(r, c - 1);
    DFS(r, c + 1);

    // DFS(r - 1, c + 1);
    // DFS(r + 1, c - 1);
    // DFS(r - 1, c - 1);
    // DFS(r + 1, c + 1);
}
int Case = 1;
void solve(){
    cin >> n;
    in.assign(n + 1, vector<char>(n + 1));
    int r, c;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> in[i][j];
        }
    }
    int cnt = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if(in[i][j]!= '.'){
                ok = 0;
                DFS(i, j);
                if(ok) cnt ++;
            }

    cout << "Case " << Case++ << ": " << cnt << '\n';
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