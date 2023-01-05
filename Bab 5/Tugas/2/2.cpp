#include <iostream>
using namespace std;
class Node
{
    int data;
    Node *next;

public:
    Node(){};
    void SetData(int aData) { data = aData; };
    void SetNext(Node *aNext) { next = aNext; };
    int Data() { return data; };
    Node *Next() { return next; }
};
class List
{
    Node *head;

public:
    List() { head = NULL; };
    void Print();
    void Append(int data);
    void Delete(int data);
};
void List::Print()
{
    Node *tmp = head;
    if (tmp == NULL)
    {
        cout << "NULL" << endl;
        return;
    }
    if (tmp->Next() == NULL)
    {
        cout << tmp->Data();
        cout << " --> ";
        cout << "EMPTY" << endl;
    }
    else
    {
        do
        {
            cout << tmp->Data();
            cout << " --> ";
            tmp = tmp->Next();
        } while (tmp != NULL);
        cout << "NULL" << endl;
    }
}
void List::Append(int data)
{
    Node *newNode = new Node();
    newNode->SetData(data);
    newNode->SetNext(NULL);
    Node *tmp = head;
    if (tmp != NULL)
    {
        while (tmp->Next() != NULL)
        {
            tmp = tmp->Next();
        }
        tmp->SetNext(newNode);
    }
    else
    {
        head = newNode;
    }
}
void List::Delete(int data)
{
    Node *tmp = head;
    if (tmp == NULL)
        return;
    if (tmp->Next() == NULL)
    {
        delete tmp;
        head = NULL;
    }
    else
    {
        Node *prev;
        do
        {
            if (tmp->Data() == data)
                break;
            prev = tmp;
            tmp = tmp->Next();
        } while (tmp != NULL);
        // Adjust the pointers
        prev->SetNext(tmp->Next());
        // Delete the current node
        delete tmp;
    }
}
int main()
{
    cout << "Nama: Royhan Abdurrohim\n";
    cout << "NIM: 32602200018\n\n";
    List list;
    list.Append(100);
    list.Print();
    list.Append(200);
    list.Print();
    list.Append(300);
    list.Print();
    list.Append(400);
    list.Print();
    list.Append(500);
    list.Print();
    list.Delete(400);
    list.Print();
    list.Delete(300);
    list.Print();
    list.Delete(200);
    list.Print();
    list.Delete(500);
    list.Print();
    list.Delete(100);
    list.Print();
}
