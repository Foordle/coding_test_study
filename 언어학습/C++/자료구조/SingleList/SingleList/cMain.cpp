#include "SingleList.h"
int main()
{
	int num;
	SingleList lst;

	lst.AddNode(0);
	lst.AddNode(1);
	lst.AddNode(2);
	lst.AddNode(3);
	lst.AddNode(4);
	lst.AddNode(5);
	lst.AddNode(6);
	lst.AddNode(7);
	lst.AddNode(8);
	lst.AddNode(9);
	lst.PrintAll();
//0~9���� �鰡 ����

	lst.InsertNode(0, 0);
	lst.InsertNode(5, 5);
	lst.PrintAll();
// 00 ~55~ 8, 9 �̷���

	lst.UpdateNode(0, 1000);
	lst.UpdateNode(5, 5000);
	lst.PrintAll();
// 1000 0 ~ 5000 5 ~ 8, 9

	lst.DeleteNodeData(1000);
	lst.PrintAll();
//0~5000~9 �鰡 ����

	lst.DeleteIndex(5);
	lst.PrintAll();
//���� ����

	num = lst.GetNodeData(5);
	cout << num << endl;
// 5���

	num= lst.GetListSize();
	cout << num << endl;
//10 ���
	lst.ClearAllNode();
	
}