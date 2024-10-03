from typing import Optional

class ListNode:
    def __init__(self, val: int = 0, next: Optional['ListNode'] = None):
        self.val = val
        self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        INFINITY = float('inf') 
        if not (list1 or list2):
            return None

        if (list1.val if list1 else INFINITY) < (list2.val if list2 else INFINITY):
            smaller_node, larger_node = list1, list2
        else:
            smaller_node, larger_node = list2, list1

        if smaller_node is not None: ##It is impossible smaller_node to be None but compiler is yelling.
            return ListNode(smaller_node.val, self.mergeTwoLists(smaller_node.next, larger_node))
        return None
