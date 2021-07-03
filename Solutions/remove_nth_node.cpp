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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp,*ne;
        int count=0;
        temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        temp=head;
        n=count-n;
        if(n==0){
            head=head->next;
            return head;
        }
        else{
        while(n--){
            ne=temp;
            temp=temp->next;
        }
        ne->next=temp->next;
        delete(temp);
        }
        return head;
    }
};

void display(ListNode*root) {
    while(root != nullptr) {
        cout<<root->val<<" ";
        root = root->next;
    } 
}

int main( ) {
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    int n=2;

    Solution s;
    ListNode *ans = s.removeNthFromEnd(head,n);
    display(ans);
    return 0;
}