#include<iostream>
#include<string>
#include<string.h>

using namespace std;
class cmpchar{
	string str1,str2;
public:
	void read(){
		getline(cin,str1);
		getline(cin,str2);
	}
	
	void print(){
		int cnt=0;
		
		if(str2.find(str1,cnt)==-1){
			cout<<-1;
		}else{
			cnt=str2.find(str1,cnt);
			cout<< cnt;
			cnt+=1;
			for (;;cnt++){				
				cnt=str2.find(str1,cnt);
				if (cnt==-1){
					break;
				}
				cout<< " " << cnt;

			}			
		}
	}	
};
int main()
{
	cmpchar first;
	first.read();
	first.print();
	return 0;
}