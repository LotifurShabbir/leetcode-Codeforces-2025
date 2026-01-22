#include <bits/stdc++.h>
using namespace std;

#define MAX 1000006
#define nline "\n"
#define ll long long int
#define pb push_back
#define dbg(args...) do { cerr << #args << " : "; halum(args); } while(0)

void halum() { cerr << endl; }

template <typename T, typename... Rest>
void halum(T arg, const Rest&... rest)
{
    cerr << arg << ' ';
    halum(rest...);
}

ll gcd(ll a, ll b) { return std::gcd(a, b); } // C++17 std::gcd
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main()
{
    #ifndef ONLINE_JUDGE
    // For getting input from input.txt file
    freopen("Input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("Output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int mn = INT_MAX;
        vector<int> v2;

        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;

            vector<int> v(m);
            for (int j = 0; j < m; j++)
                cin >> v[j];

            int mn1 = *min_element(v.begin(), v.end());
            mn = min(mn, mn1);

            auto it = find(v.begin(), v.end(), mn1);
            v.erase(it);

            v2.pb(*min_element(v.begin(), v.end()));
        }

        ll sum = 0;
        for (int x : v2)
            sum += x;

        ll ans = mn + sum - *min_element(v2.begin(), v2.end());
        cout << ans << nline;
    }

    return 0;
}
