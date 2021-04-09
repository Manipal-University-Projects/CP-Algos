class Solution
{
    public:
    struct Node* reverseList(struct Node *head)
    {
       struct Node* curr=head;
       struct Node* next=NULL;
       struct Node* prev=NULL;
       
       while(curr!=NULL)
       {
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
       }
       return prev;
    }
};
    
