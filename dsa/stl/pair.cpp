#include <iostream>
#include <vector>
using namespace std;
int main()
{
    pair<char, int> p = {'s', 7};
    cout << p.first << endl;
    pair<char, pair<int, int>> s = {'s', {4, 6}};
    cout << s.second.first << endl;

    // we can also make the pair in vector
    vector<pair<int, string>> k = {{3, "sahil"}, {5, "king"}};
    k.push_back({5, "hai"});         //  we have to take value in pairs then push_back
    k.emplace_back(5, "aur rahega"); // without making pair we can take the value
    for (pair<int, string> i : k)
    {
        cout << i.first << " " << i.second << endl;
    }
    // we can also write  as
    for (auto i : k)
    {
        cout << i.first << " " << i.second << endl;
    }
}