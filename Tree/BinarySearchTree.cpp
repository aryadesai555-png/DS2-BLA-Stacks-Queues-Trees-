#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BST {
private:
    Node* root;

    Node* insert(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }

        if (value < node->data) {
            node->left = insert(node->left, value);
        }
        else if (value > node->data) {
            node->right = insert(node->right, value);
        }
        else {
            cout << "Duplicate " << value
                 << " ignored." << endl;
        }

        return node;
    }

    void inorder(Node* node) {
        if (node == nullptr)
            return;

        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    void preorder(Node* node) {
        if (node == nullptr)
            return;

        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    void postorder(Node* node) {
        if (node == nullptr)
            return;

        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }

    Node* findMin(Node* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

public:
    BST() {
        root = nullptr;
    }

    void insert(int value) {
        root = insert(root, value);
    }

    void showTraversals() {
        cout << "Inorder: ";
        inorder(root);
        cout << endl;

        cout << "Preorder: ";
        preorder(root);
        cout << endl;

        cout << "Postorder: ";
        postorder(root);
        cout << endl;
    }

    void showRoot() {
        if (root != nullptr) {
            cout << "Root: " << root->data << endl;
        }
    }

    void showPredecessorSuccessor(int value) {
        Node* current = root;
        Node* predecessor = nullptr;
        Node* successor = nullptr;

        while (current != nullptr) {
            if (value < current->data) {
                successor = current;
                current = current->left;
            }
            else if (value > current->data) {
                predecessor = current;
                current = current->right;
            }
            else {
                break;
            }
        }

        if (current == nullptr) {
            cout << value << " was not found." << endl;
            return;
        }

        if (current->left != nullptr) {
            predecessor = current->left;
            while (predecessor->right != nullptr) {
                predecessor = predecessor->right;
            }
        }

        if (current->right != nullptr) {
            successor = current->right;
            while (successor->left != nullptr) {
                successor = successor->left;
            }
        }

        cout << "For " << value << ":" << endl;

        if (predecessor != nullptr)
            cout << "Predecessor: "
                 << predecessor->data << endl;
        else
            cout << "Predecessor: None" << endl;

        if (successor != nullptr)
            cout << "Successor: "
                 << successor->data << endl;
        else
            cout << "Successor: None" << endl;
    }
};

int main() {

    // Original dataset
    int values[] = {
        50, 30, 70, 20, 40,
        60, 80, 30, 70, 10,
        35, 65, 90, 55, 75
    };

    int size = 15;

    cout << "Original array:" << endl;

    for (int i = 0; i < size; i++) {
        cout << values[i] << " ";
    }

    cout << endl << endl;

    cout << "Building BST..." << endl;

    BST tree;

    for (int i = 0; i < size; i++) {
        tree.insert(values[i]);
    }

    cout << endl;

    tree.showRoot();

    cout << endl;

    tree.showTraversals();

    cout << endl;

    tree.showPredecessorSuccessor(50);

    return 0;
}


