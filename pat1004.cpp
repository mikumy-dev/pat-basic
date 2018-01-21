#include <iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	string name[num];
	string subject[num];
	int point[num];
	int maxi=0,mini=0,maxp=0,minp=0;
	for(int i=0;i<num;i++){
		cin>>name[i]>>subject[i]>>point[i];
		if(i==0){
			maxp=point[i];
			minp=point[i];
		}else{
			if(point[i]>maxp){
				maxp=point[i];
				maxi=i;
			}
			if(point[i]<minp){
				minp=point[i];
				mini=i;
			}
		}
	} 
	cout<<name[maxi]<<" "<<subject[maxi]<<endl;
	cout<<name[mini]<<" "<<subject[mini]<<endl;
	return 0;
}
