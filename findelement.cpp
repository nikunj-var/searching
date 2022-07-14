//IN THE ARRAY ALL ELEMENTS APPEAR TWICE OR FOUR TIMES ,EXCEPT ONE ELEMENT WHICH OCCUR THREE TIMES IN o(1)

//APPROACH-USING XOR
    //TC-O(N)
    //SC-O(1)

#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

void findelement(int arr[],int n){
    int ans=arr[0];
    for(int i=1;i<n;i++){
        ans^=arr[i];
    }
    cout<<ans;
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int n;
    int target;

    cout<<"enter size of array";
    cin>>n;
    
    int arr[n];
    cout<<"enter array";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    findelement(arr,n);
    
}