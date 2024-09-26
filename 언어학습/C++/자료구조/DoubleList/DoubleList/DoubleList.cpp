#include "DoubleList.h"
DoubleList::DoubleList()
{
	head = nullptr;
	tail = nullptr;
	count = 0;
}
DoubleList::~DoubleList()
{
	if (head != nullptr)
	{
		Node* target = head;
		Node* nxt;
		while (target != nullptr)
		{
			nxt = target->right;
			delete target;
			target = nxt;
		}
	}
}
void DoubleList::Push_Back(int _data)
{
	Node* new_node = new Node;
	new_node->data = _data;
	new_node->right = nullptr;
	new_node->left = nullptr;
	if (Empty())
	{
		head = new_node;
		tail = new_node;
	}
	else
	{
		tail->right = new_node;
		new_node->left = tail;
		tail = new_node;	
	}
	count++;
}
void DoubleList::Push_Front(int _data)
{
	Node* new_node = new Node;
	new_node->data = _data;
	new_node->left = nullptr;
	new_node->right = nullptr;
	if (Empty())
	{
		head = new_node;
		tail = new_node;
	}
	else
	{
		head->left = new_node;
		new_node->right = head;
		head = new_node;
	}
	count++;
}
Node* DoubleList::CreateNode(int _data)
{
	Node* new_node = new Node;
	new_node->data = _data;
	new_node->left = nullptr;
	new_node->right = nullptr;
	return new_node;
}
int DoubleList::Pop_Back()
{
	int tail_data = tail->data;
	Node* back = tail->left;
	delete tail;
	tail = back;
	tail->right = nullptr;
	return tail_data;
	count--;
}
int DoubleList::Pop_Front()
{
	int head_data = head->data;
	Node* front = head->right;
	delete head;
	head = front;
	head->left = nullptr;
	return head_data;
	count--;
}
bool DoubleList::Empty()
{
	if (count == 0) { return true; }
	else            { return false; }
}
void DoubleList::Clear()
{
	if (count != 0)
	{
		Node* target = head;
		Node* nxt;
		while (target != nullptr)
		{
			nxt = target->right;
			delete target;
			target = nxt;
		}
		head = nullptr;
		tail = nullptr;
		count = 0;
	}
}
void DoubleList::Insert(int _index, int _data)
{
	Node* new_node = CreateNode(_data);
	Node* t_left = head;
	Node* t_right = t_left->right;
	for (int i = 0; i < _index-1; i++)
	{
		t_left = t_right;
		t_right = t_left->right;
	}
	if (count == _index)
	{
		t_left->right = new_node;
		new_node->right = t_right;
		new_node->left = t_left;
	}
	else if (_index == 0)
	{
		new_node->left = nullptr;
		head->left = new_node;
		new_node->right = head;
	}
	else 
	{
		t_left->right = new_node;
		t_right->left = new_node;
		new_node->right = t_right;
		new_node->left = t_left;
	}
	count++;
}
void DoubleList::Insert(int _index, int _count, int _data)
{
	for (int i = 0; i <= _count; i++)
	{
		Insert(_index, _data);
	}
}
void DoubleList::DeleteNode(int _data)
{
	Node* target = head;
	Node* t_right = target->right;
	Node* t_left = target->left;
	while (target->data != _data)
	{
		target = t_right;
		t_right = target->right;
		t_left = target->left;
	}
	t_left->right = t_right;
	t_right->left = t_left;
	delete target;
	count--;
}
void DoubleList::PrintAll()
{
	Node* target = head;
	while (target != nullptr)
	{
		cout << target->data << " " ;
		target = target->right;
	}
	cout << " ÀÔ´Ï´Ù." << endl;
}