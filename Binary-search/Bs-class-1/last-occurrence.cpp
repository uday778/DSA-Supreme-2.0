#include <iostream>
using namespace std;
int lastoccurrence(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int answer = -1;
    while (start <= end)
    {
        // int mid = (start+end)/2;
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            answer = mid;
            start= mid+1;
        };
        if (arr[mid] < target)
        {
            start = mid + 1;
        };
         if (arr[mid] > target)
        {
            end = mid - 1;
        }
    }
    return answer;
}
int main()
{
    int arr[] = {10, 20, 30, 30, 30, 30, 70, 80, 90};
    int n = 9;
    int target = 30;

    int ansindex = lastoccurrence(arr, n, target);
    if (ansindex == -1)
    {
        cout << "element not found " << endl;
    }
    else
    {
        cout << "last ocuurenece of a number :" << ansindex << endl;
    }

    return 0;
}