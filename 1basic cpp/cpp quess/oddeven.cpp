 // codechef question  
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long int odd = (n + 1) / 2;  // no. of odd numbers befoire given number
        long long int even = n / 2; // no of even numbers before given numbers
        long long int ans = 2 * odd * even;  // ways to find the sum of two different pairs from 0 to given numbers 
        cout << ans << endl;
    }
    return 0;
}