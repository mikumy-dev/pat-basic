#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int a;
	cin>>a;
	int c=0;
	while(a>1){
		if(a%2==0) a=a/2;
		else a=(3*a+1)/2;
		c++;
	}
	cout<<c;
	return 0;
}