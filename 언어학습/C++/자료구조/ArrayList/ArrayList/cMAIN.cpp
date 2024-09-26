#include "Arraylist.h"
int main() 
{
	ArrayList arr;
	arr.AddNode(1);
	arr.AddNode(2);
	arr.AddNode(3);
	arr.AddNode(4);
	arr.AddNode(5);
	arr.AddNode(6);
	arr.AddNode(8);
	arr.AddNode(9);
	arr.AddNode(10);
	arr.AddNode(11);
	arr.PrintAll(); //1 2 3 4 5 6  8 9 10 11
	arr.InsertNode(6, 7);

	
	arr.PrintAll(); //1 2 3 4 5 6   7   8 9 10 11

	arr.UpdateNode(4, -5);
	arr.UpdateNode(5, -6);
	arr.PrintAll();
	
	int num = arr.GetNodeData(5);
	cout << num << endl;
	arr.DeleteNodeData(-6);
	arr.PrintAll();
	num = arr.GetListSize();
	cout << num <<"°³ ÀÖÀ½";

	

	arr.ClearAllNode();
}

