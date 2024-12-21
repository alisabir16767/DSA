#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
   cin>>arr[i];
}                          //Note to the first sample: let's assume that Vasya takes x milliliters of each drink from the fridge. Then the volume of pure juice in the cocktail will equal  milliliters. The total cocktail's volume equals 3·x milliliters, so the volume fraction of the juice in the cocktail equals , that is, 66.(6) percent.

float sum=0;
for(int i=0;i<n;i++)
{
   sum+=(arr[i]/100);

}
float percentage=(sum/n*100);
cout<<2.0*percentage<<endl;


return 0;
}