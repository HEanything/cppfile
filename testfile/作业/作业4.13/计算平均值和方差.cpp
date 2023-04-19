#include<iostream>
#include<iomanip>
using namespace std;
class averageandvariance{
	int n;
	int a[6];

public:
	void readfirst(){
		cin>>n;
	}
	void read(){
		for (int i=0;i<6;i++){
			cin>>a[i];
		}		
	}
	float average(){
		int sum=0;
		for (int i=0;i<6;i++){
			sum += a[i];
		}
		float aver=sum/6.00;
		return aver; 	 
	}
	float variance(float x){
		float var=0.00;
		for (int i=0;i<6;i++){
			var +=(a[i]-x)*(a[i]-x);
		}
		var=var/6;
		return var;
	}
	void print(){
		for (int i=0;i<n;i++)
		{
			read();
			cout<<fixed<<setprecision(2)<<average()<<" ";
			cout<<fixed<<setprecision(2)<<variance(average())<<endl;
		}
	}	
};
int main()
{
	averageandvariance first;
	first.readfirst();
	first.print();
	return 0;
}