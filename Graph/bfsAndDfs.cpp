#include <iostream>
#include <list>
#include <queue>
using namespace std;

class Graph
{ // Declaration
    int V;
    list<int> *l;

public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[V];
    }
    void addEdge(int i, int j, bool undir = true)
    {
        l[i].push_back(j);
        if (undir)
        {
            l[j].push_back(i);
        }
    }

    void print()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << "-->";
            for (auto node : l[i])
            {
                cout << node << ",";
            }
            cout << endl;
        }
    }

    //
    void bfs(int source)
    {
        queue<int> q;
        bool *visited = new bool[V]{0};

        q.push(source);
        visited[source] = true;

        while (!q.empty())
        {
            int f = q.front();
            cout << f << " ";
            q.pop();

            // Push neighbours
            for (auto nbr : l[f])
            {
                if (!visited[nbr])
                {
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
    }
    // dfs helper
    void dfsHelper(int node, bool *visited)
    {
        visited[node] = true;
        cout << node << ",";
        // dfs for unvisited
        for (int nbr : l[node])
        {
            if (!visited[nbr])
            {
                dfsHelper(nbr, visited);
            }
        }
        return;
    }
    // dfs
    void dfs(int source)
    {
        bool *visited = new bool[V]{0};
        dfsHelper(source, visited);
    }
};
int main()
{
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(2, 1);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(2, 3);

    // g.print();
    // g.bfs(0);
    g.dfs(0);
    return 0;
}