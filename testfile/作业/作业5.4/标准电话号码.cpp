#include<iostream>
#include<string>
using namespace std;
class number{
	string s;
public:
	void read(){
		cin>>s;
	}
	void print(){
		for (int i=0;i<7;i++){
			judge(s[i]);
		}
	}
	void judge(char ch){
		if(ch>='A'&&ch<='C')
        {
            cout << '2';
        }
        if(ch>='D'&&ch<='F')
        {
            cout << '3';
        }
        if(ch>='G'&&ch<='I')
        {
            cout << '4';
        }
        if(ch>='J'&&ch<='L')
        {
            cout << '5';
        }
        if(ch>='M'&&ch<='O')
        {
            cout << '6';
        }
        if(ch>='P'&&ch<='S')
        {
            cout << '7';
        }
        if(ch>='T'&&ch<='V')
        {
            cout << '8';
        }
        if(ch>='W'&&ch<='Z')
        {
            cout << '9';
        }
    }
    
	
		
};
int main()
{
	number first;
	first.read();
	first.print();
	return 0;
}