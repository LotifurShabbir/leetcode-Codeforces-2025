#include <bits/stdc++.h>
using namespace std;

#define MAX 1000006
#define nline "\n"
#define ll long long int
#define pb push_back
#define dbg(args...) do { cerr << #args << " : "; halum(args); } while (0)

void halum() { cerr << endl; }

template <typename T, typename... Rest>
void halum(T arg, const Rest&... rest)
{
    cerr << arg << ' ';
    halum(rest...);
}

ll gcd(ll a, ll b)
{
    return std::gcd(a, b);
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

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

    ll n, z, x, c;
    cin >> n >> z >> x >> c;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    vector<vector<ll>> dp(n, vector<ll>(3, 0));

    dp[0][0] = z * a[0];
    dp[0][1] = z * a[0] + x * a[0];
    dp[0][2] = z * a[0] + x * a[0] + c * a[0];

    for (ll i = 1; i < n; i++)
    {
        dp[i][0] = max(dp[i - 1][0], z * a[i]);
        dp[i][1] = max(dp[i - 1][1], dp[i][0] + x * a[i]);
        dp[i][2] = max(dp[i - 1][2], dp[i][1] + c * a[i]);
    }

    cout << dp[n - 1][2] << nline;

    return 0;
}
