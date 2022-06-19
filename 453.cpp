#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *insertBST(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }

    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        // val > root->data
        root->right = insertBST(root->right, val);
    }

    return root;
}

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

Node *searchInBST(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == key)
    {
        return root;
    }

    // data > key
    if (root->data > key)
    {
        return searchInBST(root->left, key);
    }

    // data < key
    return searchInBST(root->right, key);
}

Node *inOrderSucc(Node *root)
{
    Node *curr = root;

    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }

    return curr;
}

Node *deleteInBST(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (key < root->data)
    {
        root->left = deleteInBST(root->left, key);
    }

    else if (key > root->data)
    {
        root->right = deleteInBST(root->right, key);
    }

    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);

            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);

            return temp;
        }
        // Case 3
        Node *temp = inOrderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
    }
    return root;
}

int main()
{
    Node *root = NULL;
    root = insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 6);

    inOrder(root);

    cout << endl;

    if (searchInBST(root, 2) == NULL)
    {
        cout << "Key doesn't exist"
             << endl;
    }
    else
    {
        cout << "Key exist" << endl;
    }

    root = deleteInBST(root, 5);
    inOrder(root);

    cout << endl;

    if (searchInBST(root, 5) == NULL)
    {
        cout << "Key doesn't exist"
             << endl;
    }
    else
    {
        cout << "key exist" << endl;
    }

    root = deleteInBST(root, 2);
    inOrder(root);

    return 0;
}
