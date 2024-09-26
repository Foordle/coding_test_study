#include "HashMap.h"

HashMap::HashMap()
{
    count = 0;
    table = new Node * [TABLE_SIZE];
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        table[i] = nullptr;
    }
}

HashMap::~HashMap()
{
    Node* deletenode;
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        deletenode = table[i];
        if (deletenode == nullptr)
        {
            continue;
        }
        else if (deletenode->hashNext == nullptr)
        {
            delete deletenode;
        }
        else
        {
            Node* del_next = deletenode->hashNext;
            while (del_next != nullptr)
            {
                delete deletenode;
                deletenode = del_next;
                del_next = deletenode->hashNext;
            }
            delete deletenode;
        }
    }
}

void HashMap::Add(int key, int value)
{
    int my_index = key % TABLE_SIZE;
    Node* new_node = new Node;
    new_node->key = key;
    new_node->data = value;
    new_node->hashNext = nullptr;
    Node* target = table[my_index];
    if (target != nullptr)
    {
        Node* target_next = target->hashNext;

        while (target->hashNext != nullptr)
        {
            target = target_next;
            target_next =target->hashNext;
        }
        target->hashNext = new_node;
    }
    else
    {
        table[my_index] = new_node;
    }

    count++;
}

int HashMap::GetValue(int key)
{
    int my_index = key % TABLE_SIZE;
    Node* target = table[my_index];
    while (target->key != key)
    {
        target = target->hashNext;
    }
    return target->data;
}

void HashMap::Remove(int key)
{
    int my_index = key % TABLE_SIZE;
    if (key == table[my_index]->key)
    {
        Node* target_next = table[my_index]->hashNext;
        delete table[my_index];
        table[my_index] = target_next;
    }
    else
    {
        Node* before_target = table[my_index]->hashNext;
        Node* target = before_target->hashNext;
        while (target->key != key)
        {
            before_target = target;
            target = before_target->hashNext;
        }
        before_target->hashNext = target->hashNext;
        delete target;
    }
    count--;
}
    

int HashMap::Count()
{
    return count;
}

void HashMap::Clear()
{
    count = 0;
    Node* deletenode;
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        deletenode = table[i];
        if (deletenode == nullptr)
        {
            continue;
        }
        else if (deletenode->hashNext == nullptr)
        {
            delete deletenode;
        }
        else
        {
            Node* del_next = deletenode->hashNext;
            while (del_next != nullptr)
            {
                delete deletenode;
                deletenode = del_next;
                del_next = deletenode->hashNext;
            }
            delete deletenode;
        }
    }
    table = new Node * [TABLE_SIZE];
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        table[i] = nullptr;
    }
}