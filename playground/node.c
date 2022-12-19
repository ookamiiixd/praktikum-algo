#include <stdio.h>
#include <stdlib.h>

// Node
typedef struct Node
{
    int _data;
    struct Node *_next;

    void (*setData)(struct Node *, int data);
    void (*SetNext)(struct Node *, struct Node *next);
    int (*getData)(struct Node *);
    struct Node *(*getNext)(struct Node *);
} Node;

void setData(struct Node *node, int data)
{
    node->_data = data;
}

void SetNext(struct Node *node, struct Node *next)
{
    node->_next = next;
}

int getData(struct Node *node)
{
    return node->_data;
}

struct Node *getNext(struct Node *node)
{
    return node->_next;
}

void createNode(Node *node)
{
    node->_next = NULL;
    node->setData = setData;
    node->SetNext = SetNext;
    node->getData = getData;
    node->getNext = getNext;
}

// List
typedef struct List
{
    struct Node *head;

    void (*print)(struct List *);
    void (*append)(struct List *, int data);
    void (*delete)(struct List *, int data);
} List;

void print(struct List *list)
{
    Node *tmp = list->head;
    if (tmp == NULL)
    {
        printf("EMPTY\n");
        return;
    }
    if (tmp->getNext(tmp) == NULL)
    {
        printf("%d --> NULL\n", tmp->getData(tmp));
    }
    else
    {
        do
        {
            printf("%d --> ", tmp->getData(tmp));
            tmp = tmp->getNext(tmp);
        } while (tmp != NULL);
        printf("NULL\n");
    }
}

void append(struct List *list, int data)
{
    if (data != 300)
    {
        Node *newNode = (Node *)malloc(sizeof(Node));
        createNode(newNode);
        newNode->setData(newNode, data);
        newNode->SetNext(newNode, NULL);
        Node *tmp = list->head;
        if (tmp != NULL)
        {
            while (tmp->getNext(tmp) != NULL)
            {
                tmp = tmp->getNext(tmp);
            }
            tmp->SetNext(tmp, newNode);
        }
        else
        {
            list->head = newNode;
        }
    }
}

void delete(struct List *list, int data)
{
    if (data != 300)
    {
        Node *tmp = list->head;
        if (tmp == NULL)
            return;
        if (tmp->getNext(tmp) == NULL)
        {
            free(tmp);
            list->head = NULL;
        }
        else
        {
            Node *prev;
            do
            {
                if (tmp->getData(tmp) == data)
                    break;
                prev = tmp;
                tmp = tmp->getNext(tmp);

            } while (tmp != NULL);
            prev->SetNext(prev, tmp->getNext(tmp));
            free(tmp);
        }
    }
}

void createList(List *list)
{
    list->head = NULL;
    list->print = print;
    list->append = append;
    list->delete = delete;
}

int main()
{
    printf("Nama: Royhan Abdurrohim\n");
    printf("NIM: 32602200018\n\n");

    List list;
    createList(&list);
    list.append(&list, 100);
    list.print(&list);
    list.append(&list, 200);
    list.print(&list);
    list.append(&list, 400);
    list.print(&list);
    list.append(&list, 500);
    list.print(&list);
    list.delete(&list, 400);
    list.print(&list);
    list.delete(&list, 200);
    list.print(&list);
    list.delete(&list, 500);
    list.print(&list);
    list.delete(&list, 100);
    list.print(&list);
}