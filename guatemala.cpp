#include<iostream>

using namespace std;
int main()
{
	string pais;
	cout<<"ingrese su pais"<<endl;
	cin>>pais;
	if (pais =="guatemala"||pais=="Guatemala")
	{
		cout<<"su pais es "<<pais<<" pais de la eterna primavera"<<endl;
	} else {
		cout<<"su pais es "<<pais<<" el mensage especial solo esta en Guatemala"<<endl;
	}
	system("pause");
}
