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
Easy problem, tricky part is to handle division by 0.
*/

void helper (){
    string s;
    cin >> s;
    // cout << s << '\n';
    int digits = 13;
    int n = s.size();
    int i = 0;
    int j = 0;
    int64_t res = 1ll;
    for (int64_t temp = 1ll; j < n; j++) {
        // cout << s[j] << '\n';
        if (s[j] != '0') {
            temp *= (s[j]-'0')*1ll;
            if ((j-i) == digits) {
                temp /= (s[i]-'0');
                i++;
                res = max(res, temp);
            }
        }
        else {
            i = j+1;
            temp = 1ll;
            continue;
        }
    }
    cout << res << '\n';
}

int32_t main (){
    ios_base::sync_with_stdio(0);
    FILE* inputFile = freopen("8.in", "r", stdin);
    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;  // Return a non-zero value to indicate an error
    }
    // freopen("8.out", "w", stdout);
    // cin.tie(nullptr);
    // cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while(t--)
    helper();
    return 0;
}
