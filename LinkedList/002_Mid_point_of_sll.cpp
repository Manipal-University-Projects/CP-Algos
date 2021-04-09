int getMiddle(Node *head)
{
   Node * fast=head;
   Node * slow=head;
   
   while( fast!=NULL && fast->next!=NULL && slow!=NULL)
   {
       fast=fast->next->next;
       slow=slow->next;
   }
   return slow->data;
}
