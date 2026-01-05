class linkedListNode:
    def __init__(self, value, nextNode=None):
        self.value = value
        self.nextNode = nextNode


node1 = linkedListNode("2")
node2 = linkedListNode("k")
node3 = linkedListNode("1")
node4 = linkedListNode("3")

node1.nextNode = node2
node2.nextNode = node3
node3.nextNode = node4


currentNode = node1

while True:
    print(currentNode.value, end="")
    if(currentNode.nextNode) is None:
        break
    currentNode = currentNode.nextNode