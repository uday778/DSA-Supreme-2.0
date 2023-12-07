#include<iostream>
using namespace std;
// void shiftArray(int arr[], int n) {
//   //Step 1
//   int temp = arr[n-1];

//   //step2
//   //shift -> arr[i] = arr[i-1]
//   for(int i= n-1; i>=1; i--) {
//     arr[i] = arr[i-1];
//   }

//   //step3 copy temp into 0th indecx
//   arr[0] = temp;
// }


int main()
{
     int arr[] = {10,20,30,40,50,60};
  int n= 6;

  shiftArray(arr, n);

  //printy
  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
    return 0;
}// ALTERNATE METHOD
  //Step 1
  int temp = arr[0];

  //step2
  //shift -> arr[i] = arr[i-1]
  for(int i=0; i<N-1; i++) {
    arr[i] = arr[i+1];
  }

  //step3 copy temp into 0th indecx
  arr[n-1] = temp;