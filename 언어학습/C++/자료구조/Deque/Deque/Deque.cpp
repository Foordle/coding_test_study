#include "Deque.h"

void Deque::Push_Back(int num)
{
	count++;
	if (isEmpty())
	{
		data = new int[count];
		data[count - 1] = num;
	}
	else
	{
		int* temp = new int[count];
		temp[count-1] = num;
		for (int i = 0; i <= count - 2; i++)
		{
			temp[i] = data[i];
		}
		delete data;
		data = temp;
	}
}

void Deque::Push_Front(int num)
{
	count++;
	if (isEmpty())
	{
		data = new int[count];
		data[count - 1] = num;
	}
	else 
	{
		int* temp = new int[count];
		temp[0] = num;
		for (int i = 0; i <= count - 2; i++)
		{
			temp[i + 1] = data[i];
		}
		delete data;
		data = temp;
	}
}

int Deque::Pop_Back()
{
	if (isEmpty())
	{
		return false;
	}
	else
	{
		int R = data[count - 1];
		count--;
		int* temp = new int[count];
		for (int i = 0; i < count - 1; i++)
		{
			temp[i] = data[i];
		}
		delete data;
		data = temp;
		return R;
	}
	
}

int Deque::Pop_Front()
{
	if (isEmpty())
	{
		return false;
	}
	else
	{
		int R = data[0];
		count--;
		int* temp = new int[count];
		for (int i = 0; i < count - 1; i++)
		{
			temp[i] = data[i+1];
		}
		delete data;
		data = temp;
		return R;
	}
}

bool Deque::isEmpty()
{
	if (count == 0) {return true;}
	else            {return false;}
}

void Deque::Clear()
{
	count = 0;
	data = nullptr;
}

int Deque::Count()
{
	return count;
}

void Deque::PrintAll()
{
	for (int i = 0; i < count; i++)
	{
		cout << data[i];
	}
	cout <<"가 나왔습니다"<< endl;
}

Deque::Deque()
{
	count = 0;
	data = nullptr;
}

Deque::~Deque()
{
	delete data;
}

