// operatorplus.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	void setvalue(int fe, int in);
	void display();
	CFeet add(CFeet & objk);
	CFeet operator +(CFeet & objk);
};
void CFeet::setvalue(int fe, int in)
{
	feet = fe + in / 12;
	inches = in % 12;
}
void CFeet::display()
{
	cout << feet << "英尺" << inches << "英寸" << endl;
}
CFeet CFeet::add(CFeet & objk)
{
	CFeet temp;
	temp.setvalue(feet + objk.feet, inches + objk.inches);
	return temp;
}
CFeet CFeet ::operator +(CFeet & objk)
{
	CFeet temp;
	temp.setvalue(feet + objk.feet, inches + objk.inches);
	return temp;
}
int main()
{
	CFeet A, B, C;
	A.setvalue(12, 24);
	B.setvalue(13, 37);
	C = A + B;
	C.display();
	return 0;
}

