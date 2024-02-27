#include <stdio.h>
#include<stdlib.h>


struct ListNode
{
    int val;
    struct ListNode *next;
};

void traverseNode(struct ListNode* node)
{
    if (node)
    {
        printf("%d", node->val);
        traverseNode(node->next);
    }
}

void addLastNode(struct ListNode* node, int number)
{
    if (node->next==NULL)
    {
        node->next = malloc(sizeof(struct ListNode));
        if (node->next)
        {
            node->next->val = number;
            node->next->next = NULL;
        }
        
    }
    else
    {
        node = node->next;
        addLastNode(node, number);
    }
}

//两数之和
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
    struct ListNode* dummy = malloc(sizeof(struct ListNode));
    if (dummy)
    {
        struct ListNode* cur = dummy;
        int t = 0;
        while (l1 || l2 || t)
        {
            if (l1) t += l1->val, l1 = l1->next;
            if (l2) t += l2->val, l2 = l2->next;
            cur->next = malloc(sizeof(struct ListNode));
            cur->next->val = t % 10;
            cur->next->next = NULL;
            cur = cur->next;
            t /= 10;
        }
        return dummy->next;
    }
}

int main()
{
    struct ListNode* dummy1 = malloc(sizeof(struct ListNode)); 
    struct ListNode* dummy2 = malloc(sizeof(struct ListNode));
    if (dummy1 && dummy2)
    {
        dummy1->next = NULL;
        dummy2->next = NULL;
        int i = 0;
        for (i = 7; i < 10; i++)
        {
            addLastNode(dummy1, i);
            addLastNode(dummy2, i);
        }
        struct ListNode* l1 = dummy1->next;
        struct ListNode* l2 = dummy2->next;
        traverseNode(addTwoNumbers(l1, l2));
    }
    return 0;
}