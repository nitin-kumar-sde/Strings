#include <iostream>
#include <vector>
using namespace std;


// KMP Search function
vector<int> KMP(const string& text, const string& pattern) {
    int n = text.size();
    int m = pattern.size();
    
    int n = pattern.size();
    vector<int> pi(n, 0);
    for (int i = 1; i < n; i++) {
        int j = pi[i - 1];
        while (j > 0 && pattern[i] != pattern[j])
        j = pi[j - 1];
        
        if (pattern[i] == pattern[j])
        j++;
        pi[i] = j;
    }
    vector<int> result;

    int j = 0; 
    for (int i = 0; i < n; i++) { 

        while (j > 0 && text[i] != pattern[j])
        j = pi[j - 1];

        if (text[i] == pattern[j]) j++; // char matched
        if (j == m) {
            result.push_back(i - m + 1);
            j = pi[j - 1];
        }
    }
    return result;
}


int main() {
    string text = "ababcabcabababd";
    string pattern = "ababd";

    vector<int> matches = KMP(text, pattern);

    for (int idx : matches)
        cout << "Pattern found at index: " << idx << endl;

    return 0;
}
