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
	cout << num << "��(��) ���Խ��ϴ�." << endl;

	num = deque.Pop_Front(); // 1
	cout << num << "��(��) ���Խ��ϴ�." << endl;

	num = deque.Count(); // 3
	cout << "stack��" << num << "���� ���ҽ��ϴ�." << endl;

	if (!deque.isEmpty())// stack�� 3���� �־ == true
	{
		cout << "�ڷᰡ ���� �־� �ڷḦ ����ڽ���" << endl;
		deque.Clear(); // �ڷ� ����
	}

	num = deque.Count(); // 0
	cout << "stack��" << num << "���� ���ҽ��ϴ�." << endl;
	return 0;
}