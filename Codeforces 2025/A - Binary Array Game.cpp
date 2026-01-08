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
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (a[0] == 1 || a[n - 1] == 1)
            cout << "Alice" << nline;
        else
            cout << "Bob" << nline;
    }

    return 0;
}
