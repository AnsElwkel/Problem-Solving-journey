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

////////////! CODE !\\\\\\\\\\\\\/
int n, m;
bool ok;
bool valid(int r ,int c){
    return (r >= 0 && c >= 0 && r < n && c < m);
}

vector<vector<char>> in;
vector<vector<bool>> vis;
int cntt;
void dfs(int r , int c , char x){
    if(!valid(r , c) || vis[r][c] || in[r][c] != x )
        return;

    vis[r][c] = 1;
    cntt++;

    dfs(r, c - 1 , x);
    dfs(r, c + 1 , x);
    dfs(r - 1, c , x);
    dfs(r + 1, c, x);
}

int Case = 1;
void solve(){
    while(true){

        cin >> n >> m;
        if(n == 0 && m == 0) break;

        in.assign(n, vector<char>(m));
        vis.assign(n, vector<bool>(m));

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> in[i][j];

        multimap<char, int> cnt;
        for (int r = 0; r < n; r++)
            for (int c = 0; c < m; c++)
                if(!vis[r][c] and in[r][c] != '.')
                    cntt = 0, dfs(r, c, in[r][c]), cnt.insert({in[r][c], cntt});

        vector<pair<int, char>> sh;
        for(auto &i : cnt)
            sh.push_back({-i.second, i.first});

        sort(all(sh));

        cout << "Problem " <<Case++ << ':' << '\n';

        for (auto &i : sh)
            cout << i.second << " " << -i.first << '\n';
    }
}


int main(){
/*<<<<<*/ELWKEL/*>>>>>*/
// #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
// #endif

    // testCase
    {
        /*////////////*/
        /*/////*/solve();/*\*/
        /*////////////*/
    }
}