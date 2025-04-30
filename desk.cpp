#include<iostream>
using namespace std;
#include<string>

class Desk
{
public:
	void setW(int w)
	{
		m_W = w;
	}
	int getW()
	{
		return m_W;
	}
	void setL(int l)
	{
		m_L = l;
	}
	int getL()
	{
		return m_L;
	}
	void setH(int h)
	{
		m_H = h;
	}
	int getH()
	{
		return m_H;
	}
	int getS()
	{
		return m_L*m_W;
	}
	void setShape(string shape)
	{
		m_shape = shape;
	}
    string getshape()
	{
		return m_shape;
	}
private:
	int m_W;
	int m_L;
	int m_H;
	string m_shape;
};

int main()
{
	Desk d1;
	d1.setW(100);
	d1.setL(100);
	d1.setH(80);
	d1.setShape("方形");


	cout << "d1的面积为：" << d1.getS() << "  形状是：" << d1.getshape() << endl;
}

