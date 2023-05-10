#include<iostream>
#include<string>

using namespace std;
class Key{
	string str,str1;
	int k;
public:
	void read(){
		cin>>str;
		cin>>k;
	}
	void instr1(){
		int n=0;
		str1="";
		for (int i=0;i<=str.length();i++)
		{
            if (str[i] != '-')
            {
                if (str[i] <= 'z' && str[i] >= 'a'){
                    str[i] += 'A' - 'a';
				}
					str1 +=str[i];
					n++;	               	
            }
        }
	}
	void print(){
		int r=(str1.length()-1)%k;
		if (r==0){
			r=k;
		}
		string key=str1.substr(0,r);//从0开始的r个字符
		for (int i=r;i<str1.length()-k;i +=k){
			key +='-';
			key +=str1.substr(i,k);
		}
		cout<<key;
	}
		
};
int main()
{
	Key first;
	first.read();
	first.instr1();
	first.print();
	return 0;
}