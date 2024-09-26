#include "Deque.h"

int main()
{

	Deque deque;

	deque.Push_Back(4);
	deque.Push_Back(5);
	deque.Push_Front(3);
	deque.Push_Front(2);
	deque.Push_Front(1);
	deque.PrintAll(); // 12345
	int num = deque.Pop_Back();; // 5
	cout << num << "이(가) 나왔습니다." << endl;

	num = deque.Pop_Front(); // 1
	cout << num << "이(가) 나왔습니다." << endl;

	num = deque.Count(); // 3
	cout << "stack에" << num << "개가 남았습니다." << endl;

	if (!deque.isEmpty())// stack에 3개가 있어서 == true
	{
		cout << "자료가 남아 있어 자료를 지우겠습다" << endl;
		deque.Clear(); // 자료 날라감
	}

	num = deque.Count(); // 0
	cout << "stack에" << num << "개가 남았습니다." << endl;
	return 0;
}