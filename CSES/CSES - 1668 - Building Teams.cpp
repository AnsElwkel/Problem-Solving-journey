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
#define INF 1e9
const int MAX = 1e3+1;
const int MOD = 1e9 + 7;
////////! CODE !\\\\\\\\/

vector<vector<int>>v;
vector<int>vis;
bool imp;

void dfs(int s , int cur = 0){
    if(vis[s] != 2) return;
    vis[s] = cur;

    for(auto &i : v[s]){
        if(vis[i] == 2)
            dfs(i , cur ^ 1);
        else if(vis[i] == vis[s]) imp = 1;
    }
}
void solve(){
    int n , m;
    cin>> n >> m;
    vis.assign(n + 1 , 2);
    v.resize(n + 1);
    cnt = n;
    for (int i = 0; i < m; ++i) {
        int x , y;cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i = 1 ; i <= n ; ++i) if(vis[i] == 2)
            dfs(i);

    if(imp){
        cout << "IMPOSSIBLE\n";
        return;
    }

    for(auto &i : vis) {
        if (i == 0) cout << 1 << ' ';
        else if (i == 1) cout << 2 << ' ';
    }
}

int main(){
/*<<<<<*/ELWKEL/*>>>>>*/
// #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
// #endif

//    testCase
    {
        /*////////////*/
        /*/////*/solve();/*\*/
        /*////////////*/
    }
}