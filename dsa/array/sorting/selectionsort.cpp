#include <iostream>

using namespace std;

void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestidx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestidx])
            {
                smallestidx = j;
            }
        }
        swap(arr[i], arr[smallestidx]);
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