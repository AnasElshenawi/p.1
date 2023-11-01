#include <iostream>

using namespace std;

int main()
{
   const int n = 7;
   int arr[n];
   for(int i =0; i < n; ++i){
    if(arr[i]% 2==0){
        cin>>arr[i];
    }
   }
   cout<<"even : ";
   for(int i =0; i < n; ++i){
    if(arr[i]% 2==0){
        cout<<arr[i]<<" ";
    }
   }
   cout<<endl;
   cout<<"odd : ";
   for(int i = 0; i < n; ++i){
    if(arr[i]% 2 != 0){
        cout<<arr[i]<<" ";
    }
   }
   cout<<endl;
}
