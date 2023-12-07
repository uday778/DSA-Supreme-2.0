#include<iostream>
using namespace std;
int getUnique(int arr[], int n) {
  int ans = 0;
  for(int i=0; i<n; i++) {
    ans = ans^arr[i];
  }
  return ans;
}
int main()
{
    int arr[]={2,12,2,12,11,14,1,4};
    int n =7;
    int finalans=getunique(arr,n);
    cout<<finalans<<endl;
    return 0;
}