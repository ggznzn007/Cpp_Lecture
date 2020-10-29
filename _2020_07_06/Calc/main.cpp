#include "Calc.h"
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"
#include <iostream>
using namespace std;

int getAndSelNum()
{
	int num = 0;
	cout << "����� �����ϼ��� (0:Add, 1:Sub, 2:Mul, 3:Div) >> ";
	cin >> num;
	return num;
	/*switch (num == 0)
	{
	case 0: 
		{cout << "Add ����Դϴ�" << endl; }
	case 1:
		{cout << "Sub ����Դϴ�" << endl; }
	case 2:
		{cout << "Mul ����Դϴ�" << endl; }
	case 3:
		{cout << "Div ����Դϴ�" << endl; }
	}*/
	
}

void main()
{	
	int a = 0; int b = 0;
	int num = getAndSelNum();
	if (num == 0)
	{
		cout << "Add ����Դϴ�" << endl;
	}
	else if (num == 1)
	{
		cout << "Sub ����Դϴ�" << endl;
	}
	else if (num == 2)
	{
		cout << "Mul ����Դϴ�" << endl;
	}
	else if (num == 3)
	{
		cout << "Div ����Դϴ�" << endl;
	}
	cout << "���� 2���� �Է��ϼ���" << endl;
	cin >> a >> b;

	Calc* calc[4] = { new Add(),
					  new Sub(),
					  new Mul(),
					  new Div() };
	while (1)
	{
		if (num == 0)
		{			
			calc[0]->setValue(a, b);
			calc[0]->calculate();
			cout << "�����" << calc[0]->calculate() << "�Դϴ�" << endl;
			break;
		}
		else if (num == 1)
		{
			/*cout << "Sub ����Դϴ�." << endl;*/
			calc[1]->setValue(a, b);
			calc[1]->calculate();
			cout << "�����" << calc[1]->calculate() << "�Դϴ�" << endl;
			break;
		}
		else if (num == 2)
		{
			/*cout << "Mul ����Դϴ�." << endl;*/
			calc[2]->setValue(a, b);
			calc[2]->calculate();
			cout << "�����" << calc[2]->calculate() << "�Դϴ�" << endl;
			break;
		}
		else if (num == 3)
		{
			/*cout << "Div ����Դϴ�." << endl;*/
			calc[3]->setValue(a, b);
			calc[3]->calculate();
			cout << "�����" << calc[3]->calculate() << "�Դϴ�" << endl;
			break;
		}

	}
	delete calc[0];
	delete calc[1];
	delete calc[2];
	delete calc[3];
}