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
const int MAX = 1e2 + 5;
//////////! CODE !\\\\\\\\\/

vector<vector<int>> adj;
vector<bool> vis;
vector<int> res;

void DFS(int node) {
    vis[node] = 1;

    for(auto &i : adj[node]){
        if(!vis[i])
            DFS(i);
    }

    res.push_back(node);
}
void solve(){
    while(true){
        int v = - 1, e = -1;
        cin >> v>> e;
        if (v == 0 and e == 0)
            break;
        res.clear() , adj.clear() , vis.clear();

        adj.resize(v + 1);
        vis.resize(v + 1 , false);
        for (int i = 0; i < e;i ++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        for (int i = 1; i <= v; i++)
            if(!vis[i])
                DFS(i);


        reverse(all(res));
        for(auto i : res)
            cout << i << ' ';
        cout << '\n';
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

