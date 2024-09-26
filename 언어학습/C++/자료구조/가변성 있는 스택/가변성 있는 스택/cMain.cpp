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
	cout << num << "��(��) ���Խ��ϴ�." << endl;

	num = stack.Pop(); // 66
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
