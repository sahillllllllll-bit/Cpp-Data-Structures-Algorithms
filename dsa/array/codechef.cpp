#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isLexicographicallyLarger(const string &s1, const string &s2) {
    return s1 > s2;
}

void findRestaurantName(int N, const string &A) {
    string B = A;
    
    // Try to generate a lexicographically larger name
    for (int i = N - 1; i >= 0; --i) {
        if (B[i] != 'z') {
            B[i]++;
            if (isLexicographicallyLarger(B, A) && isLexicographicallyLarger(string(B.rbegin(), B.rend()), A)) {
                cout << B << "\n";
                return;
            }
        }
    }
    
    cout << "-1\n";
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        string A;
        cin >> N >> A;
        
        findRestaurantName(N, A);
    }
    
    return 0;
}