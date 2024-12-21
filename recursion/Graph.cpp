#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph {
    public:
         unordered_map<int,list<int> >adj;

         void addEdge(int u,int v,bool directed){
            //direction = 0 -->undirected
            //direction = 1 -->directed.
            
         }
};