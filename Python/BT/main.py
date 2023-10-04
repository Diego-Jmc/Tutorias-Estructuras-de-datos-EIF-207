import queue


class Node:

    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None



class BST:

    def __init__(self):
        self.root = None


    def insert_node(self,data,root):

        if data  < root.data:
            if root.left:
                self.insert_node(data,root.left)
            else:
                root.left = Node(data)
        else:
            if root.right:
                self.insert_node(data,root.right)
            else:
                root.right = Node(data)


    def height(self,node):
        if node is None:
            return 0

        left_height = self.height(node.left) +1
        right_height = self.height(node.right) +1

        if left_height > right_height:
            return left_height

        return right_height


    #wrapper para funcion height()
    def get_height(self):
        return self.height(self.root)
    def insert(self,value):
       if self.root is None:
           self.root = Node(value)
       else:
           self.insert_node(value,self.root)

    def bfs(self):
        if self.root is None:
            return

        cola = queue.Queue()
        cola.put(self.root)
        while not cola.empty():
            temp = cola.get()
            print(temp.data)

            if temp.left:
                cola.put(temp.left)

            if temp.right:
                cola.put(temp.right)

    def post_orden(self, node):

        if node.left:
            self.post_orden(node.left)

        if node.right:
            self.post_orden(node.right)

        print(node.data)

    def pre_orden(self,node):

        if node:
            print(node.data)


        if node.left:
            self.pre_orden(node.left)

        if node.right:
            self.pre_orden(node.right)

    def print_pre_orden(self):
        self.pre_orden(self.root)

    def print_post_orden(self):
        self.post_orden(self.root)

    def in_order(self,node):

        if node is None:
            return

        if node.left:
            self.in_order(node.left)

        print(node.data)

        if node.right:
            self.in_order(node.right)


    def print_in_order(self):
        self.in_order(self.root)

tree = BST()

tree.insert(30)
tree.insert(35)
tree.insert(25)
tree.insert(5)
tree.insert(28)
tree.insert(40)
tree.insert(31)
tree.insert(70)

print("IN-ORDER")
tree.print_in_order()

print("POST ORDEN")
tree.print_post_orden()

print("PRE ORDEN")
tree.print_pre_orden()

print("Altura del arbol (Empezando en 1) :")
print(tree.get_height())
