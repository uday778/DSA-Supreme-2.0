#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void printarray(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void rowwiseprint(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


void colwiseprint(int arr[][3],int row,int col){
    for(int j=0;j<col;j++){
        for(int i=0;i<row;i++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
bool findtarget(int arr[][3],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return true;
            }
           
        }
    } 
      return false;
           
}
int findmax(int arr[][3],int row,int col){
    int maxans= INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxans){
                maxans=arr[i][j];
            }

        }
    }
    return maxans;
}
int findmin(int arr[][3],int row,int col){
    int minans= INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<minans){
                minans=arr[i][j];
            }

        }
    }
    return minans;
}
int rowwisesum(int arr[][3],int row,int col){
    
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        };
        cout<<sum<<endl;
    };
    
}
int colwisesum(int arr[][3],int row,int col){
    
    for(int j=0;j<col;j++){
        int sum=0;
        for(int i=0;i<row;i++){
            sum=sum+arr[i][j];
        };
        cout<<sum<<endl;
    };
    
}

int diagonalwisesum(int arr[][3],int row,int col){
    int sum = 0;
    for(int i=0;i<row;i++){
        sum=sum+arr[i][i];
    }
    cout<<sum<<endl;
}


int main()
{
    //initialization
    // int arr[3][3]={
    //     {10,20,30},
    //     {40,50,60},
    //     {70,80,90}
    // };

    //to initialize 2d array atleast we need no.of columns 

    int arr[3][4]={
        {10,20,30,50},
        {40,50,60,50},
        {70,80,90,50}
    };
    int row=3;
    int col=4; 
    int target=70;
    printarray(arr,row,col);
    rowwiseprint(arr,row,col);
    colwiseprint(arr,row,col);
    cout<<"found or not:"<<findtarget(arr,row,col,target)<<endl;
    cout<<findmax(arr,row,col)<<" "<< endl;
    cout<<findmin(arr,row,col)<<" "<< endl;

    rowwisesum(arr,row,col);
    colwisesum(arr,row,col);
    diagonalwisesum(arr,row,col);
    

    return 0;
}