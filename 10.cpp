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
Basic manipulation gives abc = 1000(500-c)c
and as 0<a<b<c, so c < 500, hence we have  about 10^8 = 500*500*500 runtime brute force algo.
To do better:
We could direclty go with Euclidean Parametrization of pythagorean triplets.
It is given unique, so (m^2-n^2, 2mn, m^2+n^2), m,n need to be coprime and both not odd
a+b+c = 2m(m+n)
500 = m(m+n)
2^2.5^3 = m(m+n)

search space limitation
a can be max 332, as 333+334+335 >1000
c can be min 335, since 332+333+334 < 1000
c can be max 997

In triangle length of one side must be less than the other, so, c < a+b, So, 2c < a+b+c => c < 500;
Smallest c will be at max a and b.
If we have a=b, then c/sqrt(2) = a=b
So, solving this we have c = 414.2..
So, take c = 413

Make c outer loop to save repeated calculations
*/

// void helper (){
//     for (int a = 1; a <= 332; a++) {
//         for (int c = 335; c <= 997; c++) {
//             int b = 1000 - a - c;
//             if (a*a + b*b == c*c) {
//                 cout << a*b*c << '\n';
//                 break;
//             }
//         }
//     }
// }

// void helper (){
//     for (int a = 1; a <= 332; a++) {
//         for (int c = 413; c < 500; c++) {
//             int b = 1000 - a - c;
//             if (a*a + b*b == c*c) {
//                 cout << a*b*c << '\n';
//                 break;
//             }
//         }
//     }
// }

void helper (){
    for (int c = 413, temp; c < 500; c++) {
        temp = c*c;
        for (int a = 1; a <= 332; a++) {
            int b = 1000 - a - c;
            if (a*a + b*b == temp) {
                cout << a*b*c << '\n';
                break;
            }
        }
    }
}

int32_t main (){
    ios_base::sync_with_stdio(0);
    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);
    cin.tie(nullptr);
    // cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while(t--)
    helper();
    return 0;
}
