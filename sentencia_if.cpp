#include<iostream>

using namespace std;
int main()
{
	int num;
	cout<<"ingrese un numero"<<endl;
	cin>>num;
	if (num>0)
	{
		cout<<"positivo"<<endl;
	} else {
		if(num==0)
		{
			cout<<"0"<<endl;
		}
		cout<<"negativo"<<endl;
	}
	system("pause");
}
