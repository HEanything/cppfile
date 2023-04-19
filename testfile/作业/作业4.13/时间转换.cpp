#include<iostream>

using namespace std;
class timechange{
	int m;
public:
	void read(){
		cin>>m;
	}
	void change(){
		if (m>=800){
			m=m-800;
		}else{
			m=m+1600;
		}
		cout<<m;
	}	
};
int main()
{
	timechange first;
	first.read();
	first.change();
	return 0;
}