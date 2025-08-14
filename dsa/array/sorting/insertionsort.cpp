#include <iostream>

using namespace std;

void sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int pre = i - 1;
        while (pre >= 0 && arr[pre] > curr)
        {
            arr[pre + 1] = arr[pre];
            pre--;
        }
        arr[pre + 1] = curr;
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    cout << "enter the size of the array :";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, n);
    print(arr, n);
}