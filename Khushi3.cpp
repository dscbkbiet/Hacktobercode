#include<iostream>
using namespace std;
class node
{
    public:
        int data;
        node* left;
        node* right;
    node(int d)
    {
        data = d;
        left = NULL; //when both the child are their intialize it with the null 
        right = NULL;
    }
};
node * buildtree(node *root)
{
    int d;
    cin>>d;
    if(d == -1)
    {
        return NULL;
    }
    node *root = new node(d);
    root -> key = key;
    root -> left = NULL;
    root -> right = NULL;
    return root;
}
int size(node * root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        return (size(root->left) + 1 + size(root->right));
    }
}
int height(node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls,rs) + 1;
}
void maxsum(node *root)
{
    queue <node *> q;
    q.push(root);
    while(!q.empty())
    {
        node *f = q.front();
        int max = 0;
        if(max < f->data)
        {
            max = f->data;
        }
        q.pop();
        if(f->left)
        {
            q.push(f->left);
        }
        if(f->right)
        {
            q.push(f->right);
        }
    }
    cout<<max<<endl;
    return;
}
int sum(node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    else 
    {
        return(root->key + sum(root->left) + sum(root->right));
    }
}
int main()
{
    node *root = buildtree();
    cout<<size(root);
    cout<<sum(root);
    maxsum(root);
    cout<<height(root);
}
