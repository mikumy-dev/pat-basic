#include <iostream>

/* PAT 1008*/
using std::cout;
using std::endl;
using std::cin;
using std::string;
int main(int argc, char** argv) {
	int size = 0;
	int right = 0;
	cin>>size>>right;
	
	int r[size];
	right=right%size;
	
	for(int i=0;i<size;i++){
		if(i+right<size) cin>>r[i+right];
		else cin>>r[i+right-size];
	}
	
	for(int i=0;i<size;i++){
		if(i<size-1) cout<<r[i]<<" ";
		else cout<<r[i];
		
	}
	
	return 0;
	
}
