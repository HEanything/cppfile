#include<iostream>
using namespace std;
class cancel{
	int n,k;
	int a[1000];
public:
	void read(){
		cin>> n >> k;
		for (int i=0;i<n;i++)
		{
			cin>> a[i];
		}
	}
	bool IsCancel1(){
		int cnt=0;
		for (int i=0;i<n;i++){
			if (a[i]<=0){
				cnt++;
			}
		}
		if (cnt<k){
			return true;
		}else{
			return false;
		}
	}
	void print(){
		if (IsCancel1()){
			cout<< "YES";
		}else{
			cout << "NO";
		}
	}	
};

int main()
{
	cancel first;
	first.read();
	first.print();
	return 0;
}