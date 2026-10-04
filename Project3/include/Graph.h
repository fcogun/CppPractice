#pragma once

#include <vector>

class Graph
{
public:
	Graph(int numOfVertices, bool isDirected = false) : V(numOfVertices), adj(numOfVertices), directed(isDirected) {};

	void addEdge(int i, int j)
	{
		adj[i].push_back(j);
		if (!directed)
			adj[j].push_back(i); // undirected graph
	}

	void bfs(int startIndex);

	void dfs(int startIndex);

	void dispAdjacencies();

	int countComponents();

	std::vector<int> topologicalSort();

	std::vector<int> shortestPath(int node);

private:
	int V; // vertices
	std::vector<std::vector<int>> adj; // adjacency list
	const bool directed;

	void dfsRecursive(int ind, std::vector<bool>& visited);
};