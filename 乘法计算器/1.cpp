#include <iostream>
using namespace std;

int main(){
	
	cout << "欢迎使用乘法计算器" << endl;
	cout << "此计算器械可以计算两个整数数字的乘积" << endl;
	cout << "请输入要乘的数字中间用空格隔开"<<endl;

	int a;
	int b;
	cin >> a >> b;
	cout << "计算结果为;" << endl;
	cout << a * b << endl;
	cout << "感谢使用乘法计算器" << endl;


	system("pause");
	return 0;
}