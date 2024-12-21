#include<iostream>
using namespace std;
int findCatalanUtil(int n) {
    if (n == 0 || n == 1)
        return 1;

    if (memo[n] != -1)
        return memo[n];

    int res = 0;
    for (int i = 0; i < n; i++) {
        res += findCatalanUtil(i) * findCatalanUtil(n - i - 1);
    }

    memo[n] = res;
    return res;
}
int main(){
   int n;
   cin>>n;
   cout<<NthCatlan(n)<<endl;
   return 0;
}