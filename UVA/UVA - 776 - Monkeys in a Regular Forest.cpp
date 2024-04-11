#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define ll long long
#define ull unsigned long long
#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)((v).size()))
#define ELWKEL ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int t;cin>>t;while(t--)
const int MOD = 1e9 + 7;
const int MAX = 10003;
bool cmp(string &a , string &b){
    return sz(a) < sz(b);
}

////////////! Logic of Problem !\\\\\\\\\\\\\/
int n, m;
bool valid(int r ,int c){
    return (r >= 0 && c >= 0 && r < n && c < m);
}

vector<vector<char>> in;
vector<vector<int>> out;
vector<vector<bool>> vis;
int cnt;
void dfs(int r , int c , char x){
    if(!valid(r , c) || vis[r][c] || in[r][c] != x)
        return;

    out[r][c] = cnt;
    vis[r][c] = 1;

    dfs(r, c - 1  , x);
    dfs(r, c + 1 , x);
    dfs(r - 1, c  , x);
    dfs(r + 1, c , x);
    dfs(r + 1, c + 1 , x);
    dfs(r + 1, c - 1 , x);
    dfs(r - 1, c - 1 , x);
    dfs(r - 1, c + 1 , x);
}

void solve(){
    cin >> n >> m;
    in.assign(n, vector<char>(m));
    out.assign(n, vector<int>(m));
    vis.assign(n, vector<bool>(m , false));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> in[i][j];


    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(!vis[i][j]){
                // cout << 'M' ;
                cnt++;
                dfs(i, j, in[i][j]);
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            cout << out[i][j] << ' ';
        cout << '\n';
    }
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