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

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        string s;
        cin >> s;

        if (n == 2)
        {
            ll val = (s[0] - '0') * 10 + (s[1] - '0');
            cout << val << nline;
            continue;
        }

        ll ans = LLONG_MAX;

        for (ll i = 1; i < n; i++)
        {
            vector<ll> a;

            for (ll j = 0; j < n; j++)
            {
                if (j + 1 == i) continue;
                
                else if (j == i) a.pb((s[j - 1] - '0') * 10 + (s[j] - '0'));
                
                else a.pb(s[j] - '0');
            }

            ll cur = 0;

            for (ll v : a)
            {
                if (v == 0)
                {
                    cur = 0;
                    break;
                }
                else if (v == 1) continue;
                
                else cur += v;
            }

            bool all_one = true;

            for (ll v : a)
            {
                if (v != 1)
                {
                    all_one = false;
                    break;
                }
            }

            if (all_one)
            {
                ans = min(ans, 1LL);
                continue;
            }

            ans = min(ans, cur);
        }

        cout << ans << nline;
    }

    return 0;
}
