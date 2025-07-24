#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int p = 31; 
const int MOD = 1e9 + 7;

const int N = 1e4 + 5;

// Rabin-Karp substring search algorithm
vector<int> rabin_karp(const string& s, const string& t) {
    
    int m = s.size(), n = t.size();
    vector<int> matches;
    if(m > n) return matches;

    // pre compute powers of base
    vector<long long> p_pow(N); 
    p_pow[0] = 1; 
    for (int i = 1; i < N; i++) 
    p_pow[i] = (p_pow[i - 1] * p) % MOD;

    // pre compute prefix hash function
    vector<long long> hash(n, 0); 
    hash[0] = (t[0] - 'a' + 1);
    for (int i = 1; i < n; i++)
    hash[i] = (hash[i-1] + (t[i] - 'a' + 1) * p_pow[i]) % MOD; 

    long long hash_pattern = 0; 
    for (int i = 0; i <m; i++) 
    hash_pattern = (hash_pattern + (s[i] - 'a' + 1) * p_pow[i]) % MOD; 

    if (hash[m-1] == hash_pattern)
    matches.push_back(0);
    
    for (int i = 0; i + m < n; i++) {
        long long cur_hash = (hash[i + m] + MOD - hash[i]) % MOD;
        if (cur_hash == (hash_pattern * p_pow[i+1]) % MOD)
            matches.push_back(i+1);
    }

    return matches;
}

int main() {

    string pattern ="abc", text = "abcdeabsabcdefabsabc";

    vector<int> result = rabin_karp(pattern, text);

    if (result.empty()) {
        cout << "Pattern not found in the text." << endl;
    } else {
        cout << "Pattern found at positions: ";
        for (int idx : result) {
            cout << idx << " ";
        }
        cout << endl;
    }

    return 0;
}
