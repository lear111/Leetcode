
import math
class ListNode:
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next

def addTwoNumbers(l1,l2):
    t = 0
    lk = ListNode
    head = lk
    while l1 or l2 or t:
        if l1:
            t+=l1.val
            l1=l1.next
        if l2:
            t+=l2.val
            l2=l2.next
        lk.next = ListNode(0, None)
        lk = lk.next
        lk.val = t%10
        t = t//10
    return head.next

def print_linklist(lk):
    while lk:
        print(lk.val)
        lk = lk.next

if __name__ == '__main__':
    l1=ListNode(0,None)
    l2=ListNode(0,None)
    l1.val=8
    l1.next=ListNode(0,None)
    l1.next.val=1
    l1.next.next=ListNode(0,None)
    l1.next.next.val=2
    l1.next.next.next = ListNode(0,None)
    l2.val = 9
    l2.next = ListNode(0,None)
    l2.next.val = 1
    l2.next.next = ListNode(0,None)
    l2.next.next.val = 8
    l2.next.next.next = ListNode(0,None)
    lk = addTwoNumbers(l1,l2)
    print_linklist(lk)



