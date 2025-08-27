#include<iostream>
using namespace std;
class ashok
{
	char name[30];
	int roll;
	public:
	void getdata();
	void display();
};
void ashok::getdata(void)
{
	cout<<"enter the name"<<endl;
	cin>>name;
	cout<<"enter roll"<<endl;
	cin>>roll;
}
void ashok::display(void)
{
	cout<<"\nname="<<name;
	cout<<"\nroll="<<roll;
}
int main()
{
	ashok ashy;
	ashy.getdata();
	ashy.display();
}

