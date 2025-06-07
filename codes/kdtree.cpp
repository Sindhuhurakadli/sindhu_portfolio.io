class Node:
    def __init__(self, point, depth=0, left=None, right=None):
        self.point = point      # k-dimensional point (e.g., [2, 3])
        self.left = left        # Left subtree
        self.right = right      # Right subtree
        self.depth = depth      # Depth of node in tree

class KDTree:
    def __init__(self, k):
        self.k = k             # Number of dimensions
        self.root = None       # Root node

    def insert(self, point):
        def _insert_rec(node, point, depth):
            if node is None:
                return Node(point, depth)

            cd = depth % self.k  # Current dimension

            if point[cd] < node.point[cd]:
                node.left = _insert_rec(node.left, point, depth + 1)
            else:
                node.right = _insert_rec(node.right, point, depth + 1)
            return node

        self.root = _insert_rec(self.root, point, 0)

    def search(self, point):
        def _search_rec(node, point, depth):
            if node is None:
                return False
            if node.point == point:
                return True

            cd = depth % self.k

            if point[cd] < node.point[cd]:
                return _search_rec(node.left, point, depth + 1)
            else:
                return _search_rec(node.right, point, depth + 1)

        return _search_rec(self.root, point, 0)

    def preorder(self):
        def _preorder(node):
            if node is not None:
                print(node.point)
                _preorder(node.left)
                _preorder(node.right)
        _preorder(self.root)


# Example usage
if __name__ == "__main__":
    k = 2  # 2-dimensional KD Tree
    points = [[3, 6], [17, 15], [13, 15], [6, 12],
              [9, 1], [2, 7], [10, 19]]

    tree = KDTree(k)
    for point in points:
        tree.insert(point)

    print("Preorder traversal of KD Tree:")
    tree.preorder()

    search_point = [10, 19]
    if tree.search(search_point):
        print(f"\nPoint {search_point} found in the KD Tree.")
    else:
        print(f"\nPoint {search_point} not found in the KD Tree.")
