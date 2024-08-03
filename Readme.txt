Inventory Management System

This is a simple Inventory Management System implemented in C++ using a linked list. It supports operations to insert, search, and update product details.

Features

- Insert Product: Add a new product to the inventory.
- Search Product: Find a product by its ID and display its details.
- Update Product: Update the details of an existing product.

Structure

The project uses a `struct Inventory` to define the product details and maintains a linked list to store the inventory.

Functions

- `void insert(int productid, char* name, float price, int qty)`: Inserts a new product into the inventory.
- `void search(int productid)`: Searches for a product by its ID and displays its details if found.
- `void update(int productid)`: Updates the details of a product by its ID.

How to Run

1. Compile the code using a C++ compiler.
   ```sh
   g++ -o inventory_management_system main.cpp
