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
Any Palindrome with even digits must be divisible by 11. (Hint: 11 divisibility rule)

Any n digit number multiplication give result of digit 2n-1 or 2n and if we want the largest palindrome then we are looking for 2n digits, so divisible by 11.

when n is even:
    (9 n/2 times)(0 n times)(9 n/2 times)
when n is odd:
    well we have to check but we can avoid checking for small numbers
*/
bool is_even_palindrome (string a) {
    int n = a.size();
    if (n&1)
        return false;
    int i = 0, j = n-1;
    for (; i < j && a[i] == a[j]; i++, j--);
    return i >= j;
}

void helper(int n){
    
    if (n&1) {
        int64_t hi = pow(10, n)-1ll;
        int64_t lo = pow(10, n-1);
        lo = hi - pow(10, (n/2)+1); // avoid small numbers
        cout << lo << ' ' << hi << endl;
        int64_t a = 0;
        int64_t b = 0;
        int64_t res = 0ll;
        for (int64_t i = hi; i >= lo; i--) {
            if (res >= i*hi) {
                // no point going ahead
                break;
            }
            for (int64_t j = i; j <= hi; j++) {
                int64_t temp = j*i*1ll;
                if((res < temp) && (res % 11 == 0) && is_even_palindrome(to_string(temp))) {
                    res = temp;
                    a = i;
                    b = j;
                    // cout << temp << " = " << a << " x " << b << '\n';
                }
            }
        }
        cout << res << " = " << a << " x " << b << '\n';
        cout << "-----------------\n";
    }
    else {
        string res = "";
        res = string(n/2, '9');
        res = res + string(n, '0') + res;
        cout << res << '\n';
        cout << "-----------------\n";
    }

}

int32_t main(){
    ios_base::sync_with_stdio(0);
    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int t = 8;
    // cin >> t;
    while(t > 1){
        cout << t << '\n';
        helper(t);
        t--;
    }
    return 0;
}
