
class Node:

    def __init__(self,value,right,left):
        self.value = value
        self.right = right
        self.left = left

class BSTree:

    def __init__(self):
        self.root = None

    def insert_node(self,root,newNode):
        if root == None:
            root=newNode

        if newNode.value < root.value:
            if root.left:
                self.insert_node(root.left,newNode)
            else:
                root.left = newNode

        if newNode.value > root.value:
            if root.right:
                self.insert_node(root.right,newNode)
            else:
                root.right = newNode


    def insert(self,value):
        newNode = Node(value,None,None)

        if self.root == None:
            self.root = newNode
        else:
            self.insert_node(self.root,newNode)

    def get_min(self,root):
        if root.left == None:
            return root.value
        else:
            return self.get_min(root.left)

    def min(self):
        if self.root == None:
            return None
        else:
            return self.get_min(self.root)

    # Implementar una funcion para mostrar todos los elementos
    # IN - ORDER




tree = BSTree()

tree.insert(30)
tree.insert(10)
tree.insert(15)
tree.insert(3)
tree.insert(20)
tree.insert(5)

print(tree.min())


