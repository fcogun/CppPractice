#pragma once

#include <vector>

class Graph
{
public:
	Graph(int numOfVertices) : V(numOfVertices), adj(numOfVertices) {};

	void addEdge(int i, int j)
	{
		adj[i].push_back(j);
		adj[j].push_back(i); // undirected graph
	}

	void bfs(int startIndex);

	void dfs(int startIndex);

	void dispAdjacencies();

	int countComponents();

	std::vector<int> shortestPath(int node);

private:
	int V; // vertices
	std::vector<std::vector<int>> adj; // adjacency list

	void dfsRecursive(int ind, std::vector<bool>& visited);
};