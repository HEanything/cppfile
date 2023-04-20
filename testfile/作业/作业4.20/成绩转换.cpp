#include<iostream>
using namespace std;
class grade{
public:
	void print(int x){
		if (x>=90){
			cout<<"A";
		}else if(x>=80&&x<90){
			cout<<"B";
		}else if(x>=70&&x<80){
			cout<<"C";
		}else if(x>=60&&x<70){
			cout<<"D";
		}else if(x<60){
			cout<<"E";
		}
	}	
};

int main()
{
	int x;
	cin>>x;
	grade first;
	first.print(x);
	return 0;
}