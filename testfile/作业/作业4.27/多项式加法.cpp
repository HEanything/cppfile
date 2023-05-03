#include<iostream>

using namespace std;
class duoxiangshi{
	int m,n;
	int a[101]={0};
public:
	void readandsum(){
		while ((cin>>m>>n)){
			a[m] += n;
		}
	}
	void print(){
		int cnt=0;
		for (cnt=0;cnt<=100;cnt++){
			if (a[cnt]!=0){
				break;
			}
		}
		for (int i=100;i>cnt;i--){
			if(a[i]!=0)
			{
				if(i!=1){
					cout<<a[i]<<"x"<<i<<"+";				
				}else{
					cout<<a[i]<<"x"<<"+";
				}
			}
		}
		if (cnt==1){
			cout<<a[cnt]<<"x"<<endl;		
		}else if(cnt==0){
			cout<<a[cnt]<<endl;
		}else{
			cout<<a[cnt]<<"x"<<cnt<<endl;
		}

	}	
};

int main()
{
	duoxiangshi first;
	first.readandsum();
	first.print();
	return 0;
}