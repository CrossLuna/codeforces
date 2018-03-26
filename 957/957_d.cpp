#include <iostream>
#include <string>
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
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <bits/stdc++.h>

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i=0; i<(n); ++i)
#define pb push_back

const int dr [] = {-1, -1,  0,  1,  1,  1,  0, -1};
const int dc [] = {0 ,  1,  1,  1,  0, -1, -1, -1};
// (-1, 0) (-1, 1) (0, 1) (1, 1) (1, 0) (1, -1) (0, -1) (-1, -1)
// from left, clockwise

using namespace std;


int main() {
    std::ios::sync_with_stdio(false);
    //===============
    int N;
    cin >> N;
    vector<int> m(N);
    REP(i, N) {
        cin >> m[i];
    }
    vector<int> t(N);
    t[0] = 1;
    FOR(i, 1, N) {
        t[i] = max(t[i-1], m[i] + 1);
    }

    for(int i = N-2; i>=0; --i) {
        t[i] = max(t[i], t[i+1] - 1);
    }
    long long ans = 0;

    REP(i, N) {
        ans += t[i] - m[i] - 1;
    }
    cout << ans << endl;
}