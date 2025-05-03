#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll; // g++ ll.cpp -o ll.exe
typedef long double ld;
typedef pair<ll, ll> iii; // all elements to 0   .\ll.exe
const ll mod = 1e9 + 7;
#define endl "\n"

vector<vector<ll>> g;
vector<ll> vis;
void dfs(long long int node)
{
    vis[node] = 1;

    for (auto v : g[node])
        if (!vis[v])
        {
            dfs(v);
        }
}

bool sortbysec(const pair<int, int> &a, // sorting of elements wrt second
               const pair<int, int> &b)
{
    return (a.second < b.second);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // ll t;
    // cin>>t;
    // for(ll tt=1;tt<=t;tt++)
    // {
    //     cout<<"Case #"<<tt<<": ";
    //     ll n;
    // }

    cout << "yes1" << endl;

    return 0;
}