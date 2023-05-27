// #include <iostream>
// #include<unordered_map>
// #include <list>
// using namespace std;

// class graph{
//   public:
//   unordered_map<int, list<int> > adj;
//   void addEdge(int u, int v, bool direction){

//     // direction = 0 ->undirected Graph
//     // diretion = 1 -> directed graph

//     // create an edge from u to v

//     adj[u].push_back(v);

//     if(direction == 0)
//     {
//       adj[v].push_back(u);
//     }
//   }

//   void printAdjList(){
//     for(auto i:adj){
//       cout << i.first << "->";
//       for(auto j: i.second){
//         cout << j << ",";
//       }
//       cout<<endl;
//     }
//   }
// };

// int main(){

//   int n;
//   cout<<"Enter the number of Nodes" << endl;
//   cin>>n;

//   int m;
//   cout << "Enter the number of Edges: " <<endl;
//   cin>>m;

//   graph g;

//   for(int i=0; i<m; i++){
//     int u,v;
//     cin>> u >> v;
// // creating Undirected graph
//     g.addEdge(u,v, 0);
//   }

//   g.printAdjList();


//   return 0;
// }

// #include <iostream>
// #include <unordered_map>
// #include <list>

// using namespace std;

// class graph{
//   public:
//   unordered_map <int, list<int> > adj;
//   void addEdge(int u, int v, bool direction){
//     adj[u].push_back(v);
//     if(direction == 0){
//       adj[v].push_back(u);
//     }
//   }

//   void printAdjList(){
//     for(auto i:adj){
//       cout<<i.first<<"->";
//       for(auto j: i.second){
//         cout<<j<<",";
        
//       }
//       cout<<endl;
//     }
//   }

// };

//  int main(){
//   int n;
//   cout<<"Enter the no of Nodes:"<<endl;
//   cin>>n;

//   int m;
//   cout<<"Enter the no. of Edges: " <<endl;
//   cin>>m;

//   graph g;

//   for(int i=0; i<m; i++){
//     int u,v;
//     cin>> u >> v;
//     g.addEdge(u,v,0);

//   }

//   g.printAdjList();

//   return 0;
// }



// #include <iostream>
// #include <unordered_map>
// #include <list>

// using namespace std;

// class graph{
//   public:
//   unordered_map <int, list <int> > adj;
//   void addEdge(int u, int v, bool direction){

//     adj[u].push_back(v);

//     if(direction == 0){
//       adj[v].push_back(u);
//     }

//   }

//   void printAdjList(){
//     for(auto i:adj){
//       cout<< i.first <<"->";
//       for(auto j: i.second){
//         cout<< j <<",";
//       }
//     }
//     cout<<endl;
//   }
// };

// int main(){

//   int n;
//   cout<<"Enter the number of Nodes: ";
//   cin>> n;

//   int m;
//   cout<<"Enter the no of Edges:";
//   cin>> m;

//   graph g;

//   for( int i=0; i<m; i++){
//     int u,v;
//     cin>> u >>v;

//     g.addEdge(u,v,0);
//   }

//   g.printAdjList();

//   return 0;

// }

#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

class graph{
  public:

  unordered_map<int, list<int> >adj;
  void addEdge(int u, int v, bool direction){
     adj[u].push_back(v);

     if(direction == 0){
      adj[v].push_back(u);
     }
  }


  void printAdjList(){
    for(auto i:adj){
      cout<< i.first <<"->";
      for(auto j: i.second){
        cout<< j <<",";

      }cout<<endl;
      
    }
    
    
    
  }
};

int main(){
  int n;
  cout<<"Enter the no of Nodes: "<<endl;
  cin>>n;

  int m;
  cout<<"Enter the no of Edges: " <<endl;
  cin>>m;

  graph g;
  for(int i=0;i<m; i++){
    int u,v;
    cin>> u >> v;
    g.addEdge(u, v, 0);

  }
  g.printAdjList();
  return 0;
}
