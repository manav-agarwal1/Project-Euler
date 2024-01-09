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


void helper(){
    int res = 0;
    int vec[3] = {3, 5, 15};
    size_t n = sizeof(vec)/sizeof(vec[0]);
    for (size_t i = 0; i < n; i++) {
        for (int j = vec[i]; j < 1000; j+=vec[i]) {
            if (vec[i] != 15)
                res += j;
            else
                res -= j;
        }
    }
    cout << res << '\n';
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
