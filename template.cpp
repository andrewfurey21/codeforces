//─────────▄──────────────▄──────────────────────────────────────────────
// ────────▌▒█───────────▄▀▒▌────────────────────────────────────────────────
// ────────▌▒▒█────────▄▀▒▒▒▐────────────────────────────────────────────────
// ───────▐▄▀▒▒▀▀▀▀▄▄▄▀▒▒▒▒▒▐────────────▄▄▄▄─▄▄▄▄────▄▄▄▄─▄▄▄▄─▄▄▄▄─▄───────
// ─────▄▄▀▒░▒▒▒▒▒▒▒▒▒█▒▒▄█▒▐────────────█▄▄▄─█──█────█────█──█─█──█─█───────
// ───▄▀▒▒▒░░░▒▒▒░░░▒▒▒▀██▀▒▌──────── ───▄▄▄█─█▄▄█────█▄▄▄─█▄▄█─█▄▄█─█▄▄▄────
// ──▐▒▒▒▄▄▒▒▒▒░░░▒▒▒▒▒▒▒▀▄▒▒▌───────────────────────────────────────────────
// ──▌░░▌█▀▒▒▒▒▒▄▀█▄▒▒▒▒▒▒▒█▒▐───────────────────────────────────────────────
// ─▐░░░▒▒▒▒▒▒▒▒▌██▀▒▒░░░▒▒▒▀▄▌──────────────────────────────────────
// ─▌░▒▄██▄▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒▌──────────────────────────────────────────────
// ▀▒▀▐▄█▄█▌▄░▀▒▒░░░░░░░░░░▒▒▒▐───────────────────────────────
// ▐▒▒▐▀▐▀▒░▄▄▒▄▒▒▒▒▒▒░▒░▒░▒▒▒▒▌──────────────────────────────────────────
// ▐▒▒▒▀▀▄▄▒▒▒▄▒▒▒▒▒▒▒▒░▒░▒░▒▒▐───────────▄─────▄─▄▄▄▄─▄─────▄───────────────
// ─▌▒▒▒▒▒▒▀▀▀▒▒▒▒▒▒░▒░▒░▒░▒▒▒▌───────────▀▄─█─▄▀─█──█─▀▄─█─▄▀───────────────
// ─▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒░▒░▒▒▄▒▒▐─────────────▀▄▀▄▀──█▄▄█──▀▄▀▄▀────────────────
// ──▀▄▒▒▒▒▒▒▒▒▒▒▒░▒░▒░▒▄▒▒▒▒▌───────────────────────────────────────────────
// ────▀▄▒▒▒▒▒▒▒▒▒▒▄▄▄▀▒▒▒▒▄▀────────────────────────────────────────────────
// ──────▀▄▄▄▄▄▄▀▀▀▒▒▒▒▒▄▄▀────────────────────────────────────
// ─────────▒▒▒▒▒▒▒▒▒▒▀▀─────────────────────────────────────────────────────
// ─────────────────────────────────────────────────────────────────
// ─────────▄───▄─▄──▄─▄▄▄▄─▄──▄────▄▄▄▄─▄▄▄▄─▄▄▄──▄▄▄───────────────────────
// ─────────█▀▄▀█─█──█─█────█▄▄█────█────█──█─█──█─█▄▄───────────────────────
// ─────────█───█─█▄▄█─█▄▄▄─█──█────█▄▄▄─█▄▄█─█▄▄▀─█▄▄───────────────────────
// ──────────────────────────────────────────────────────────────────────────

#include <bits/stdc++.h> 

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<vi> vvi;  

typedef unordered_map<int, int> um;

#ifndef ONLINE_JUDGE
#define debug(x) \
    { cout << #x << ": " << x << " "; }
#define debugn(x) \
    { cout << #x << ": " << x << "\n"; }
#else
#define debug(x)
#define debugn(x)
#endif

#define google(tc) \
    { cout << "Case #" << tc << ": "; }

#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

double EPS = 1e-9;
int INF = 1000000005;
unsigned int INFU = 2000000005;
long long INFF = 1000000000000000005ll;
double PI = acos(-1);

#define nl "\n"

#define YES cout << "YES" << nl
#define NO cout << "NO" << nl

#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORE(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))

#define FOREACH(a, b) for (auto&(a) : (b))

#define REP(i, n) FOR(i, 0, n)
#define REPE(i, n) FORE(i, 1, n)

#define mp make_pair
#define eb emplace_back

#define All(v) v.begin(), v.end()
#define AllA(arr, sz) arr, arr + sz

#define SORTA(arr, sz) sort(AllA(arr, sz))
#define SORT(v) sort(All(v))

#define REV(v) reverse(All(v))
#define REVA(arr, sz) reverse(AllA(arr, sz))

#define TC(t) while (t--)

string uppercase(string s) {
    int n = s.size();
    REP(i, n)
    if (s[i] >= 'a' && s[i] <= 'z')
        s[i] = s[i] - 'a' + 'A';
    return s;
}

string lowercase(string s) {
    int n = s.size();
    REP(i, n)
    if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] = s[i] - 'A' + 'a';
    return s;
}

void OPEN(string s) {
#ifndef TESTING
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
#endif
}

int sumUpTo(double n) {
    return 0.5f * n * n + 0.5f * n;
}

vector<int> sieve(15151, true);
void calcsieve(vector<int>& s) {
    s[0] = s[1] = false;
    for (int i = 2; i * i <= s.size(); i++) {
        if (s[i]) {
            for (int j = i * i; j <= s.size(); j += i) {
                s[j] = false;
            }
        }
    }
}

int binsearch(int target, vi& vec) {
    int mid = (vec.size()) / 2;
    int left = 0;
    int right = vec.size() - 1;
    while (left <= right) {
        if (target == vec[mid]) {
            return mid;
        } else if (target > vec[mid]) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
        mid = (right + left) / 2;
    }
    return -1;
}

/* 
 * stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 * keep it simple
 * MAKE SURE to read in all input before returning
 */

int solve() {

    return 0;
}

int main() {
    speed;
    int t;
    cin >> t;
    // t=1;
    TC(t) solve();

    return 0;
}


