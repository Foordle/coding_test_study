#include "Queue.h"

void Queue::Clear()
{
	count = 0;
	data = nullptr;
}

int Queue::Count()
{
	return count;
}

bool Queue::IsEmpty()
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

void Queue::Enqueue(int _data)
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

int Queue::Pop()
{
    if (IsEmpty()) { return false; }
    else
    {
        int result = data[0];
        count--;
        int* temp = new int[count];
        for (int i = 0; i <= count - 1; i++)
        {
            temp[i] = data[i+1];
        }
        
        delete data;
        data = temp;
        return result;
    }

}
Queue::Queue()
{
    count = 0;
    data = nullptr;
}

Queue::~Queue()
{
    delete data;
}

