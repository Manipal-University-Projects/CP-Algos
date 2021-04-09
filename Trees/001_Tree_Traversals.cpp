

void preorder(Node * root)
{
    if(root)
    {
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node * root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }
}

void postorder(Node * root)
{
    if(root)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data;
    }
}