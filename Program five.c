from collections import defualtdict, deque

class WeightedGraph:
    def __init__(self):
        self.graph = defaultdict(list)

    def add_edge(self, src, dest, weight):
        self.graph[src].append((dest,weight))

        def dfs(self, start):
            visited = set()
            path = []
            cost = 0

            def dfs_until(node):
                nonlocal cost
                visited.add(node)
                path.append(node)
                for neighbor, wieght in self.graph[node]:
                            if neighbor not in visted:
                                cost += weight
                                dfs_util(nieghbor)
             dfs_util(start)
             return path, cost


        def bfs(self, start):
            visited = set()
            queue = deque([(start, 0)])
            path = []
            cost = 0

        while queue:
                node, current_cost = queue.popleft()
                if node not in visited:
                    visited.add(node)
                    path.append(node)
                    cost += current_cost
                    for neighbor, weight in self.graph[node]:
                        if neighbor not in visited:
                            queue.append((neighbor, wieght))

        return path, cost

        def find_path(self, src, dest):
            visited = set()
        stack = [(src, [src], 0)]

        while stack:
                node,path, cost = stack.pop()
                if node == dest:
                    return path, cost
                    visited.add(node)
                    for neighbor, weight in selg.graph[node]:
                        if nieghbor not in visited:
                            stack.append((neighbor, path + [neighbor], cost + weight))

                    return None, None


    def main():
        g = WeightedGraph()
        g.add_edge('A', 'B', 10)
        g.add_edge('A', 'C', 12)
        g.add_edge('B', 'C', 20)
        g.add_edge('E', 'A', 7)
        g.add_edge('C', 'D', 32)
        g.add_edge('A', 'D', 60)

    dfs_path, dfs_cost = g.dfs('E')
    print(f"DFS Path: {dfs_path}, DFS Cost: {dfs_cost}")

    bfs_path, bfs_cost = g.bfs('E')
    print(f"BFS Path: {bfs_path}, BFS Cost : {bfs_cost}")

    src, dest = 'E', 'D'
    path, cost = g.find_path(src, dest)
    if path:
    print(f"Path from {src} to {dest}: {path}, Cost: {cost}")
    else:
    print(f"No path exists from {src} to {dest}.")

    if __name__ == "__main__":
            main()
