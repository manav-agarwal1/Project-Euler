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
A sieve can work. It is bad for unknown upper bound.
Though we can implement in 6n-1 and 6n+1 way if we have a good primality test
*/

void helper (){
    int n = 1000000;
    int k = 10001;
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
    int count = 0;
    for (int i = 0; i <= n; i++) {
        if (is_prime[i]) {
            count++;
            if (count == k) {
                cout << i << '\n';
            }
        }
    }
    cout << count << '\n';
}
// void helper_() {
//     int n = 100001;
//     vector<int64_t> prime;
//     prime.push_back(2ll);
//     prime.push_back(3ll);
//     for (int i = 1; prime.size() < n; i++) {
//         int64_t temp = 6ll*i;
//         if (is_prime(temp - 1ll))){
//             prime.push_back(temp - 1ll);
//         }
//         if (is_prime(temp + 1ll))){
//             prime.push_back(temp + 1ll);
//         }
//     }
//     cout << prime[n-1] << '\n';
// }

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
