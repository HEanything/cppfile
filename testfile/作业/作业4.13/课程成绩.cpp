#include<string>
#include<iostream>
#include <algorithm>
#include<iomanip>
using namespace std;
class grade{
	float a[100]={-1};
	float b[100]={-1};
	float c[100]={-1};
	char name[100][30];
	int num;
public:
	void cal(){
		for (int i=0;i<num;i++){
			c[i] = a[i]*0.4+b[i]*0.6;
		}
	}
	void read(){
		num=0;
		while(cin>>name[num]>>a[num]>>b[num])
		{
			num++;
		}
	}
	void sortBubble()
	{
		int i,N;
		float temp1,temp2,temp3;
		char temp[30];
		for (i=1;i<num;i++){
			for (N=0;N<=num-1-i;N++){
				if (c[N]<c[N+1])
				{	
					temp3=c[N];
					c[N]=c[N+1];
					c[N+1]=temp3;
					temp1=a[N];
					a[N]=a[N+1];
					a[N+1]=temp1;
					temp2=b[N];
					b[N]=b[N+1];
					b[N+1]=temp2;
					strcpy(temp,name[N]);
					strcpy(name[N],name[N+1]);
					strcpy(name[N+1],temp);
				}
			}
		}
	}	
	void print(){
		for (int i=0;i<num;i++){
			cout<<name[i]<<" "<<fixed<<setprecision(2)<<a[i]<<" "<<fixed<<setprecision(2)<<b[i]<<" "<<fixed<<setprecision(2)<<c[i]<<endl;
		}
	}
};

int main()
{
	grade student;
	student.read();
	student.cal();
	student.sortBubble();
	student.print();
	return 0;	
}  