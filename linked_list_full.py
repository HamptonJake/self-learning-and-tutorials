

class linkedListNode:
    def __init__(self, value, nextNode=None):
        self.value = value
        self.nextNode = nextNode


class linkedList:
    def __init__(self, head = None):
        self.head = head


    def insert(self, value):
        node = linkedListNode(value)

        if self.head is None:
            self.head = node
            return
        currentNode = self.head
        while True:
            if currentNode.nextNode is None:
                currentNode.nextNode = node
                break
            currentNode = currentNode.nextNode

    def printLinkedList(self):
        currentNode = self.head

        while currentNode is not None:
            print(currentNode.value, "-> ", end="")
            currentNode = currentNode.nextNode
        print("None")
            


# Testing the constructor

linky = linkedList()
linky.insert("13")
linky.insert("5")
linky.insert("4")
linky.printLinkedList()