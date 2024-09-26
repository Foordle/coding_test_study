#include "CircularList.h"
CircularList::CircularList()
{
	tail = nullptr;
	count = 0;
}

CircularList::~CircularList()
{
	if (tail != nullptr)
	{
		Node* target = tail->next;
		tail->next = nullptr;
		while (target->next != nullptr)
		{
			Node* nxt = target->next;
			delete target;
			target = nxt;
		}
		delete target;
	}
}
void CircularList::AddNode(int _data)
{
	
	Node* new_node = new Node;
	new_node->data = _data;
	if (count == 0)
	{
		tail = new_node;
		tail->next = tail;
	}
	else
	{
		new_node->next = tail->next;
		tail->next = new_node;
		tail = new_node;
	}
	count++;

}
void CircularList::InsertNode(int _index, int _data)
{
	count++;
	Node* newnode = new Node;
	newnode->data = _data;
	Node* nxt = tail->next;
	Node* back = tail;
	for (int i = 0; i <= _index; i++)
	{
		back = nxt;
		nxt = nxt->next;
	}
	back->next = newnode;
	newnode->next = nxt;
}
void CircularList::UpdateNode(int _index, int _data)
{
	Node* newnode = new Node;
	newnode->data = _data;
	Node* target = tail->next;
	Node* back = tail;
	for (int i = 0; i < _index; i++)
	{
		back = target;
		target = target->next;
	}
	back->next = newnode;
	newnode->next = target->next;
	delete target;
}
void CircularList::DeleteNodeData(int _data)
{
	count--;
	Node* target = tail->next;
	Node* back = tail;
	while (target->data != _data)
	{
		back = target;
		target = target->next;
	}
	back->next = target->next;
	delete target;
}
void CircularList::DeleteIndex(int _index)
{
	count--;
	Node* target = tail->next;
	Node* back = tail;
	for (int i = 0; i < _index; i++)
	{
		back = target;
		target = target->next;
	}
	back->next = target->next;
	delete target;
}
void CircularList::ClearAllNode()
{
	count = 0;
	Node* target = tail->next;
	tail->next = nullptr;
	Node* nxt;
	while (target != nullptr)
	{
		nxt = target->next;
		delete target;
		target = nxt;
	}
	tail = nullptr;
	cout << "다 지웟당" << endl;
}
int CircularList::GetNodeData(int _index)
{
	Node* target = tail->next;
	Node* back = tail;
	for (int i = 0; i < _index; i++)
	{
		back = target;
		target = target->next;
	}
	return target->data;
}
bool CircularList::IsEmpty()
{
	if (count == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void CircularList::PrintAll()
{
	if (count == 0)
	{
		cout << "아무것도 없음" << endl;
	}
	else
	{
		Node* target = tail->next;
		for (int i = 0; i < count-1; i++)
		{
			cout << target->data << ", ";
			target = target->next;
		}
		cout << target->data << " 이다." << endl;
	}
}
int CircularList::Count()
{
	return count;
}