/*
ID: manavag2
TASK: ride
LANG: C++
*/
using namespace std;
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <functional>
#include <numeric>
#include <utility>
#include <climits>
#include <chrono>
#include <cmath>
#include <cassert>
#include <fstream>
#include <iomanip>
template <typename T>
inline T gcd(T a, T b) { while (b != 0) swap(b, a %= b); return a; }

/*
As said earlier if we know the bound of n and it is practical enough to allocate an array then we can use Sieve of Erastathanos.

Obvious improvements here are checkout linear sieve and then we can also see segmented sieve.
*/

void helper (){
    int n = 2'000'000;
    int64_t res = 0ll;
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    int del = 1;
    for (int i = 2; i*i <= n; i+=del) {
        if (i == 3) {
            del++;
        }
        if (is_prime[i]) {
            for (int j = i*i; j <= n; j+=i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i < n; i++) {
        res += is_prime[i] ? 0ll+i : 0ll;
    }
    cout << res << '\n';
}

int32_t main (){
    ios_base::sync_with_stdio(0);
    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while(t--)
    helper();
    return 0;
}
