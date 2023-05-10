#include<iostream>

using namespace std;
class Sort{
	int n;
	int a[];
public: 
	void read(){
		cin >> n;
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
	}
	void sortBubble1()
	{
		int i,tem,N;
		for (i=1;i<n;i++){
			for (N=0;N<=n-1-i;N++){
				if (a[N]>a[N+1]){	
					tem=a[N];
					a[N]=a[N+1];
					a[N+1]=tem;
				}
			}
		}
	}
	void print(){
		for (int i=0;i<n;i++){
			cout<< a[i] <<" ";
		}
	}	
};
int main()
{
	Sort first;
	first.read();
	first.sortBubble1();
	first.print();
	return 0;
}