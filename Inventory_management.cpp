#include <iostream>
#include <cstring>
using namespace std;

struct Inventory
{
    int productid;
    int qty;
    char name[100];
    float price;
    struct Inventory *next;
} *head;

void insert(int productid, const char *name, float price, int qty)
{
    struct Inventory *product = new Inventory;
    product->productid = productid;
    strcpy(product->name, name);
    product->price = price;
    product->qty = qty;
    product->next = NULL;
    if (head == NULL)
    {
        head = product;
    }
    else
    {
        product->next = head;
        head = product;
    }
}

void search(int productid)
{
    struct Inventory *temp = head;
    while (temp != NULL)
    {
        if (temp->productid == productid)
        {
            cout << "\n\tProduct ID: " << temp->productid << endl;
            cout << "\tProduct name: " << temp->name << endl;
            cout << "\tPrice: Rs." << temp->price << endl;
            cout << "\tQuantity: " << temp->qty << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Product with id " << productid << " is not found !!!" << endl;
}

void update(int productid)
{
    struct Inventory *temp = head;
    while (temp != NULL)
    {
        if (temp->productid == productid)
        {
            cout << "\n\tDetails with id " << productid << " Found !!!" << endl;
            cout << "\tEnter new name: ";
            cin.ignore();
            cin.getline(temp->name, 100);
            cout << "\tEnter new price: ";
            cin >> temp->price;
            cout << "\tEnter new quantity: ";
            cin >> temp->qty;
            return;
        }
        temp = temp->next;
    }
    cout << "Product with id " << productid << " is not found !!!" << endl;
}

int main()
{
    head = NULL;
    insert(1, "Product 1", 10.5, 5);
    insert(2, "Product 2", 20.5, 10);
    insert(3, "Product 3", 30.5, 15);
    insert(4, "Product 4", 40.5, 20);
    insert(5, "Product 5", 50.5, 25);
    search(3);
    update(3);
    search(3);
    return 0;
}
