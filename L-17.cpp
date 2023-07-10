#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    node *prev;
    int data{};
    node *next;
    node(int da)
    {
        data = da;
        prev = NULL;
        next = NULL;
    }
};

class Doubly_linked_list
{
    node *head = NULL;

public:
    // constructor
    Doubly_linked_list()
    {
        int data{};
        cin >> data;
        node *temp = NULL;

        while (data != -1)
        {
            node *newNode = new node(data);
            if (head == NULL)
            {
                head = newNode;
                temp = newNode;
            }
            else
            {
                temp->next = newNode;
                newNode->prev = temp;
                temp = temp->next;
            }
            cin >> data;
        }
    }
    // FUNCTION
    void display();
};

void Doubly_linked_list::display()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Doubly_linked_list d1;
    d1.display();
    return 0;
}