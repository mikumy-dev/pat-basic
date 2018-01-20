#include <iostream>
#include <regex>
using namespace std;
vector<string> split(string str, char sep){
	string s("");
	vector<string> strv;
	for(unsigned int i=0;i<str.length();i++){
		if(str[i]!=sep){
			s+=str[i];
		}else{
			strv.push_back(s);
			s="";
		}
		if(i==str.length()-1){
			strv.push_back(s);
		}
	}
	return strv;
}

bool passOrNot(string s){
	if (regex_match(s, regex("[A]*P[A]+T[A]*"))){
		char p = 'P';
		vector<string> strv = split(s,p);
		string right = strv.back();
		strv.pop_back();
		string left = strv.back();
		char t = 'T';
		vector<string> strv1 = split(right,t);
		string right1 = strv1.back();
		strv1.pop_back();
		string right0 = strv1.back();
		
		if(right0.size()==1 && left==right1){
			return true;
		}else if(right0.size()==1 && left!=right1){
			return false;
		}else if(right0.size()>1){
			right0 = right0.substr(0,right0.size()-1);
			right1 = right1.substr(0,(right1.size()-left.size()));
			
			string s1("");
			s1.append(left);
			s1.append("P");
			s1.append(right0);
			s1.append("T");
			s1.append(right1);
			return passOrNot(s1);
		}else{
			return true;
		}
	}else{
		return false;
	}
}


int main() {
	int num;
	cin>>num;
	string strs[num];
	for(int i=0;i<num;i++){
		cin>>strs[i];
	}
	for(int i=0;i<num;i++){
		bool t = passOrNot(strs[i]);
		if(t){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
