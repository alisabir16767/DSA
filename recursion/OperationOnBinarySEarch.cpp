#include <iostream>

// Define the structure for a BST node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Function to insert a new node into the BST
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function to find the minimum value node in the BST
Node* findMin(Node* root) {
    while (root->left != nullptr) {
        root = root->left;
    }
    return root;
}

// Function to delete a node from the BST
Node* deleteNode(Node* root, int value) {
    if (root == nullptr) {
        return root;
    }

    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    } else {
        // Node with only one child or no child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children: get the inorder successor (smallest in the right subtree)
        Node* temp = findMin(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Function to search for a node in the BST
bool search(Node* root, int value) {
    if (root == nullptr) {
        return false;
    }

    if (root->data == value) {
        return true;
    } else if (value < root->data) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}

// Function to perform an in-order traversal of the BST
void inOrderTraversal(Node* root) {
    if (root != nullptr) {
        inOrderTraversal(root->left);
        std::cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

// Function to perform a pre-order traversal of the BST
void preOrderTraversal(Node* root) {
    if (root != nullptr) {
        std::cout << root->data << " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

// Function to perform a post-order traversal of the BST
void postOrderTraversal(Node* root) {
    if (root != nullptr) {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        std::cout << root->data << " ";
    }
}

int main() {
    Node* root = nullptr;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    std::cout << "In-order traversal: ";
    inOrderTraversal(root);
    std::cout << std::endl;

    std::cout << "Pre-order traversal: ";
    preOrderTraversal(root);
    std::cout << std::endl;

    std::cout << "Post-order traversal: ";
    postOrderTraversal(root);
    std::cout << std::endl;

    int key = 40;
    if (search(root, key)) {
        std::cout << key << " found in the BST." << std::endl;
    } else {
        std::cout << key << " not found in the BST." << std::endl;
    }

    key = 25;
    if (search(root, key)) {
        std::cout << key << " found in the BST." << std::endl;
    } else {
        std::cout << key << " not found in the BST." << std::endl;
    }

    key = 30;
    root = deleteNode(root, key);
    std::cout << "In-order traversal after deleting " << key << ": ";
    inOrderTraversal(root);
    std::cout << std::endl;

    return 0;
}
