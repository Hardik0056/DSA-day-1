// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// void printfirstelements(int arr[],int n){
//     cout<<arr[3]<<endl;
// }
// int main(){
//     int arr[]={5,10,15,20};
//     printfirstelements(arr,4);
//     return 0;

// void printAll(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     printAll(arr,5);
//     return 0;
// }

void printParis(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")";
        }
        cout<<endl;
    }
    
}
int main(){
    int arr[]={1,2,3};
    printParis(arr,3);
    return 0;
}
