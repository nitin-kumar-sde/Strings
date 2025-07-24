#include <iostream>
#include <vector>
using namespace std;

// Z pattern match
vector<int> patternMatch(string pattern, string text) {
    string concat = pattern + "$" + text;
    int n = concat.size();
    vector<int> Z(n);
    int l = 0, r = 0;
    for (int i = 1; i < n; ++i) {
        if (i <= r)
            Z[i] = min(r - i + 1, Z[i - l]);
        while (i + Z[i] < n && concat[Z[i]] == concat[i + Z[i]])
            Z[i]++;
        if (i + Z[i] - 1 > r) {
            l = i;
            r = i + Z[i] - 1;
        }
    }
    int patLen = pattern.size();
    vector<int> matches;
    for (int i = patLen + 1; i < Z.size(); ++i) {
        if (Z[i] == patLen) {
            matches.push_back(i - patLen - 1);
        }
    }
    return matches;
}

int main() {
    string text = "aabcaabxaaz";
    string pattern = "aab";

    vector<int> matches = patternMatch(pattern, text);

    for(int i : matches)
    cout << i << " ";

    return 0;
}
