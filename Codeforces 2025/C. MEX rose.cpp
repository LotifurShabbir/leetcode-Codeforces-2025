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
    while(t--) {
        int n, mex; cin >> n >> mex;
        std::vector<int>v(n) ;
        
        for(auto & x: v) cin >> x;
        
        map<int, int>mp;
        
        for(int i = 0; i < n; i++) {
            mp[v[i]]++;
        }
        
        int first_cnt = 0;
        
        for(auto &x : mp) {
            if(x.first < mex) first_cnt++;
        }
        int temp1 = mex - first_cnt;
        
        int sec_cnt = 0;
        for(int i = 0; i < n; i++){
            if(v[i] == mex) sec_cnt++;
        }
        cout << max(temp1, sec_cnt) << nline;
    }


    return 0;
}
