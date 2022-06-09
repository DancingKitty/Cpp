//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

//Graph Bidirectional Implementation

#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
    public:
    unordered_map<T, list<T>> adj;
    void add_edge(T n1, T n2, bool bi=true){
        adj[n1].push_back(n2);
        if(bi) adj[n2].push_back(n1);
    }
    void print(){
        for(auto row: this->adj){
            cout<<row.first<<" = ";
            for(T node : row.second){
                cout<<node<<" ";
            }
            cout<<"\n";
        }
    }
};

int main(){

    Graph<int> g;
    g.add_edge(1,2);
    g.add_edge(3,2);
    g.add_edge(4,2);
    g.add_edge(1,3);
    g.add_edge(1,4);
    g.print();
    return 0;
}