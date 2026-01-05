#include <bits/stdc++.h>
using namespace std;

#define MAX 1000006
#define nline "\n"
#define ll long long int
#define pb push_back
#define dbg(args...) do { cerr << #args << " : "; halum(args); } while(0)
void halum() { cerr << endl; }
template <typename T, typename... Rest>
void halum(T arg, const Rest&... rest) { cerr << arg << ' '; halum(rest...); }

ll gcd(ll a, ll b) { return std::gcd(a, b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    
    freopen("Output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;

        vector<ll> f(n + 1, 0);
        for(ll i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            f[x]++;
        }

        ll ans = 0;
        
        for(ll i = 0; i <= n; i++) {
            if(f[i] >= i) ans += f[i] - i;
            else ans += f[i];
        }

        cout << ans << nline;
    }

    return 0;
}
