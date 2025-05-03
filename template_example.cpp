#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>

template <class T>
ostream &operator<<(ostream &os, vector<T> V)
{
    os << "[ ";
    for (auto v : V)
        os << v << " ";
    return os << "]";
}
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define trace(...)
#endif

/*#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")
*/

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
const ll mod = 1e9 + 7;
const ll maxn = 100000;
#define int long long

ll t;
cin >> t;
for (ll tt = 1; tt <= t; tt++)
{
    cout << "Case #" << tt << ": ";
    solve();
}

vector<tuple<int, int, int>> e(s);
e[i] = make_tuple(x[i], y[i], i);
sort(e.begin(), e.end());

vector<vector<int>> vec(m, vector<int>(n, 0));
2D vector initialize

    v3.pb({ck / d, ck - d *(ck / d), v[i - 1]}); // adding element into a vecor of srructure type

cout << setprecision(15) << fixed << sum << endl; // precision
memset(pre, 0, sizeof(pre));                      // memset
int p = q.size()                                  // returns size

        vector<pair<int, int>>
            vect; // vector declaration of pair

for (int i = 0; i < n; i++)
    vect.push_back(make_pair(arr[i], arr1[i])); // inserting elements in pairs

cout << vect[i].first << " "
     << vect[i].second << endl; // output of each elements in a loop

sort(vect.begin(), vect.end()); // sorting of vector wrt first;

bool sortbysec(const pair<int, int> &a, // function wrt 2nd element sort in vector
               const pair<int, int> &b)
{
    return (a.second < b.second);
}

sort(vect.begin(), vect.end(), sortbysec); // sort wrt 2nd element

vector<int> v{1, 5, 8, 9, 6, 7, 3, 4, 2, 0}; // initializing 1d vector

sort(v.begin(), v.end(), greater<int>()); // sorting in descending

for (auto x : v) // for output of every element of v;
    cout << x << " ";

for (auto &x : v) // for output of every element of v and will increase every element of v by 1;
    x++;
cout << x << " ";

int arr[] = {5, 10, 15, 20, 20, 23, 42, 45}; // transfer of an array to vector
int n = sizeof(arr) / sizeof(arr[0]);
vector<int> vect(arr, arr + n);

vector<int> v;
int &elemRef = v[3]; // return address

elemRef = 22 // Modifying the vector using reference to element at index 3

    do
{
    cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n"; // calculating different permutation
}
while (next_permutation(v.begin(), v.end()))
    ;

vector<vector<int>> v;
for (int i = 0; i < n; i++)
{ // 2d vector intialize
    for (int j = 0; j < m; j++)
    {
        v[i].push_back(data);
    }
}

******************************************************************************************************************************8

                                                                                                                             sort(first_iterator, last_iterator)    // To sort the given vector.    sort(vect.begin(), vect.end())
                                                                                                                             reverse(first_iterator, last_iterator) // To reverse a vector.           reverse(vect.begin(), vect.end())
    * max_element(first_iterator, last_iterator)                                                                                                                    // To find the maximum element of a vector.
    // cout << *max_element(vect.begin(), vect.end())
    * min_element(first_iterator, last_iterator)                      // To find the minimum element of a vector.
      accumulate(first_iterator, last_iterator, initial value of sum) // Does the summation of vector elements
                                                                      // accumulate(vect.begin(), vect.end(), 0);

      count(first_iterator, last_iterator, x) // To count the occurrences of x in vector.
                                              // count(vect.begin(), vect.end(), 20)

      find(first_iterator, last_iterator, x) // Points to last address of vector ((name_of_vector).end()) if element is not present in vector.
                                             // find(vect.begin(), vect.end(),5) != vect.end()?
                                             // cout << "\nElement found":

      binary_search(first_iterator, last_iterator, x) // Tests whether x exists in sorted vector or not.

      lower_bound(first_iterator, last_iterator, x) // returns an iterator pointing to the first element
                                                    // in the range [first,last) which has a value not less than ‘x’.
      upper_bound(first_iterator, last_iterator, x) // returns an iterator pointing to the
                                                    // first element in the range [first,last) which has a value greater than ‘x’.

      /*int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
       auto q = lower_bound(vect.begin(), vect.end(), 20);   // Returns the first occurrence of 20
       auto p = upper_bound(vect.begin(), vect.end(), 20);  // Returns the last occurrence of 20
        cout << q-vect.begin() << endl;                   //returns 3
        cout << p-vect.begin() << endl;                      //returns 5   */

      // index start from 0

      arr.erase(position to be deleted) // This erases selected element in vector and shifts and resizes the vector elements accordingly.
                                        // vect.erase(vect.begin()+1);
                                        // Delete second element of vector

      arr.erase(unique(arr.begin(), arr.end()), arr.end()) // This erases the duplicate occurrences in sorted vector in a single line.
                                                           // vect.erase(unique(vect.begin(),vect.end()),vect.end());
                                                           //// Deletes the duplicate occurrences

      /*    for (int i=0; i< vect.size(); i++)    //after deleting duplicates size also changes
             cout << vect[i] << " ";     */

      // needs to be sorted

      next_permutation(first_iterator, last_iterator) // This modified the vector to its next permutation.
      prev_permutation(first_iterator, last_iterator) // This modified the vector to its previous permutation.

      /*int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
          int n = sizeof(arr)/sizeof(arr[0]);
          vector<int> vect(arr, arr+n);

          cout << "Given Vector is:\n";
          for (int i=0; i<n; i++)                                  //5 10 15 20 20 23 42 45
              cout << vect[i] << " ";

          // modifies vector to its next permutation order
          next_permutation(vect.begin(), vect.end());
          cout << "\nVector after performing next permutation:\n";
          for (int i=0; i<n; i++)
              cout << vect[i] << " ";                                     //5 10 15 20 20 23 45 42

          prev_permutation(vect.begin(), vect.end());
          cout << "\nVector after performing prev permutation:\n";
          for (int i=0; i<n; i++)
              cout << vect[i] << " ";      */
      //  5 10 15 20 20 23 42 45

      distance(first_iterator, desired_position) // It returns the distance of desired position from the first iterator.
                                                 // This function is very useful while finding the index.

    // cout << "Distance between first to max element: ";
    // cout << distance(vect.begin(),max_element(vect.begin(), vect.end()));
    // will give 7(index starting from 0)

    * ***********************************************************************************

                                                                                        dfs

                                                                                        vector<vector<int>> g;
