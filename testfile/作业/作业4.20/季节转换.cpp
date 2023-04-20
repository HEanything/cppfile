#include<iostream>
using namespace std;
class season{
public:
	void print(int x){
		if (x==1){
			cout<<"spring";
		}else if(x==2){
			cout<<"summer";
		}else if(x==3){
			cout<<"autumn";
		}else if(x==4){
			cout<<"winter";
		}
	}	
};

int main()
{
	int x;
	cin>>x;
	season first;
	first.print(x);
	return 0;
}