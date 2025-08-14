


                                   //                                  question =>  write a  program to check whether the number is armstrong or not         

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    int sum = 0;
    int temp;
    int digits = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    for (int n = num; n > 0; n /= 10) {
        digits++;
    }


    for (int n = num; n > 0; n /= 10) {
        int digit = n % 10;
        sum += pow(digit, digits);
    }


    if (sum == temp) {
        cout << " not Armstrong" << endl;
    } else {
        cout << " Armstrong" << endl;
    }

    return 0;
}
