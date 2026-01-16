#include <bits/stdc++.h>
using namespace std;

#define nline "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;

    reverse(s.begin(), s.end());

    if (s == t) cout << "YES" << nline;
    else cout << "NO" << nline;

    return 0;
}
