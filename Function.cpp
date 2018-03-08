int FindMergeNode(Node *headA, Node *headB)
{
   Node *cur1 = headA;
   Node *cur2 = headB;
   Node *temp;
   int flag=0;
    while(cur1!=NULL)
    {
       cur2 = headB;
       while(cur2!=NULL && flag==0)
       {
          if(cur1==cur2)
          {
             temp = cur2;
             flag=1;
          }
          cur2=cur2->next;       
       }
       cur1=cur1->next;
    }
    return temp->data;
}
bool has_cycle(Node* head) {
   if (head==NULL)
   {
      return false;
   }
   else
   {
       Node *curr = head;
       int visited[500];
       int flag=0;
       for(int i=0;i<101;i++)
       {
           visited[i]=0;
       }
       int index=0;
       while(curr!=NULL && flag==0)
       {
           visited[index]+=1;
           
           curr = curr->next;
           if(visited[index]==2)
           {
               flag=1;
           }
           index++;
       }
       if(flag==1)
           return true;
       else
           return false;
   }
}
