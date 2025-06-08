#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include "string.hpp"
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define N 1000005
#define MOD 1000000007

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("/Users/nitinkumar/Desktop/strings/input.txt", "r", stdin);
        freopen("/Users/nitinkumar/Desktop/strings/output.txt", "w", stdout);
    #endif

    mystl::string s = "Nitin";
    
    s+= " Kumar ";

    cout << s << endl;

    return 0;
}