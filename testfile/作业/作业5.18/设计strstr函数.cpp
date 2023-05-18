#include<iostream>
using namespace std;
class mystr{
	string str1,str2;
public:
	void read(){
		getline(cin,str1);
		getline(cin,str2);
	}
	void mystrstr1(){
		if (str1.find(str2,0)==-1){
			cout<<-1<<endl;
		}else{
			cout<<str1.find(str2,0)<<endl;			
		}
	}
	void mystrstr2(){
		int judge=-1;
		for(int i=0;i<=str1.size()-str2.size();i++)
		{
			if (str1[i]==str2[0])
			{
				judge=i;
				for (int k=1;k<str2.size();k++)
				{

					if (str1[k+i]==str2[k]){
						judge=i;
					}else{
						judge=-1;
						break;
					}
				}
			}
			if (judge!=-1)
			{
				break;
			}
		}
		cout<<judge;
	}	
};
int main()
{
	mystr first;
	first.read();
	first.mystrstr1();
	first.mystrstr2();
	return 0;
}