#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
#include<math.h>
#
using namespace std;

string BigNumMultiply(string s1,string s2)
{
	string res = "";
	deque<int> vec(s1.size() + s2.size() - 1, 0);
	//结果简单相乘
	for(int i=0;i<s1.size();++i)
	{
		for(int j=0;j<s2.size();++j)
			vec[i+j]+= (s1[i] - '0')*(s2[j] - '0');
	}
	//进位处理
	//从最高位开始计算进位值，从后往前进行清算
	int addflag = 0;
	for (int i = vec.size() - 1; i >= 0; --i)
	{
		int temp = vec[i] + addflag;//当前值加上进位值
		vec[i] = temp % 10;//当前值
		addflag = temp / 10;//进位值
	}


	//判断最后的一个进位标志，如果有进位，添加到队列的最前面
	while (addflag != 0) {
		int t = addflag % 10;
		vec.push_front(t);
		addflag /= 10;
	}
	for (auto c : vec) {
		ostringstream ss;
		ss << c;
		res = res + ss.str();
	}
	return res;

}



int main()
{
	string str1,str2;
	while(cin>>str1>>str2)
	{
		//cout << str1 << "*" << str2 << "=" << std::endl;
		///cout << BigNumMultiply(str1, str2) << std::endl;
		cout << BigNumMultiply(str1, str2) << endl;
	}
	
	

	return 0;
}
