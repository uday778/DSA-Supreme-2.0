#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int target ){
 int start=0;
 int end=n-1;
 int mid= (start+end)/2;

 while(start<=end){
    //found
    if(arr[mid]==target){
        return mid;
    }
    else if(target>arr[mid]){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=(start+end)/2;
 }
 return -1;
}
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90};
    int n=9;
    int target =80;
    int ans=binarysearch(arr,n,target);
    if(ans==-1){
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"element found at index:"<<ans<<endl;
    }

    return 0;
}