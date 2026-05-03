Node* insert(Node* root, int value) {
    // 1. If the spot is empty, put the new number here
    if(root == NULL)
        return createNode(value);

    // 2. If the new number is smaller than the current node, go LEFT
    if(value < root->data)
        root->left = insert(root->left, value);
    
    // 3. If the new number is bigger, go RIGHT
    else
        root->right = insert(root->right, value);

    // 4. Return the (now updated) tree
    return root;
}
