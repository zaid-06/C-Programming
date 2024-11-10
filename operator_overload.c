#include<iostream.h>
using namespace std;
class Complex
{
	private:
	int a , b;
	public:
	void setData(int x , int y )
	{
		a = x ; b= y;
	}
	void showData()
	{	
		cout<<"a = "<<a<<" b= "<<b;
	}
	friend ostream& operator <<(ostream & output  ,Complex &data);
	friend istream& operator >>(istream &input  , Complex &data);

};
istream&  operator >>(istream &input , Complex &data)
{
	cout<<"enter a number for a ";
	input>>data.a;
	cout<<"enter a number for b ";
	input>>data.b;
	return(input);
}
ostream&  operator <<(ostream &output , Complex &data)
{
	output<<"a= "<<data.a<<endl<<"b = "<<data.b;
	return(output);
}
int main()
{
	system("cls");
	Complex c1 ;
	cout<<"enter a  Complex number";
	cin>>c1;
	cout<<c1;
}




oopjl
