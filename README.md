# ONLINE-BOOKSTORE
📚 ONLINE BOOKSTORE CATEGORY MANAGEMENT SYSTEM (C Programming)
📄 ABSTRACT

The Online Bookstore Category Management System is a terminal-based application written in C that allows users to efficiently manage book categories using a tree data structure.
The system supports operations such as adding, displaying, searching, updating, and deleting categories in a hierarchical structure. Each category can have multiple subcategories, forming a tree-like representation of a bookstore.
This project demonstrates core C programming concepts including structures, pointers, recursion, dynamic memory allocation, and tree data structures, making it ideal for academic projects and learning data structures.

✨ FEATURES
Core Functionalities

➕ Add new categories and subcategories
🌳 Display category hierarchy in tree format
🔍 Search categories by name
✏️ Update existing category names
❌ Delete categories along with their subcategories
🧠 Uses tree data structure for hierarchical storage
🖥️ Menu-driven terminal interface
👨‍💻 Beginner-friendly structured code
⚡ Fast operations using recursion

🛠️ TECHNICAL REQUIREMENTS

System Requirements
Operating System: Windows / Linux / macOS
Terminal or Command Prompt
Minimum RAM: 4 MB
Software Requirements
C Compiler: GCC / MinGW / Clang / MSVC
Code Editor / IDE: VS Code, Code::Blocks, Dev-C++, etc.
Programming Requirements
Language: C
Standard Supported: C89 / C99 / C11

Header Files Used:

stdio.h
stdlib.h
string.h
📌 FUNCTIONAL REQUIREMENTS
User Interface
Terminal-based CLI
Menu-driven navigation
User-friendly prompts and messages

📚 Category Operations

➕ Add Category
Add a new category under an existing parent category

📋 Display Categories
Displays all categories in hierarchical (tree) format

🔍 Search Category
Finds a category using its name

✏️ Update Category

Rename an existing category
❌ Delete Category
Deletes a category and all its subcategories
🌳 DATA STRUCTURE USED
General Tree

Each node contains:
Category name
List of child categories
Number of children
🔧 DATA MANAGEMENT

Dynamic memory allocation using malloc()
Recursive traversal for operations
Safe deletion using subtree deallocation

🔄 PROGRAM FLOW

Menu runs in a loop
User selects operations
Tree updates dynamically
Exit option available
Displays success/error messages

💻 SAMPLE OUTPUT
===== Online Bookstore Menu =====
1. Add Category
2. Display Categories
3. Update Category
4. Delete Category
5. Exit

Enter choice: 1
Enter parent category: Books
Enter new category name: Fiction
Category added successfully!

Enter choice: 2

Category Tree:
- Books
  - Fiction
▶️ RUNNING THE PROGRAM
1️⃣ Compile
gcc main.c -o bookstore
2️⃣ Run
Linux / macOS
./bookstore
Windows
bookstore.exe
⚠️ LIMITATIONS

Maximum 10 subcategories per category
Category names should not contain spaces
No file storage (data is lost after program exit)

🔮 FUTURE IMPROVEMENTS
📁 Add file handling for persistent storage
🔎 Improve search (case-insensitive)
📊 Use dynamic arrays for unlimited children
🖥️ Develop GUI version
