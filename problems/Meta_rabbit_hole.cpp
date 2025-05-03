#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll; // g++ ll.cpp -o ll.exe
typedef long double ld;
typedef pair<ll, ll> iii; // all elements to 0   .\ll.exe
const ll mod = 1e9 + 7;
#define endl "\n"

vector<int> dp, vis, count2;
int cs = -1, pc;

int dfs(int page, vector<int> &L, int cnt)
{

    // cout << "page" << page + 1 << " " << cnt << " " << endl;

    if (dp[page] != -1)
        return dp[page];

    if (vis[page] == 1)
    {
        cs = page;
        pc = cnt - count2[page];
        return 0;
    }

    vis[page] = 1;
    count2[page] = cnt;

    dp[page] = 1 + dfs(L[page] - 1, L, cnt + 1);

    if (cs != -1)
    {
        dp[page] = pc;
        if (page == cs)
            cs = -1;
    }

    return dp[page];
}

int getMaxVisitableWebpages(int N, vector<int> L)
{
    // Write your code here
    dp.clear();
    vis.clear();
    count2.clear();
    vis.assign(N, 0);
    dp.assign(N, -1);
    count2.assign(N, 0);
    int ans = 1;
    stack<int> s;

    for (int i = 0; i < L.size(); i++)
    {
        cs = -1;
        pc = -1;

        ans = max(ans, dfs(i, L, 0));

        // for (int i = 0; i < dp.size(); i++)
        // {
        //     cout << i + 1 << " " << dp[i] << endl;
        // }

        // cout << endl
        //      << endl;
    }

    return ans;
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

    int N = 5;
    vector<int> L = {2, 4, 2, 2, 3};

    int result = getMaxVisitableWebpages(N, L);

    for (int i = 0; i < dp.size(); i++)
    {
        cout << i + 1 << " " << dp[i] << endl;
    }
    cout << "Maximum visitable webpages: " << result << endl;

    return 0;
}