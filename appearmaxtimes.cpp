//approach4-cannot use negation technique ,instead of negation add the value n.
//this solution is not valid for the elements which are not in range of 1 to n and if the given array is read only.
//tc-O(n)
//sc-O(1)

#include<iostream>
using namespace std;

int maxtimeoccurence(int arr[],int n){
    int maxi=0;
    int maxindex;
    for(int i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }

    for(int i=0;i<n;i++){
        if(arr[i]/n > maxi){
            maxi=arr[i]/n;
            maxindex=i;
        }
    }
    return maxindex;
}

int main(){
    int n;
    
    cout<<"enter size of array";
    cin>>n;
    
    int arr[n];
    cout<<"enter array";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   cout<<"max number of times is"<<maxtimeoccurence(arr,n);
}