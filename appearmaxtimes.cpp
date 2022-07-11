//given a array of n numbers we have to find the number which appears max time in the array

//approach1-brute force
//tc-O(n^2)
//sc-O(1)

#include<iostream>
using namespace std;

int maxtimeoccurence(int arr[],int n){
    int maxi=-1;
    for(int i=0;i<n;i++){
        int counter=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
                counter++;
        }
        maxi=max(maxi,counter);
    }
    return maxi;
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

//approach2-sort the array then count
//tc-O(logn)
//sc-O(1)

#include<iostream>
#include<algorithm>
using namespace std;

int maxtimeoccurence(int arr[],int n){
    int maxi=-1;
    int counter=1;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            counter++;
        }
        else{
            cout<<i<<" "<<counter<<" "<<maxi<<endl;
            maxi=max(counter,maxi);
            counter=1;
        }
    }
    return maxi;
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

    sort(arr,arr+n);

   cout<<"max number of times is"<<maxtimeoccurence(arr,n);
}

//approach3-using hashmap
//tc->O(n)
//sc->O(n)

#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

int maxtimeoccurence(int arr[],int n, unordered_map<int,int> mp){
    
    int maxi=0;

    for(int i=0;i<mp.size();i++){
        maxi=max(maxi,mp[i]);
    }
    return maxi;
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

    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

   cout<<"max number of times is"<<maxtimeoccurence(arr,n,mp);
}

//approach4-cannot use negation technique ,instead of negation add the value n.


