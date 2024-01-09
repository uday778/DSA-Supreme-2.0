#include <iostream>
using namespace std;

int findlargest(int arr[], int size)
{
    int largest = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int main()
{
    int arr[] = {
        10,
        20,
        30,
        40,
        50,
    };
    int size = 5;
    cout << findlargest(arr, size) << endl;
    return 0;
}