#include<iostream>
using namespace std;

// making a function to find the key in the array
int linearsearch(int arr[], int n, int key){
    for (int i; i < n; i++)
    {
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
    
}

int main(){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;

    // cout<<linearsearch(arr,n,key)<<endl;
    cout<<linearsearch(arr,n,key)<<endl;
    
}
