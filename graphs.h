struct node
{
	int vertex;
	struct node* next;
};

struct node* createNode(int v);

struct Graph
{
	int numVertices;
	int* visisted;
	struct node** adjLists;
};

struct Stack
{
	int arr[40];
	int top;
}


struct Graph* createGraph(int);

void addEdge(struct Graph*, int, int);

void printGraph(struct Graph*);

void topologicalSortHelper(int,struct Graph*, struct Stack*);

void topologicalSort(struct Graph*);

struct Stack* createStack();

void push(struct Stack*, int);

int pop(struct Stack*);
