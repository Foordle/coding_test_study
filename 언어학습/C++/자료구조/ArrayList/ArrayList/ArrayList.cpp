#include "ArrayList.h"

void ArrayList::AddNode(int _data)
{
	count++;
	if (IsEmpty())
	{
		data = new int[count];
		data[count - 1] = _data;
	}
	else
	{
		int* temp = new int[count];
		temp[count - 1] = _data;
		for (int i = 0; i <= count - 2; i++)
		{
			temp[i] = data[i];
		}
		delete data;
		data = temp;
	}
}

void ArrayList::InsertNode(int _index, int _data)
{
	count++;
	int* temp = new int[count];
	temp[_index] = _data;
	for (int i = 0; i < _index; i++)
	{
		temp[i] = data[i];
	}
	for (int i = _index+1; i <= count-1; i++)
	{
		temp[i] = data[i-1];
	}
	delete data;
	data = temp;
}

void ArrayList::UpdateNode(int _index, int _data)
{
	data[_index] = _data;
}

void ArrayList::DeleteNodeData(int _data)
{
	count--;
	int* temp = new int[count];
	for (int i = 0; i <= count; i++)
	{
		if (data[i] == _data) 
		{
			int d_i = i;
			for (i = d_i; i < count; i++)
			{
				temp[i] = data[i + 1];
			}
			break;
		}
		temp[i] = data[i];
	}
	delete data;
	data = temp;
}

void ArrayList::DeleteIndex(int _index)
{
	count--;
	int* temp = new int[count-1];
	for (int i = 0; i < _index; i++)
	{
		temp[i] = data[i];
	}
	for (int i = _index+1; i < count; i++)
	{
		temp[i] = data[i+1];
	}
	delete data;
	data = temp;
}

void ArrayList::ClearAllNode()
{
	count = 0;
	data = nullptr;
}

int ArrayList::GetNodeData(int _index)
{
    return data[_index];
}

int ArrayList::GetListSize()
{
    return count;
}

bool ArrayList::IsEmpty()
{
    if (count == 0) { return true; }
    else            { return false; }
}

void ArrayList::PrintAll()
{
	for (int i = 0; i < count; i++)
	{
		cout << data[i] << " ";
	}
	cout << "이 들어가 있습니다" << endl;
}

ArrayList::ArrayList()
{
	count = 0;
	data = nullptr;
}
ArrayList::~ArrayList()
{
	delete data;
}