#include "DoubleList.h"

int main()
{
	DoubleList lst;
	//lst.Push_Back(5);
	//lst.Push_Back(6);
	//lst.Push_Back(7);
	//lst.Push_Back(8);
	//lst.Push_Back(9);
	//lst.Push_Back(10);
	//lst.Push_Front(4);
	//lst.Push_Front(3);
	//lst.Push_Front(2);
	//lst.Push_Front(1);
	//lst.Push_Front(0);
	//lst.PrintAll();
	//int mydata;
	//mydata = lst.Pop_Back();
	//cout << mydata << endl;
	//mydata = lst.Pop_Front();
	//cout << mydata << endl;
	//lst.PrintAll();
	//lst.Clear();
	//lst.Push_Back(5);
	//lst.Push_Back(6);
	//lst.PrintAll();
	//lst.Clear();
	lst.Push_Back(5);
	lst.Push_Back(6);
	lst.Push_Back(7);
	lst.Push_Back(8);
	lst.Push_Back(9);
	lst.Push_Front(4);
	lst.Push_Front(3);
	lst.Push_Front(2);
	lst.Push_Front(0);
	lst.PrintAll();
	lst.Insert(1, 1);
	lst.PrintAll();
	cout << lst.count << endl;
	lst.Insert(10, 10, 10);
	lst.PrintAll();
	lst.DeleteNode(5);
	cout << lst.count << endl;
	lst.PrintAll();
	
	
}