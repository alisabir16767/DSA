/*Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.*/
#include<iostream>
using namespace std;
float Area(int r){
    return (3.14*r*r);
}
float Circumferance(int r){
    return (2*3.14*r);
}
int main(){
  int radius;
  cout<<"Enter the radius:";
  cin>>radius;
  cout<<Area(radius)<<endl;
cout<<Circumferance(radius)<<endl;
    return 0;
}
