#include <iostream>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string line;
	getline(cin,line);
	vector<string> strv;
	string word;
	for(int i=0;i<line.size();i++){
		if(line[i]!=' '){
			word+=line[i];
			if(i==line.size()-1){
				strv.push_back(word);
			}
		}else if(line[i]==' '){
			strv.push_back(word);
			word="";
		}
	}
	while(!strv.empty()){
		if(strv.size()!=1) cout<<strv.back()<<" ";
		else cout<<strv.back();
		strv.pop_back();
	}
	return 0;
}

