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
There can be atmost one prime factor greater than sqrt(n).
All primes are of the form 2, 3 or 6n-1 or 6n+1
6n-1 + 2 = 6n+1
*/
void helper(){
    int64_t n = 600851475143;
    int64_t pf = 0ll;
    while (n % 2 == 0ll) {
        pf = 2ll;
        n /= 2ll;
    }
    while (n % 3 == 0ll) {
        pf = 3ll;
        n /= 3ll;
    }

    // rest of the primes are off the form
    for (int64_t i = 5ll; i*i <= n; i+=6ll) {
        while (n%i == 0ll) {
            pf = i;
            n /= i;
        }
        i += 2ll;
        while (n%i == 0ll) {
            pf = i;
            n /= i;
        }
        i -= 2ll; 
    }
    if (n > 4) {
        pf = n;
    }
    cout << pf << '\n';
}

int32_t main(){
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
