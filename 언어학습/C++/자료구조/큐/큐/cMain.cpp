#include "Queue.h"

int main()
{

	Queue stack;

	stack.Enqueue(99);
	stack.Enqueue(88);
	stack.Enqueue(77);
	stack.Enqueue(66);
	stack.Enqueue(55);
	int num = stack.Pop(); // 99
	cout << num << "��(��) ���Խ��ϴ�." << endl;

	num = stack.Pop(); // 88
	cout << num << "��(��) ���Խ��ϴ�." << endl;

	num = stack.Count(); // 3
	cout << "stack��" << num << "���� ���ҽ��ϴ�." << endl;

	if (!stack.IsEmpty())// stack�� 3���� �־ == true
	{
		cout << "�ڷᰡ ���� �־� �ڷḦ ����ڽ���" << endl;
		stack.Clear(); // �ڷ� ����
	}

	num = stack.Count(); // 0
	cout << "stack��" << num << "���� ���ҽ��ϴ�." << endl;
	return 0;
}
