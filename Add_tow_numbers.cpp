#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;


// Definition for singly-linked list.

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode*temp=new ListNode(-1);
        ListNode*root= temp;
        while (l1 || l2||carry)
        {
            int val= (carry + (l1?l1->val:0)+(l2?l2->val:0));
            carry=val/10;
            root->next=new ListNode(val%10);
            l1=l1?l1->next:NULL;
            l2=l2?l2->next:NULL;
            root=root->next;
        }
        return temp->next;
    }
};


void display(ListNode *root) {
    while(root) {
        cout<<root->val<<" ";
        root = root->next;
    }
    cout<<endl;
}

int main( ) {
    // list one 
    ListNode *l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);


    // list two 
    ListNode *l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    Solution s;
    ListNode *ans = s.addTwoNumbers(l1,l2);
    display(ans);
    
    return 0;
}