//�޿� ��� ���α׷�

#include <iostream>

using namespace std;

int main(void)
{
	int sell, pay;
	cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
	cin >> sell;

	while (sell != -1)
	{
		pay = 50 + sell * 0.12;
		cout << "�̹� �� �޿�: " << pay << "����" << endl << endl;

		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		cin >> sell;
	}

	cout << "���α׷��� �����մϴ�." << endl;

	return 0;
	
}