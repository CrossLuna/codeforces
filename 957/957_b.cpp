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
    int N, M;
    cin >> N >> M;
    vector<string> mm;
    REP(i, N) {
        string str;
        cin >> str;
        mm.push_back(str);
    }

    vector<int> cc(N, 0);
    set<vector<int>> ss;
    REP(c, M) {
        vector<int> vi;
        REP(r, N) {
            if(mm[r][c] == '#') vi.pb(r);
        }

        if(ss.find(vi) != ss.end()) { // found

        }
        else {
            ss.insert(vi);
            for(auto i: vi) {
                ++cc[i];
            }
        }
    }
    for(auto n: cc) {
        if(n > 1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    
}