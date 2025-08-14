#include <iostream>
#include <vector>
using namespace std;
int pivet(vector<int> &arr, int st, int end)
{
    int idx = st - 1;
    int pivot = arr[end];

    for (int j = st; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}
void quicksort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int pidx = pivet(arr, st, end);
        quicksort(arr, st, pidx - 1);
        quicksort(arr, pidx + 1, end);
    }
}
int main()
{
    vector<int> arr = {1,5,6,8,1,23,8,25,358,8587,2,452,5,4};
    quicksort(arr, 0, arr.size() - 1);

    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}
