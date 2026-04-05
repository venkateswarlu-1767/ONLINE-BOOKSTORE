#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHILDREN 10
#define MAX_NAME 50

// Tree Node
typedef struct Category
{
    char name[MAX_NAME];
    struct Category *children[MAX_CHILDREN];
    int childCount;
} Category;

// Create Category
Category *createCategory(char name[])
{
    Category *newNode = (Category *)malloc(sizeof(Category));
    strcpy(newNode->name, name);
    newNode->childCount = 0;
    return newNode;
}

// Add Subcategory
void addSubCategory(Category *parent, char name[])
{
    if (parent->childCount < MAX_CHILDREN)
    {
        parent->children[parent->childCount++] = createCategory(name);
        printf("Category added successfully!\n");
    }
    else
    {
        printf("Maximum subcategories reached!\n");
    }
}

// Display Tree
void displayTree(Category *root, int level)
{
    for (int i = 0; i < level; i++)
        printf("  ");
    printf("- %s\n", root->name);

    for (int i = 0; i < root->childCount; i++)
    {
        displayTree(root->children[i], level + 1);
    }
}

// Search Category
Category *searchCategory(Category *root, char name[])
{
    if (strcmp(root->name, name) == 0)
        return root;

    for (int i = 0; i < root->childCount; i++)
    {
        Category *found = searchCategory(root->children[i], name);
        if (found != NULL)
            return found;
    }
    return NULL;
}

// Update Category
void updateCategory(Category *root, char oldName[], char newName[])
{
    Category *node = searchCategory(root, oldName);
    if (node != NULL)
    {
        strcpy(node->name, newName);
        printf("Category updated successfully!\n");
    }
    else
    {
        printf("Category not found!\n");
    }
}

// Free entire subtree (for safe delete)
void freeTree(Category *root)
{
    for (int i = 0; i < root->childCount; i++)
    {
        freeTree(root->children[i]);
    }
    free(root);
}

// Delete Category
void deleteCategory(Category *parent, char name[])
{
    for (int i = 0; i < parent->childCount; i++)
    {
        if (strcmp(parent->children[i]->name, name) == 0)
        {

            // Free complete subtree
            freeTree(parent->children[i]);

            // Shift remaining children
            for (int j = i; j < parent->childCount - 1; j++)
            {
                parent->children[j] = parent->children[j + 1];
            }
            parent->childCount--;

            printf("Category deleted successfully!\n");
            return;
        }
    }
    printf("Category not found under this parent!\n");
}

// Main Function
int main()
{
    Category *root = createCategory("Books");

    int choice;
    char parentName[MAX_NAME], name[MAX_NAME];
    char oldName[MAX_NAME], newName[MAX_NAME];
    Category *parent; // ✅ FIXED: declared outside switch

    while (1)
    {
        printf("\n===== Online Bookstore Menu =====\n");
        printf("1. Add Category\n");
        printf("2. Display Categories\n");
        printf("3. Update Category\n");
        printf("4. Delete Category\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter parent category: ");
            scanf("%s", parentName);
            printf("Enter new category name: ");
            scanf("%s", name);

            parent = searchCategory(root, parentName);
            if (parent != NULL)
                addSubCategory(parent, name);
            else
                printf("Parent category not found!\n");
            break;

        case 2:
            printf("\nCategory Tree:\n");
            displayTree(root, 0);
            break;

        case 3:
            printf("Enter old category name: ");
            scanf("%s", oldName);
            printf("Enter new category name: ");
            scanf("%s", newName);
            updateCategory(root, oldName, newName);
            break;

        case 4:
            printf("Enter parent category: ");
            scanf("%s", parentName);
            printf("Enter category to delete: ");
            scanf("%s", name);

            parent = searchCategory(root, parentName);
            if (parent != NULL)
                deleteCategory(parent, name);
            else
                printf("Parent category not found!\n");
            break;

        case 5:
            printf("Exiting...\n");
            exit(0);

        default:
            printf("Invalid choice!\n");
        }
    }
}