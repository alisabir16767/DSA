#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   int arr[]={1,2,3,4,40,40,40,40,5};
   int n=9;
   int key=2;
   
   
   // int *it = find (arr , arr + n, key);
   // int index = it-arr;
   // cout<<index<<endl;
   // cout<<*it<<endl;



   //search in logn time

   bool present=binary_search(arr,arr+n,key);
   if(present)
   cout<<"Present"<<endl;
   else
   cout<<"Not Present"<<endl;



   //two more things 
   //get the index of element 
   //lower_bound(s,e,key) and upper_bound(s,e,key)

auto it=lower_bound(arr,arr+n,40);  //gives first element >=key
cout<<(it-arr)<<endl;


//upper_bound

auto et=upper_bound(arr,arr+n,40);  //gives last element>key


                                   //uper_bound-lower_bound=frequency of an element

auto it=upper_bound(arr,arr+n,40);

   return 0;
}