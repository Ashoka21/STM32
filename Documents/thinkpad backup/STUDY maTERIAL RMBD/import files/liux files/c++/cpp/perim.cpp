#include<iostream>
using namespace std;
class circle
{
	int r;
	float peri;
	public:
	void getdata(void);
	void display(void);
};
void circle::getdata(void)
{
	cout<<"enter the radius of circle\n";
	cin>>r;
	peri=2*r;
}
void circle::display(void)
{
	cout<<"perimetr of circle"<<peri<<"\n";
}
int main()
{
	circle c;
	c.getdata();
	c.display();
}


