class solution{
 public ListNode reverseList(ListNode head){
 ListNode curr=head,prev=null,temp=null;
   while(curr!=null){
   temp=curr.next;
     curr.next=prev;
     prev=curr;
     curr=temp;
   
   
   }
 return prev;
 
 }
}
