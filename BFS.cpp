#include <bits/stdc++.h>
using namespace std;

struct Graph
{   
    int V;
    vector<list<int>> network;

    Graph(int s);
    void addEdge(int s, int v);
    void BFS(int s);

};
Graph::Graph(int V){this->V = V; network.resize(V);}
void Graph::addEdge(int s, int v)
{
    network[s].push_back(v);
}
void Graph::BFS(int s)
{
    vector<bool> visited;
    visited.resize(V, false);
    
    list<int> Queue;
    visited[s] = true;
    Queue.push_back(s);
    while(!Queue.empty())
    {
        s=Queue.front();
        cout<<s<<" ";
        Queue.pop_front();
        for(int adjacent:network[s])
        {
            if(visited[adjacent]!=true)
            {
                visited[adjacent] = true;
                Queue.push_back(adjacent);
            }
        }
    }
}

int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.BFS(0 );
}