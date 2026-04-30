📚 Online Bookstore Category Management System (C)
📌 Overview

This project is a tree-based category management system implemented in C. It simulates an online bookstore where categories and subcategories can be created, updated, searched, displayed, and deleted.

The system uses a tree data structure, where:

Each category is a node

Each node can have multiple subcategories (children)

🚀 Features

➕ Add new categories or subcategories

📂 Display full category hierarchy (tree structure)

🔍 Search for a category

✏️ Update category names

❌ Delete categories (with all subcategories)

🌳 Dynamic memory management using pointers

🏗️ Data Structure Used

Tree (General Tree)
Each node contains:
Category name
List of child nodes
Count of children

🖥️ Menu Options

1. Add Category
2. Display Categories
3. Update Category
4. Delete Category
5. Exit
 
⚙️ How It Works

1. Create Category

Creates a new category node using dynamic memory allocation.

2. Add Subcategory

Adds a new child node under a given parent category.

3. Display Tree

Recursively prints the category hierarchy in a structured format.

Example:

- Books
  - Fiction
    - Mystery
  - Science
  - 

4. Update Category

Renames an existing category.

5. Delete Category

Deletes a category and all its subcategories using recursive memory freeing.

🧑‍💻 How to Run

🔹 Using GCC Compiler
gcc bookstore.c -o bookstore
./bookstore
🔹 Using VS Code
Open the folder in VS Code
Install C/C++ extension

Compile:

gcc bookstore.c -o bookstore

Run:

./bookstore
📂 File Structure
📁 Online-Bookstore-C
 ├── bookstore.c
 └── README.md
🛠️ Requirements
C Compiler (GCC recommended)
Basic knowledge of C and Data Structures
⚠️ Limitations
Maximum 10 subcategories per category
Uses simple string input (no spaces allowed in names)
No file storage (data is lost after program exit)
🌱 Future Improvements
Support for spaces in category names
File handling to save/load data
GUI version
Unlimited dynamic children using linked lists
👨‍🎓 Learning Outcomes
Tree Data Structure
Recursion
Dynamic Memory Allocation
Pointer Handling in C

📜 License

This project is for educational purposes and free to use.

SCREEN SHORTS

*Add Category


<img width="572" height="534" alt="Screenshot 2026-04-05 201629" src="https://github.com/user-attachments/assets/a3a5f362-80f5-4d24-837e-4dc717a8b1f2" />


<img width="482" height="267" alt="Screenshot 2026-04-05 201712" src="https://github.com/user-attachments/assets/5918726a-e351-49ca-9c1b-2af9f931afe3" />
*


*Display Categories

<img width="499" height="332" alt="Screenshot 2026-04-05 201722" src="https://github.com/user-attachments/assets/6ebc7d7a-a441-4118-b760-8603d9282eea" />
*


*Update Category

<img width="544" height="276" alt="Screenshot 2026-04-05 201731" src="https://github.com/user-attachments/assets/953f0815-0364-4642-99a7-0bc2fc6b5fcc" />
*


*Delete Category

<img width="582" height="270" alt="Screenshot 2026-04-05 201749" src="https://github.com/user-attachments/assets/6223f0c5-2027-4a20-a81f-31f3fa476bf5" />
* 

*Exit


<img width="463" height="210" alt="Screenshot 2026-04-05 201817" src="https://github.com/user-attachments/assets/3511aab4-d951-411f-ad73-8d01cff938f6" />
*










