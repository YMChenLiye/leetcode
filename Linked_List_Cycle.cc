/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
	if(head==NULL || head->next==NULL || head->next->next==NULL)
	{
		return false;
	}
	struct ListNode *fast=head->next;
	struct ListNode *slow=head;
	while(fast)
	{
		if(fast==slow)
		{
			return true;
		}
		slow=slow->next;
		if(fast->next==NULL || fast->next->next==NULL)
		{
			return false;
		}
		fast=fast->next->next;
	}
	return false;//fast become NULL
}
