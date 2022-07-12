//que->algorithm for finding the first element in the array which is repeated.

//approach1-brute force
//tc-O(n^2)
//sc-O(1)

// #include<iostream>
// using namespace std;

// int firstrepeated(int arr[],int n){

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j])
//                 return arr[i];
//         }
//     }
//     return -1;
// }

// int main(){
//     int n;
    
//     cout<<"enter size of array";
//     cin>>n;
    
//     int arr[n];
//     cout<<"enter array";
    
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//    cout<<"first repeated element is"<<firstrepeated(arr,n);
// }

//WE CANNOT APPLY SORTING APPROACH IN THIS QUESTION

//APPROACH2-USING HASHMAP
//tc-O(n)
//sc[O(n)]

