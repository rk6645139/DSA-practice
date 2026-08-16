/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
 ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;

        while(head) {
            ListNode* nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }
        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode*cur1=l1;
        ListNode* cur2=l2;

        stack<int>s1, s2;

        while(cur1!=NULL){
            s1.push(cur1->val);
            cur1=cur1->next;
        }
        while(cur2!=NULL){
            s2.push(cur2->val);
            cur2=cur2->next;
        }

        ListNode *head=new ListNode();

        ListNode* curr=head;
        int carry=0;

        while(!s1.empty() || !s2.empty() ||carry){

            int sum=carry;
            
            
            if(!s1.empty()){
                sum+=s1.top();
                s1.pop();


            }
             if(!s2.empty()){
                sum+=s2.top();
                s2.pop();
                

            }
            curr->next=new ListNode();
            curr=curr->next;

            curr->val=sum%10;
            carry=sum/10;
            // curr->val=((s1.top()+s2.top())%10);
            // s1.pop();
            // s2.pop();
            // carry=(s1.top()+s2.top())/10;
            
        }
        head=head->next;

        // string n1="";
        // while(cur1!=NULL){
        // n1+=(to_string(cur1->val));
        // cur1=cur1->next;
        // }
        // string n2="";
        // while(cur2!=NULL){
        // n2+=(to_string(cur2->val));
        // cur2=cur2->next;
        // }

        // long long num1=stoll(n1);
        // long long num2=stoll(n2);
        // long long sum=num1+num2;

        // string ssum=to_string(sum);

        // ListNode* head=new ListNode();
        // ListNode* curr=head;

        // // curr->val=sum%10;
        // // cur->val=stoi(ssum[0]);
        // // sum/=10;
        // for(int i=0; i<ssum.length();i++){
             
        //     curr->next=new ListNode(ssum[i] - '0');
        //     curr=curr->next;
        //     // curr->val=(ssum[i]-'0');
           
        //     // sum/=10;
        // }
        return reverseList(head);


        


        
    }
};