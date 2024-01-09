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
It is evident that the solution will be greatest power of prime factors of all the numbers from 1 to n

But instead of indulging in any complex lets build solution like below. It is very fast.

Outer loop runs = n times
Inner loop:
    When i is prime = i-1 times
    when i is not prime = a_i(i-1)
        where a_i=a_i if (i^a_i) < n
        else it is 0 
*/

void helper (){
    int64_t n = 120;
    int64_t res = 1ll;
    int count = 1;
    for (int64_t i = 2; i <= n; i++) {
        int64_t prev = res;
        while (res % i) {
            count++;
            res += prev;
        }
        cout << i << " = " << res << ' ' << count << '\n';
    }
    cout << res << ' ' << count << '\n';
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
