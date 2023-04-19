#include<map>
#include<string>
#include<iostream>
#include <vector>
#include <algorithm>  
using namespace std;
class huiwen{
	int n,cnt;	
public:
	void read()
	{
		cin >> n >>cnt;
		
	}
	bool Is_huiwen(int num)//判断一个数是不是回文数
	{	
	
		string s1 = to_string(num);
		string s2(s1);
		reverse(s1.begin(), s1.end());//这是一个C++语言的函数，用于将字符串s中的字符顺序翻转。具体而言，它将字符串s的起始位置和结束位置传递给该函数，并通过将首尾字符交换来实现翻转操作。
		if (s1 == s2){//c++字符串比较可以用compare或==    compare同strcmp
			return true;
		}else{
			return false;
		}
		
	}
	int print_huiwen()//寻找大于n的第一个回文数
	{
		while (1)
		{
			int tmp = ++n;
			if (Is_huiwen(tmp))
			{
				return tmp;				
			}
		}
		
	}
	void circle(){
		while (cnt>=1)
		{
		 	cout<<print_huiwen()<<' ';
			cnt--;
			//system("pause");		
		}
	}	
}; 

int main()
{
	huiwen first;
	first.read();
	first.circle();
//	system("pause");
	return   0;
}