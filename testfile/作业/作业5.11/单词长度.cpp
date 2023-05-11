#include<iostream>

using namespace std;
class wordlong{
	string str;
public:
	void read(){
		getline(cin,str);
	}
	void spilt(){
		int cnt;
		for (int i=0;i<str.length();i++){
			if(str[i]!=' '&&str[i]!='.'){
				cnt++;
			}else{
				cout<<cnt;
				break;
			}
		}
		int CNT=cnt;
		cnt=0;
		for (int i=CNT+1;i<str.length();i++){
			if(str[i]!=' '&&str[i]!='.'){
				cnt++;
			}else{
				if (cnt!=0){
					cout<<" "<<cnt;	
				}
				cnt=0;
			}
		}
	}	
};
int main()
{
	wordlong first;
	first.read();
	first.spilt();
	return 0;
}