#include <bits/stdc++.h>
using namespace std;

struct Graph
{
    int V;
    vector<list<int>> network;

    Graph(int V);
    void addEdge(int s, int v);
    void performDFS(int s);
};

Graph::Graph(int V)
{
    this->V = V;
    network.resize(V);
}

void Graph::addEdge(int s, int v)
{
    network[s].push_back(v);
}

void Graph::performDFS(int s)
{
    vector<bool>visited;
    visited.resize(V, false);
    list<int> Stack;
    Stack.push_back(s);
    while(!Stack.empty())
    {
        s = Stack.back();
        Stack.pop_back();
        if(visited[s])
            continue;
        visited[s] = true;
        cout<<s<<" ";
        for(list<int>::reverse_iterator rit = network[s].rbegin();
        rit!=network[s].rend();
        ++rit)
        {
            if(!visited[*rit])
            {
                Stack.push_back(*rit);
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
    g.performDFS(2);
}