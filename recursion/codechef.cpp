#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	int i=1;
	while(i<=T){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int p=(a>b)?a:(b>c)?b:c;
		 int q=(a<b)?a:(b<c)?b:c;
		 cout<<(p-q)<<endl;
	    i++;
	}
	return 0;
}
