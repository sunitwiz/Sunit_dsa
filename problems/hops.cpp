/*
https://www.metacareers.com/profile/coding_puzzles?puzzle=977526253003069

    */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// Write any include statements here

long long getSecondsRequired(long long N, int F, vector<long long> P)
{
    // Write your code here
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    pq.push(N);
    for (int i = 0; i < P.size(); i++)
    {
        pq.push(P[i]);
    }
    long long ans = 0;
    int tl = 0;

    while (!pq.empty() && pq.top() != N)
    {
        auto tp = pq.top();
        pq.pop();
        if (pq.top() == N)
        {
            ans += N - tp;
            ans += tl;
            break;
        }
        if (pq.top() - tp - 1 != 0)
        {
            ans += pq.top() - tp - 1;
            tl += 1;
            continue;
        }
        else

            tl += 1;
    }

    return ans;
}
