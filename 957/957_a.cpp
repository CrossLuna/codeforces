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
    string s;
    cin >> s;
    vector<int> ii;
    REP(i, N-1) {
        if(s[i] == s[i+1] && s[i] != '?') {
            cout << "No" << endl;
            return 0;
        }
    }
    REP(i, N-1) {
        if(s[i] == s[i+1] && s[i] == '?') {
            cout << "Yes" << endl;
            return 0;
        }
    }
    REP(i, N) {
        if(s[i] == '?') {
            if(i == 0 || i == N-1) {
                cout << "Yes" << endl;
                return 0;
            }
            else {
                ii.push_back(i);
            }
        }
    }
    for(auto idx: ii) {
        if(s[idx-1] == s[idx+1]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}