#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;
using ld = long double;
const ld PI = acos(-1.0);

set<ll> g[11];
bool used[11];
ll cnt = 0;

void dfs(ll x){
    used[x] = 1;
    for(ll u: g[x]){
        if(used[u]) {
            cnt++;
            continue;
        }
        used[u] = 1;
        dfs(u);
    }
}

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    for(ll kkk = 0; kkk < t; kkk++){
        ll n, m;
        cnt = 0;
        cin >> n >> m;
        g->clear();
        for(ll i = 0; i <= n; i++){
            g[i].clear();
            used[i] = 0;
        }
        for(ll i = 0; i < m; i++){
            ll a, b;
            cin >> a >> b;
            g[a].insert(b);
        }
        dfs(1);
        cout << m - cnt << endl;
    }

    return 0;
}

