#include <iostream>
using namespace std;


int digitalRoot(int n) {
   
    if (n < 10)
        return n;
    
  
    int sum = 0;
    while (n > 0) {
        sum += n % 10;  // Get the last digit and add to sum
        n /= 10;        // Remove last digit
    }

  
    return digitalRoot(sum);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Digital Root: " << digitalRoot(n) << endl;
    return 0;
}
