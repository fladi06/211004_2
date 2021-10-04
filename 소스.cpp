/*
while 문을 사용하여 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

- 입력과 출력을 계속 반복하는 문제입니다.

- 난이도 업 버전 : 정수 A가 10을 입력 받으면 while문을 탈출하시오.
*/

#include <iostream>

using namespace std;

int main()
{
	reinput:
	int A = 0;
	int B = 0;

	cout << "첫 번째 값을 입력하시오." << endl;
	cin >> A;

	cout << "두 번째 값을 입력하시오." << endl;
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