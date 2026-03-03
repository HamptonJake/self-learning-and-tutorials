class LinkedListNode:
    def __init__(self, value, nextNode = None):
        self.value = value
        self.nextNode = nextNode


class LinkedList:
    

    def __init__(self, head = None):
        self.head = None

    
    def get(self, index: int) -> int:
        if self.head is not None:

            currentNode = self.head
            nodectr = 0

            while currentNode is not None:
                if nodectr == index:
                    return currentNode.value
                nodectr += 1
                currentNode = currentNode.nextNode
        return -1


    def insertHead(self, val: int) -> None:
        node = LinkedListNode(val)
        node.nextNode = self.head
        self.head = node

    def insertTail(self, val: int) -> None:
        node = LinkedListNode(val)

        if self.head is None:
            self.head = node
        else:
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
            lll += [currentNode.value]
            currentNode = currentNode.nextNode
        return lll



linky = LinkedList()
linky.insertTail(1)
linky.insertTail(2)


print("Getting")
print(linky.head.value)
print(linky.get(1))

