#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Create a vector called cars that will store strings
 // vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
 //vector<string> cars;

 vector<string> cars(3,"lambo");

 cars.push_back("lambo");
 //cars.pop_back();
 cars.front();
 cars.back();
  cars.at(0);
  // Print vector elements
  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}