vector<int> vis;
void dfs(long long int node)
{
    vis[node] = 1;
    for (auto v : g[node])
        if (!vis[v])
        {
            dfs(v);
        }
}

bfs

    typedef pair<int, int>
        iii;
vector<vector<int>> dist;
dx[] = {1, 0, -1, 0};
dy[] = {0, 1, 0, -1};

void bfs(iii st)
{
    dist = vector<vector<int>>(n, vector<int>(m, 1e9)); // n*m
    par = vector<vector<iii>>(n, vector<iii>(m, {-1, -1}));

    dist[st.first][st.second] = 0;

    queue<iii> q;

    q.push(st)

        while (!q.empty())
    {
        iii cur = q.front();
        q.pop();

        int x = cur.first;
        int y = cur.second;

        for (int kk = 0; kk < 4; kk++)
        {
            int ndx = x + dx[kk];
            int ndy = y + dy[kk];
            if (check(ndx, ndy) && dist[ndx][ndy] > 1 + dist[x][y])
            {
                dist[ndx][ndy] = 1 + dist[x][y];
                par[ndx][ndy] = {x, y};
                q.push(make_pair(ndx, ndy));
            }
        }
    }
}

dijkstra

    vector<iii>
        g[1001];
int vis[1001];
ll dis[10001];
int n, m;

class priotize
{
public:
    bool operator()(iii &p1, iii &p2)
    {
        return p1.second > p2.second;
    }
};

void dijkstra(int sc)
{
    for (int i = 1; i <= n; i++)
    {
        dis[i] = 1e18;
        vis[i] = 0;
    }

    dis[sc] = 0;
    priority_queue<iii, vector<iii>, priotize> pq, temp;

    pq.push(make_pair(sc, 0));

    while (!pq.empty())
    {
        iii fs;
        fs = pq.top();
        pq.pop();

        if (vis[fs.first])
            continue;
        vis[fs.first] = 1;

        for (auto v : g[fs.first])
        {
            int neigh = v.first;
            int wt = v.second;

            if (dis[neigh] > dis[fs.first] + wt)
            {
                dis[neigh] = dis[fs.first] + wt;
                pq.push(make_pair(neigh, dis[neigh]));
            }
        }

        /* temp=pq;

         while(!temp.empty())
         {
             iii fs;
             fs=temp.top();
             cout<<fs.first<<" "<<fs.second<<"  ";
             temp.pop();
         }
         cout<<endl;
         */
    }
}

Union set

    ll n,
    m, q;
vector<vector<int>> v;
vector<int> par;
vector<int> ran;
int find(int x)
{
    if (par[x] == x)
        return (par[x]);
    else
        par[x] = find(par[x]);

    return (par[x]);
}

inline void merge(int x, int y)
{
    int xx, yy;
    xx = find(x);
    yy = find(y);
    if (xx != yy)
    {
        if (ran[xx] > ran[yy])
        {
            par[yy] = xx;
            ran[xx] += ran[yy];
        }
        else
        {
            par[xx] = yy;
            ran[yy] += ran[xx];
        }
    }
}

"gcc pragma  sunit"

#undef _GLIBCXX_DEBUG                // disable run-time bound checking, etc
#pragma GCC optimize("Ofast,inline") // Ofast = O3,fast-math,allow-store-data-races,no-protect-parens

#pragma GCC target("bmi,bmi2,lzcnt,popcnt")                           // bit manipulation
#pragma GCC target("movbe")                                           // byte swap
#pragma GCC target("aes,pclmul,rdrnd")                                // encryption
#pragma GCC target("avx,avx2,f16c,fma,sse3,ssse3,sse4,sse4.1,sse4.2") // SIMD

    // temp
    "sunit"

#undef _GLIBCXX_DEBUG                // disable run-time bound checking, etc
#pragma GCC optimize("Ofast,inline") // Ofast = O3,fast-math,allow-store-data-races,no-protect-parens
#pragma GCC optimization("unroll-loops")
#pragma GCC target("bmi,bmi2,lzcnt,popcnt") // bit manipulation
// #pragma GCC target("movbe")                                      // byte swap
#pragma GCC target("aes,pclmul,rdrnd")                                // encryption
#pragma GCC target("avx,avx2,f16c,fma,sse3,ssse3,sse4,sse4.1,sse4.2") // SIMD
    // #pragma once

    "parallel recursion"
