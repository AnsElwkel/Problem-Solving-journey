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
const int MAX = 1e5 + 5;
//LINK -> https://www.spoj.com/problems/MAKETREE/
///////////! CODE !\\\\\\\\\/
int n , s;
vector<vector<int>> adj;
bool vis[MAX];
vector<int> topo;
int par[MAX];
void topSort(int node){
    vis[node] = 1;

    for(auto i : adj[node]){
        if(!vis[i])
            topSort(i);
    }

    topo.push_back(node);
}

void solve(){
    cin >> n >> s;
    adj.resize(n + 1);
    for (int i = 1; i <= s; i++){
        int a; cin >> a;
        for (int j = 0; j < a; j++){
            int w; cin >> w;
            adj[i].push_back(w);
        }
    }

    for (int i = 1; i <= n; i++){
        if(!vis[i])
            topSort(i);
    }

    int pos = 0;
    for (int i = n - 1; i >= 0; i--){
        int tmp = topo[i];
        par[tmp] = pos;
        pos = tmp;
    }

    for (int i = 1; i <= n; ++i)
        cout << par[i] << ' ';
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