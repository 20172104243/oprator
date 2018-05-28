// operatorplus.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << feet << "Ӣ��" << inches << "Ӣ��" << endl;
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

