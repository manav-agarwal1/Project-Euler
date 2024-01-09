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
    int a_i_m_2 = 1;
    int a_i_m_1 = 2;
    int a_i = a_i_m_1 + a_i_m_2;
    int res = a_i_m_1;
    for (; a_i < 4'000'000; a_i = a_i_m_1 + a_i_m_2) {
        if ((a_i&1) == 0) {
            res += a_i;
        }
        a_i_m_2 = a_i_m_1;
        a_i_m_1 = a_i;
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
