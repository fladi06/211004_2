/*
while ���� ����Ͽ� �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

- �Է°� ����� ��� �ݺ��ϴ� �����Դϴ�.

- ���̵� �� ���� : ���� A�� 10�� �Է� ������ while���� Ż���Ͻÿ�.
*/

#include <iostream>

using namespace std;

int main()
{
	reinput:
	int A = 0;
	int B = 0;

	cout << "ù ��° ���� �Է��Ͻÿ�." << endl;
	cin >> A;

	cout << "�� ��° ���� �Է��Ͻÿ�." << endl;
	cin >> B;

	bool Sum = true;

	while (Sum)
	{
		if (A == 10)
		{
			break;
		}
		cout << A + B << endl;
		goto reinput;
	}
	return 0;
}