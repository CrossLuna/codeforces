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
    int N, U;
    cin >> N >> U;
    double mr = -1.0;
    vector<int> v(N);
    REP(i, N) {
        int n;
        cin >> n;
        v[i] = n;
    }
    for(auto it = v.begin(); it != v.end(); ++it) {
        auto jt = upper_bound(it, v.end(), *it + U);
        if(jt-it < 3) continue;
        int Ek = *(jt-1);
        int Ej = *(it+1);
        int Ei = *(it);
        double r = (double)(Ek - Ej) / (Ek - Ei);
        mr = max(r, mr);
    }

    if(mr < 0) {
        cout << -1 << endl;
    }
    else {
        cout << setprecision(20);
        cout << mr << endl;
    }
}