#include<iostream>

using namespace std;
class supsushu{
	int a,b;
	int num=0,sum=0;
public:
	void read(){
		cin>>a>>b;
	}
	int sum_of_each(int m){
		int t=0;
		while(m!=0) {
			t += m%10;
			m /= 10;
		}
		return t;
	}
	int pdt_of_each(int m){
		int t=1;
		while(m!=0) {
			t *= m%10;
			m /= 10;
		}
		return t;
	}
	int sum_of_eachpdt(int m){
		int t=0;
		while(m!=0) {
			t += (m%10)*(m%10);
			m /= 10;
		}
		return t;
	}		
	bool judge(int m){
		if (m==1||m==0){
			return false;
		}else if(m==2){
			return true;
		}else{
			int n=1;
			for (int cnt=2;cnt<=m/2+1;cnt++)
			{
				if (m%cnt==0){
					n=0;
					break;
				}
			}
			if (n==1){
				return true;
			}else{
				return false;
			}
		}	
	}
	void numandsum(){
		for(int i=a;i<=b;i++){
			if(judge(sum_of_each(i))&judge(pdt_of_each(i))&judge(sum_of_eachpdt(i))&judge(i)){
				cout<< i <<" ";
				num++;
				sum +=i;
			}
		}
		cout<< endl << num << " " << sum;
	}	
};

int main()
{
	supsushu first;
	first.read();
	first.numandsum();
	return 0;
}