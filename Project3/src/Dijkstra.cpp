#include <queue>
#include <vector>


std::vector<int> dijkstra(int start, const std::vector<std::vector<std::pair<int, int>>>& adj)
{
	int V = adj.size();
	std::vector<int> distVec(V, INT_MAX);

	std::priority_queue<std::pair<int,int>, std::vector<std::pair<int, int>>, std::greater<>> pq; // min-heap
	pq.push({ 0, start }); // distance , node
	distVec[start] = 0;

	while (!pq.empty())
	{
		auto [dist, node] = pq.top();
		pq.pop();

		if (distVec[node] < dist)
			continue;

		for (auto [neig, weight] : adj[node])
		{
			if (distVec[neig] > weight + distVec[node])
			{
				distVec[neig] = dist + distVec[node];
				pq.push({ distVec[neig], neig });
			}
		}
	}
	return distVec;
}