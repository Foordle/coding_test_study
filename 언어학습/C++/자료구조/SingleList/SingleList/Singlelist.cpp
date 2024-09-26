#include "SingleList.h"
SingleList::SingleList()
{
	head = nullptr;
	count = 0;
}
SingleList::~SingleList()
{
	if (head != nullptr)
	{
		Node* deletenode = head;
		while (deletenode != nullptr)
		{
			Node* next = deletenode->next;
			delete deletenode;
			deletenode = next;
		}
	}
}
void SingleList::AddNode(int _data)
{
	Node* node = new Node;
	node->data = _data;
	node->next = nullptr;
	if (IsEmpty())
	{
		head = node;
	}
	else
	{
		Node* temp = head;
		while(temp->next != nullptr)
		{
			temp = temp->next;
		}
		temp->next = node;
	}
	count++;
}

void SingleList::InsertNode(int _index, int _data)
{
	Node* node = new Node;
	count++;
	node->data = _data;
	node->next = nullptr;
	Node* nex = head->next; //1 ÀÎµ¦½º
	Node* back = head;      // 0 ÀÎµ¦½º
	if (_index == 0)
	{
		head = node;
		node->next = back;
	}
	else
	{
		for (int i = 0; i <= _index - 1; i++)//back = ÀÌÀü°Å nex=Å¸°Ù index
		{
			back = nex;
			nex = back->next;
		}
		back->next = node;
		node->next = nex;
	}

}

void SingleList::UpdateNode(int _index, int _data)
{
	Node* node = new Node;
	node->data = _data;
	node->next = nullptr;
	Node* target = head->next; //1 ÀÎµ¦½º
	Node* back = head;      // 0 ÀÎµ¦½º
	if (_index == 0)
	{
		head = node;
		node->next = target;
		delete back;
	}
	else
	{
		for (int i = 0; i <= _index - 1; i++)//back = ÀÌÀü°Å nex=Å¸°Ù index
		{
			back = target;
			target = back->next;
		}
		back->next = node;
		node->next = target->next;
		delete target;
	}
}
void SingleList::DeleteNodeData(int _data)
{
	count--;
	Node* back = head;
	Node* target = back->next;
	if (head->data == _data)
	{
		head = target;
		delete back;
	}
	else
	{
		while (target != nullptr)
		{
			if (target->data == _data)
			{
				break;
			}
			else
			{
				back = target;
				target = back->next;
			}
		}
		back->next = target->next;
		delete target;
	}
}
void SingleList::DeleteIndex(int _index)
{
	count--;
	Node* back = head;
	Node* target = back->next;
	if(_index == 0)
	{
		head = target;
		delete back;
	}
	else
	{
		for (int i = 0; i < _index-1; i++)
		{
			back = target;
			target = back->next;
		}
		back->next = target->next;
		delete target;
	}
}
void SingleList::ClearAllNode()
{
	if (head != nullptr)
	{
		Node* deletenode = head;
		Node* next = deletenode->next;
		while (true)
		{
			delete deletenode;
			deletenode = next;
			if (deletenode != nullptr) { break; }
			next = deletenode->next;
		}
	}
	head = nullptr;
	count = 0;
}
int SingleList::GetNodeData(int _index)
{
	Node* back = head;
	Node* target = back->next;
	if (_index == 0)
	{
		return back->data;
	}
	else
	{
		for (int i = 0; i <= _index; i++)
		{
			back = target;
			target = back->next;
		}
		return target->data;
	}
	
}
int SingleList::GetListSize()
{
	return count;
}
bool SingleList::IsEmpty()
{
	if(count == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void SingleList::PrintAll()
{
	if (count == 0)
	{
		cout << "¾Æ¹«°Íµµ ¾øÀ½" << endl;
	}
	else 
	{
		Node* target = head;
		while (target->next != nullptr)
		{
			cout << target->data << ", ";
			target = target->next;
		}
		cout << target->data << " ÀÌ´Ù." << endl;
	}
}

