#include<iostream>
using namespace std;
class age{
public:
	void print(int x){
		if (x>=1&&x<=10){
			cout<<"children";
		}else if(x>10&&x<=20){
			cout<<"teenagers";
		}else if(x>20&&x<=40){
			cout<<"youth";
		}else if(x>40&&x<=50){
			cout<<"middle-aged";
		}else if(x>50&&x<=80){
			cout<<"elderly";
		}else if(x>80&&x<=100){
			cout<<"old man";
		}
	}	
};

int main()
{
	int x;
	cin>>x;
	age first;
	first.print(x);
	return 0;
}