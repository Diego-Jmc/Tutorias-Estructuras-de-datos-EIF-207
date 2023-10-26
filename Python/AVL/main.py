class Node:
    def __init__(self, key):
        self.key = key
        self.left = None
        self.right = None
        self.height = 1

class AVLTree:
    def getHeight(self, node):
        if node is None:
            return 0
        return node.height

    def getBalance(self, node):
        if node is None:
            return 0
        # altura nodo izq - altura nodo der
        return self.getHeight(node.left) - self.getHeight(node.right)

    def insert(self, root, key):
        if root is None:
            return Node(key)
        if key < root.key:
            root.left = self.insert(root.left, key)
        else:
            root.right = self.insert(root.right, key)

        root.height = 1 + max(self.getHeight(root.left), self.getHeight(root.right))
        balance = self.getBalance(root)

        # Rotaciones para balancear el árbol
        if balance > 1:
            if key < root.left.key:
                return self.rotateRight(root)
            else:
                root.left = self.rotateLeft(root.left)
                return self.rotateRight(root)

        if balance < -1:
            if key > root.right.key:
                return self.rotateLeft(root)
            else:
                root.right = self.rotateRight(root.right)
                return self.rotateLeft(root)

        return root

    def delete(self, root, key):
        if root is None:
            return root
        if key < root.key:
            root.left = self.delete(root.left, key)
        elif key > root.key:
            root.right = self.delete(root.right, key)
        else:
            if root.left is None:
                return root.right
            elif root.right is None:
                return root.left
            root.key = self.getMinValueNode(root.right).key
            root.right = self.delete(root.right, root.key)
        if root is None:
            return root

        root.height = 1 + max(self.getHeight(root.left), self.getHeight(root.right))
        balance = self.getBalance(root)

        if balance > 1:
            if self.getBalance(root.left) >= 0:
                return self.rotateRight(root)
            else:
                root.left = self.rotateLeft(root.left)
                return self.rotateRight(root)

        if balance < -1:
            if self.getBalance(root.right) <= 0:
                return self.rotateLeft(root)
            else:
                root.right = self.rotateRight(root.right)
                return self.rotateLeft(root)

        return root

    def rotateLeft(self, z):
        y = z.right
        T2 = y.left

        y.left = z
        z.right = T2

        z.height = 1 + max(self.getHeight(z.left), self.getHeight(z.right))
        y.height = 1 + max(self.getHeight(y.left), self.getHeight(y.right))

        return y

    def rotateRight(self, y):
        x = y.left
        T2 = x.right

        x.right = y
        y.left = T2

        y.height = 1 + max(self.getHeight(y.left), self.getHeight(y.right))
        x.height = 1 + max(self.getHeight(x.left), self.getHeight(x.right))

        return x

    def getMinValueNode(self, node):
        if node is None or node.left is None:
            return node
        return self.getMinValueNode(node.left)

    def preOrder(self, root):
        if root:
            print(root.key, end=' ')
            self.preOrder(root.left)
            self.preOrder(root.right)

myTree = AVLTree()
root = None

root = myTree.insert(root, 10)
root = myTree.insert(root, 20)
root = myTree.insert(root, 30)
root = myTree.insert(root, 40)
root = myTree.insert(root, 50)
root = myTree.insert(root, 25)

print("Árbol AVL después de la inserción:")
myTree.preOrder(root)

root = myTree.delete(root, 30)

print("\nÁrbol AVL después de la eliminación:")
myTree.preOrder(root)
