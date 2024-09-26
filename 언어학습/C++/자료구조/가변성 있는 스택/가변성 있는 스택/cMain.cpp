#include "Stack.h"

int main()
{

	Stack stack;

	stack.Push(99);
	stack.Push(88);
	stack.Push(77);
	stack.Push(66);
	stack.Push(55);

	int num = stack.Pop(); // 55
	cout << num << "이(가) 나왔습니다." << endl;

	num = stack.Pop(); // 66
	cout << num << "이(가) 나왔습니다." << endl;

	num = stack.Count(); // 3
	cout << "stack에" << num << "개가 남았습니다." << endl;

	if (!stack.IsEmpty())// stack에 3개가 있어서 == true
	{
		cout << "자료가 남아 있어 자료를 지우겠습다" << endl;
		stack.Clear(); // 자료 날라감
	}

	num = stack.Count(); // 0
	cout << "stack에" << num << "개가 남았습니다." << endl;

	return 0;
}
