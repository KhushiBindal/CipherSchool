class Graph {
	int V;
	list<int>* adj;
	bool isCyclicUtil(int v, bool visited[], int parent);

public:
	Graph(int V);
	void addEdge(int v, int w);
	bool isCyclic();
};

Graph::Graph(int V){
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w){
	adj[v].push_back(w);
	adj[w].push_back(v);
}