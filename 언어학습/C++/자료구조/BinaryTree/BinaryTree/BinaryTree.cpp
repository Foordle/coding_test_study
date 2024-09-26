#include "BinaryTree.h"
BinaryTree::BinaryTree()
{
    rootNode = nullptr;
}

BinaryTree::~BinaryTree()
{
    if (rootNode != nullptr)
    {

    }
}

void BinaryTree::AddNode(int data)
{
    Node* newNode = CreateNode(data);
    if (rootNode == nullptr)
    {
        rootNode = newNode;
    }
    else
    {
        InsertNode(rootNode, newNode);
    }
}

void BinaryTree::RemoveNode(int data)
{
}

void BinaryTree::PrintAll()
{
}

Node* BinaryTree::CreateNode(int data)
{
    Node* newNode = new Node;

    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;

    return newNode;
}

void BinaryTree::InsertNode(Node* tree, Node* newNode)
{
    if (tree->data > newNode->data)
    {
        if (tree->left == nullptr)
        {
            tree->left = newNode;
        }
        else
        {
            InsertNode(tree->left, newNode);
        }
    }
    else if (tree->data < newNode->data)
    {
        if (tree->right == nullptr)
        {
            tree->right = newNode;
        }
        else
        {
            InsertNode(tree->right, newNode);
        }
    }
}

Node* BinaryTree::DeleteNode(Node* tree, int data)
{
    return nullptr;
}

Node* BinaryTree::FindMin(Node* root)
{
    return nullptr;
}

void BinaryTree::InOrder(Node* root)
{
}


