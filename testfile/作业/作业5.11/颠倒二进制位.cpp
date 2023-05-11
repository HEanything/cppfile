#include<iostream>
#include<algorithm>
using namespace std;
class rechar{
	string str;
public:
	void read(){
		cin>>str;
	}
	void reover(){
		reverse(str.begin(), str.end());
	}
	void print(){
		cout<<str;
	}	
};
int main()
{
	rechar first;
	first.read();
	first.reover();
	first.print();
	return 0;
}