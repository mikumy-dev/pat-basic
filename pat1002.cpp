#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	string num;
	cin>>num;
	int sum=0;
	for(int i=0;i<num.length();i++){
		char cn = num[i];
		char* cp = &cn;
		sum+=atoi(cp);
	}
	string pins[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int bai,shi,ge=0;
	if(sum>=100){
		bai = sum/100;
		shi = (sum-bai*100)/10;
		ge = sum%10;
		cout<<pins[bai]<<" "<<pins[shi]<<" "<<pins[ge];
	}else if(sum>=10){
		shi = sum/10;
		ge = sum%10;
		cout<<pins[shi]<<" "<<pins[ge];
	}else{
		ge=sum;
		cout<<pins[ge];
	}
	return 0;
}