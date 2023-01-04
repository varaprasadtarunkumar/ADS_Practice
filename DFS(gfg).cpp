#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
    map<int,bool> visited;
    map<int,list<int>> adj;
    void addEdge(int u,int v){
        adj[u].push_back(v);
    }
    void DFS(int s){//s->starting node
        // Mark the current node as visited and
      // print it
      visited[s]=true;
      cout<<s<<" ";
      // Recur for all the vertices adjacent
    // to this vertex
      for(int i=adj[v].begin();i !=adj[v].end();++i){
          if(!visited[i]){
              DFS(*i);
          }
      }
    }
    
};
int main(){
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Depth First Traversal"
            " (starting from vertex 0) \n";
 
    // Function call
    g.DFS(0);
 
    return 0;
}
