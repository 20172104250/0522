// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class CFeet
{
private:
	int meters;
	int feet;
	double inches;
public:
	void init(int m, int f,  i)
	{
		m = meters;
		f = feet;
		i = inches;
	}
	void setmeters(int m)
	{
		feet = m*3.2808;
		inches = (feet % 1.0)  *12;

	}
	void display()
	{
		cout << "feet" << feet << "inches" << inches << endl;
	}

};
int main()
{
	CFeet ot;
	ot.setmeters(15);
	ot.display();
	return 0;
}
