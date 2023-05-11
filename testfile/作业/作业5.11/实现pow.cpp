#include<iostream>

using namespace std;
class pow{
	float x;
	int n;
public:
	void read(){
		cin>>x>>n;
	}
	void cal(){
		float X=x;
		if (x==0){
			x=0;
		}else{
			if (n==0){
				x=1;
			}else if(n>0){
				for(int i=1;i<n;i++){
					x *= X;
				}	
			}else if(n<0){
				for(int i=1;i>n;i--){
					x /=X;
				}
			}
		}
		
	}
	void print(){
		cout<<x;
	}	
};
int main()
{
	pow first;
	first.read();
	first.cal();
	first.print();
	return 0;
}