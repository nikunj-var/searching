//BINARYSEARCH USING ITERATION

#include<iostream>
using namespace std;

void binarysearch(int arr[],int n,int target){
    
    int s=0,e=n-1;

    while(s <= e){
        
        int mid = s+(e-s)/2;
        
        if(arr[mid]==target){
            cout<<"element found at index "<<mid;
            return;
        }
            
        else if(arr[mid]>target)
            e=mid-1;  
        
        else
            s=mid+1;
    } 

      cout<<"element not found";
}


int main(){
    int n,target;
    
    cout<<"enter size of array";
    cin>>n;
    
    int arr[n];
    cout<<"enter sorted array";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter value whch you want to search";
    cin>>target;
    
    binarysearch(arr,n,target);
}



//BINARYSEARCH USING RECURSION

#include<iostream>
using namespace std;

void binarysearch(int arr[],int s,int e,int target){
    
    if(s > e){
        cout<<"element not found";
         return;
    }
       
        int mid = s+(e-s)/2;
        
        if(arr[mid]==target){
            cout<<"element found at index "<<mid;
            return;
        }
            
        else if(arr[mid]>target)
            binarysearch(arr,s,mid-1,target);
        
        else
            binarysearch(arr,mid+1,e,target);

      
}

int main(){
    int n,target;
    
    cout<<"enter size of array";
    cin>>n;
    
    int arr[n];
    cout<<"enter sorted array";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter value whch you want to search";
    cin>>target;
    
    binarysearch(arr,0,n-1,target);
}
