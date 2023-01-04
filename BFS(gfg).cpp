#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
    int V;
    vector<list<int>> adj; //adjacency list
    Graph(int V){ //V->no of vertices
        this->V=V;
        adj.resize(V);
    }
    void addEdge(int u,int v){
        adj[u].push_back(v); //adding u to v's list
    }
    void BFS(int s){ //s is the source node
        //create a visited array and mark all as false
        vector<bool> visited;
        visited.resize(V,false);
        //creating queue for bfs
        list<int> queue;
        //marking the source node as visited and pushing into the queue
        visited[s]=true;
        queue.push_back(s);
        while(!queue.empty()){
            //dequeing the vertex and printing it
            s=queue.front();
            cout<<s<<" ";
            queue.pop_front();
            
           // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
            for(auto adjacent : adj[s]){
                if(!visited[adjacent]){
                    visited[adjacent]=true;
                    queue.push_back(adjacent);
                }
            }
        }
    }
};
int main(){
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 0) \n";
    g.BFS(0);
}
