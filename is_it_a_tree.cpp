#include <bits/stdc++.h>
using namespace std;
class Graph {
public:
	int V;
	list<int> *adjList;
	vector<int> tree;
	Graph(int v) {
		V = v;
		adjList = new list<int>[V];
	}
	void addEdge(int u, int v) {
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}
	void bfs(int src) {
		queue<int> q;
		bool *visited = new bool[V]{0};
		q.push(src);
		visited[src] = true;
		while(!q.empty()) {
			int node = q.front();
			tree.push_back(node);
			q.pop();
			for(auto neighbour: adjList[node]) {
				if(!visited[neighbour]) {
					q.push(neighbour);
					visited[neighbour] = true;
				}
			}
		}
	}
};
int main() {
	int n, m, x, y;
	cin >> n >> m;
	Graph g(n);
	if(m != n-1) cout << "NO\n"; // tree has n-1 edges and if there is a cycle in tree it will not have n-1 edges. So it checks for both the cases
	else {
		for(int i = 0; i < m; i++) {
			cin >> x >> y;
			g.addEdge(x-1, y-1);	
		}
		g.bfs(0);
		if(n != g.tree.size())
                	cout << "NO\n";
                else
                	cout << "YES\n";
	}	

	return 0;
}
