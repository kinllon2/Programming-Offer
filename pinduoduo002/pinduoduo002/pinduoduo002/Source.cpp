#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
#include<math.h>
using namespace std;

string BigNumMultiply(string s1,string s2)
{
	string res = "";
	deque<int> vec(s1.size() + s2.size() - 1, 0);
	//��������
	for(int i=0;i<s1.size();++i)
	{
		for(int j=0;j<s2.size();++j)
			vec[i+j]+= (s1[i] - '0')*(s2[j] - '0');
	}
	//��λ����
	int addflag = 0;
	for (int i = vec.size() - 1; i >= 0; --i)
	{
		int temp = vec[i] + addflag;//��ǰֵ���Ͻ�λֵ
		vec[i] = temp % 10;//��ǰֵ
		addflag = temp / 10;//��λֵ
	}

}



int main()
{
	string str1,str2;
	while(cin>>str1>>str2)
	{
		cout << str1 << "*" << str2 << "=" << std::endl;
		cout << BigNumMultiply(str1, str2) << std::endl;
	}
	
	

	return 0;
}
