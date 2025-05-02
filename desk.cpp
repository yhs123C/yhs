#include<iostream>
using namespace std;
#include<string>

class Desk
{
public:
	Desk(int w, int l, int h, string shape)
	{
		m_W = w;
		m_L = l;
		m_H = h;
		m_shape = shape;
	}
	int m_W;
	int m_L;
	int m_H;
	string m_shape;
}; 

void Desk1()
{
	Desk d(100, 100, 80, "方形");
	cout << "宽是：" << d.m_W << endl;
	cout << "长是：" << d.m_L << endl;
	cout << "高是：" << d.m_H << endl;
	cout << "形状是：" << d.m_shape << endl;
}


int main()
{
	Desk1();
}

