#include <bits/stdc++.h>
using namespace std;
class Graph {
public:
	int V, height;
	list<int> *adjList;
	vector<int> dist;
	Graph(int v) {
		V = v;
		height = 0;
		adjList = new list<int>[V];
		dist = vector<int>(V);
	}
	void addEdge(int u, int v) {
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}
	void bfs(int src) {
		queue<int> q;
		q.push(src);
		bool *visited = new bool[V]{0};
		visited[src] = true;
		dist[src] = 0;
		while(!q.empty()) {
			int node = q.front();
			q.pop();
			for(auto neighbour: adjList[node]) {
				if(!visited[neighbour]) {
					q.push(neighbour);
					visited[neighbour] = true;
					dist[neighbour] = dist[node]+1;
				}
			}
		}
	}

};
int main() {
	// Apply bfs 1st time to find the node which is farthest.
	// Then apply bfs on the farthest node to find the longest path in tree.
	// Eg. 1-2, 2-3, 1-4, 4-5, 4-6, 5-7
	// Here if we go from 1 to 7 path length is 3. 
	// But if we go from 7 to 3 path length is 5
	
	int n, x, y, mx = 0, index = 0;
	cin >> n;
	Graph g(n);
	for(int i = 0; i < n-1; i++) {
		cin >> x >> y;
		g.addEdge(x-1, y-1);
	}
	g.bfs(0);
	for(int i = 0; i < g.dist.size(); i++) { 
		if(mx < g.dist[i]) {
			mx = g.dist[i];
			index = i;
		}
		
	}
	g.bfs(index);
	mx = 0;
	for(int j = 0; j < g.dist.size(); j++) {
		if(mx < g.dist[j]) {
			mx = g.dist[j];
		}
	}
	cout << mx << "\n";
	return 0;
}
