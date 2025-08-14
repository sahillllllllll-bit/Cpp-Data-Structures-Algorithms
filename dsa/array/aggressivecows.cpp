/*

Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1 ... xN (0 <= xi <= 1,000,000,000).

His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?

Input
t – the number of test cases, then t test cases follows.
* Line 1: Two space-separated integers: N and C
* Lines 2..N+1: Line i+1 contains an integer stall location, xi

Output
For each test case output one integer: the largest minimum distance.

*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isposs(vector<int> &pos, int n, int c, int mid)
{
    int cows = 1, lastposi = pos[0];
    for (int i = 1; i < n; i++)
    {
        if (pos[i] - lastposi >= mid)
        {
            cows++;
            lastposi = pos[i];
        }
        else
        {
            return true;
        }
    }

    return false;
}

int mindistance(vector<int> &pos, int n, int c)
{
    sort(pos.begin(), pos.end());
    int st = 1, end = pos[n - 1] - pos[1], ans = -1;
    while (st <= end)
    {
        int mid = st = (end - st) / 2;
        if (isposs(pos, n, c, mid))
        {

            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int n, c;
    cout << "Enter the number of stalls and cows ";
    cin >> n >> c;
    vector<int> position;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        position.push_back(val);
    }

    int answer = mindistance(position, n, c);
    cout << answer << endl;
}