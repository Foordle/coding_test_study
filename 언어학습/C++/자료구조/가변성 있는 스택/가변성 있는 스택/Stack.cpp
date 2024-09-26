#include "Stack.h"

void Stack::Clear()
{
    count = 0;
    data = nullptr;
}

int Stack::Count(){return count;}

bool Stack::IsEmpty()
{
    if (count == 0) { return true; }
    else { return false; }
}

void Stack::Push(int _data)
{
    count++;
    if (IsEmpty()) 
    {
        data = new int[count];
        data[count-1] = _data;
    }
    else 
    {
        int* temp= new int [count];
        temp[count-1] = _data;
        for (int i = 0; i <= count-2; i++) 
        {
            temp[i] = data[i];
        }
        delete data;
        data = temp;
    }

}

int Stack::Pop()
{
    if (IsEmpty()) {return false;}
    else 
    {
        count--; 
        int* temp = new int[count];
        for (int i = 0; i <= count - 1; i++)
        {
            temp[i] = data[i];
        }
        return data[count];
        delete data;
        data = temp;
        
    }
    
}

Stack::Stack()
{
    count = 0;
    data = nullptr;
}

Stack::~Stack()
{
    delete data;
}
