#include <iostream>
#include <vector>

using namespace std;

const int k = 2; // Dimensions

struct Node {
    vector<int> point; // Stores k-dimensional point
    Node *left, *right;

    Node(vector<int> arr) : point(arr), left(NULL), right(NULL) {}
};

// Insert a new point into the K-D Tree
Node* insertRec(Node* root, vector<int> point, unsigned depth) {
    if (root == NULL)
        return new Node(point);

    // Calculate current dimension
    unsigned cd = depth % k;

    if (point[cd] < root->point[cd])
        root->left = insertRec(root->left, point, depth + 1);
    else
        root->right = insertRec(root->right, point, depth + 1);

    return root;
}

Node* insert(Node* root, vector<int> point) {
    return insertRec(root, point, 0);
}

// Search a point in the K-D Tree
bool searchRec(Node* root, vector<int> point, unsigned depth) {
    if (root == NULL)
        return false;
    if (root->point == point)
        return true;

    // Calculate current dimension
    unsigned cd = depth % k;

    if (point[cd] < root->point[cd])
        return searchRec(root->left, point, depth + 1);
    else
        return searchRec(root->right, point, depth + 1);
}

bool search(Node* root, vector<int> point) {
    return searchRec(root, point, 0);
}

// Preorder Traversal
void preorder(Node* root) {
    if (root != NULL) {
        cout << "(";
        for (int i = 0; i < k; ++i) {
            cout << root->point[i];
            if (i != k - 1) cout << ", ";
        }
        cout << ")\n";

        preorder(root->left);
        preorder(root->right);
    }
}

// Driver Code
int main() {
    vector<vector<int>> points = {
        {3, 6}, {17, 15}, {13, 15},
        {6, 12}, {9, 1}, {2, 7}, {10, 19}
    };

    Node* root = NULL;
    for (auto& point : points) {
        root = insert(root, point);
    }

    cout << "Preorder traversal of K-D Tree:\n";
    preorder(root);

    vector<int> target = {10, 19};
    if (search(root, target))
        cout << "\nPoint (" << target[0] << ", " << target[1] << ") found in the KD Tree.\n";
    else
        cout << "\nPoint (" << target[0] << ", " << target[1] << ") not found in the KD Tree.\n";

    return 0;
}
