class LinkedListNode:
    def __init__(self, value, NextNode = None):
        self.value = value
        self.nextNode = NextNode


class LinkedList:
    

    def __init__(self, head = None):
        self.head = None

    
    def get(self, index: int) -> int:
        currentNode = self.head
        nodectr = 0

        while currentNode.next is not None:
            if nodectr == index:
                return currentNode.value
            currentNode = currentNode.NextNode
            if nodectr == index:
                return currentNode.value
        return -1


    def insertHead(self, val: int) -> None:
        node = LinkedListNode(val)
        node.nextNode = self.head

    def insertTail(self, val: int) -> None:
        node = LinkedListNode(val)

        if self.head is not None:
            currentNode = self.head

            while currentNode.nextNode is not None:
                currentNode = currentNode.nextNode
            currentNode.nextNode = node


    def remove(self, index: int) -> bool:
        if self.head is not None:

            currentNode = self.head
            nodectr = 0

            #edge case
            if index == 0:
                self.head = self.head.nextNode
                return True

            #loop
            while currentNode.nextNode is not None:
                if nodectr + 1 == index:
                    currentNode.nextNode = currentNode.nextNode.nextNode
                    return True
                nodectr += 1
                currentNode = currentNode.nextNode

        return False

        

    def getValues(self) -> List[int]:
        lll = []

        currentNode = self.head
        while currentNode is not None:
            print(currentNode.val)
            lll += [currentNode.val]
            currentNode = currentNode.next
        return lll
