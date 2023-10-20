#include <iostream>
struct tstnode *insertintst(struct tst *root, char *word)
{
    if(root == NULL){
        root =( struct tstnode *)malloc(sizeof(struct tstnode));
        root->data = *word;
        root->End_Of_String = 1;
        root->left = root->eq = root->right = NULL;

    }
}
// Define the structure for a binary tree node
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert a new node into the binary tree
TreeNode* insert(TreeNode* root, int data) {
    if (root == nullptr) {
        return new TreeNode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

// Function to perform an in-order traversal of the binary tree
void inOrderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    inOrderTraversal(root->left);
    std::cout << root->data << " ";
    inOrderTraversal(root->right);
}

int searchInTree(struct tstnode *root, char *word)
{
    if(!root){
        return -1;

    }
    if(*word < root->data){
return searchInTree(root->left,word);
    }

else{
    if(root-> is_End_Of_String && *(word+1) == 0)
    {
        return 1;

    }
    return searchInTree(root->eq, ++word);
}
}
int SearchInTreeNonRecursive(struct tst *root, char *word)
{
while(root){
    if(*word < root->data){
        root = root->left;

    }
    else if(*word < root->data){
        if(root->is_End_Of_String && *(word+1) == 0){
            return 1;
        }
        word++;
        root = root->eq;

    }
    else{
        root= root->right;
    }

}
return -1;
}


int main() {
    TreeNode* root = nullptr;

    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 2);
    root = insert(root, 4);

    std::cout << "In-order traversal of the binary tree: ";
    inOrderTraversal(root);
    std::cout << std::endl;

    return 0;


    
}

