#include "Graph.h"

#include <iostream>
#include <queue>
#include <vector>

void Graph::dispAdjacencies()
{
	for (int i = 0; i < V; ++i )
	{
		std::cout << "Node " << i << " neigbors: ";

		for (int neighbor : adj[i])
		{
			std::cout << neighbor << ' ';
		}
		std::cout << '\n';
	}
}


// implement using queue
void Graph::bfs(int startIndex)
{
	std::cout << "\n - BFS - \n";
	std::vector<bool> visited(V);
	visited[startIndex] = true;

	std::queue<int> q;
	q.push(startIndex);

	while (!q.empty())
	{
		int node = q.front();
		q.pop();
		std::cout << node << ' ';

		for (int neighbor : adj[node])
		{
			if (!visited[neighbor])
			{
				visited[neighbor] = true;
				q.push(neighbor);
			}
		}
	}
}

// recursive implementation
void Graph::dfs(int startIndex)
{
	std::cout << "\n - DFS - \n";
	std::vector<bool> visited(V);

	dfsRecursive(startIndex, visited);
}


void Graph::dfsRecursive(int ind, std::vector<bool>& visited)
{
	visited[ind] = true;
	std::cout << ind << ' ';
	
	for (int neigbor : adj[ind])
	{
		if (!visited[neigbor])
		{
			dfsRecursive(neigbor, visited);
		}
	}
}

int Graph::countComponents()
{
	int count = 0;
	std::vector<bool> visited(V);

	for (int i = 0; i < V; ++i)
	{
		if (!visited[i])
		{
			dfsRecursive(i, visited);
			count++;
		}
	}
	return count;
}


std::vector<int> Graph::topologicalSort()
{
	std::vector<int> indegree(V, 0);

	// compute indegree
	for (int v = 0; v < V; ++v)
	{
		for (int n : adj[v])
		{
			indegree[n]++;
		}
	}

	std::queue<int> q;

	// push nodes with 0 indegree
	for (int v = 0; v < V; ++v)
	{
		if (indegree[v] == 0)
		{
			q.push(v);
		}
	}

	std::vector<int> result;

	while (!q.empty())
	{
		int node = q.front(); 
		q.pop();

		result.push_back(node);

		for (int n : adj[node])
		{
			indegree[n]--;
			if (indegree[n] == 0)
			{
				q.push(n);
			}
		}
	}

	return result;
}


std::vector<int> Graph::shortestPath(int node)
{
	std::vector<int> dist(V, INT_MAX);
	std::queue<int> q;

	dist[node] = 0;
	q.push(node);

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		for (int neighbor : adj[cur])
		{
			if (dist[neighbor] == INT_MAX)
			{
				dist[neighbor] = dist[cur] + 1;
				q.push(neighbor);
			}
		}
	}

	return dist;
}
