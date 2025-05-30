class Graph
{
    int V;                          // No. of vertices
    list<int> *adj;                 // Pointer to an array containing adjacency lists
public:
    Graph(int V);                    // Constructor
    void addEdge(int v, int w);             // function to add an edge to graph
    void BFS(int s);                    // prints BFS traversal from a given source s
    void DFS(int s);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V]; //list of V list
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}


  void Graph::DFS(int s)
        {
                 //mark unvisited to each node
        bool *visited  = new bool[V];
        for(int i = 0; i<V; i++)
            visited[i] =false;
        int *d = new int[V];  //discovery
        int *f = new int[V]; //finish time

        int t = 0;       //time

        //now mark current node to visited
        visited[s] =true;
        d[s] = t;            //recored the discover time

        list<int> stack;

        list<int>::iterator i;

        stack.push_front(s);
        cout << s << " ";

        while(!(stack.empty()))
        {
            s= stack.front();
            i = adj[s].begin();

            while ( (visited[*i]) && (i != --adj[s].end()) )
            {
                ++i;
            }
            while ( (!visited[*i])  )
            {

                visited[*i] =true;
                t++;
                d[*i] =t;
                if (i != adj[s].end())
                    stack.push_front(*i);

                cout << *i << " ";
                i = adj[*i].begin();

            }

            s = stack.front();
            stack.pop_front();
            t++;
            f[s] =t;

        }
        cout<<endl<<"discovery time of the nodes"<<endl;

        for(int i = 0; i<V; i++)
        {
            cout<< i <<" ->"<< d[i] <<"    ";
        }
        cout<<endl<<"finish time of the nodes"<<endl;

        for(int i = 0; i<V; i++)
        {
            cout<< i <<" ->"<< f[i] <<"   ";
        }

    }

         int main()
         {
        // Create a graph given in the above diagram
        Graph g(5);
        g.addEdge(0, 1);
        g.addEdge(0, 4);
        g.addEdge(1, 4);
        g.addEdge(1, 2);
        g.addEdge(1, 3);
        g.addEdge(3, 4);
        g.addEdge(2, 3);


        cout << endl<<"Following is Depth First Traversal (starting from vertex 0) \n"<<endl;
        g.DFS(0);

        return 0;
    }
