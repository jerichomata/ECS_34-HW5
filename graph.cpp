#include "graph.hpp"

#include <iostream>
#include <fstream> 
#include <string>

using namespace std;



UnweightedGraph::UnweightedGraph(const std::string& filename)
{
    // TODO: Implement.
    
    string line;

    int a;
    int b;

    vector<int> v; 

    ifstream myfile (filename);
    if (!myfile.is_open())
    {
        cout << FAILED_OPEN_MSG << endl;
        exit (EXIT_FAILURE); // need exit failure for invalid data
    } else
    {
        
        if(myfile >> numVert)
        {
            printf("first line is = %d\n", numVert);
        }
        while (!myfile.eof()) 
        {

            try
            {
                cout << "lol" << endl;
                myfile >> a >> b;
            }
            catch (int e) 
            {
                cout << INVALID_GRAPH_MSG << endl;
                exit(EXIT_FAILURE);
            }
            Edge edge;
            edge.vert1 = a;
            edge.vert2 = b;

            // printf("a= %d\n", a);
            // printf("b= %d\n", b);
            // printf("======\n");
            
            edges.push_back(edge);
            
        }
    }
    for(int i=0; i < edges.size(); i++)
    {
        cout << edges[i].vert1 << " " << edges[i].vert2 << endl;
        
    }

}

int UnweightedGraph::getNumVertices() const
{
    // TODO: Implement. The below return statement is here to prevent compiler errors.
    
    return numVert;
}

std::vector<std::vector<bool>> UnweightedGraph::getAdjacencyMatrix() const
{
    // TODO: Implement. The below return statement is here to prevent compiler errors.
    return std::vector<std::vector<bool>>();
}

std::vector<std::vector<int>> UnweightedGraph::getAdjacencyLists() const
{
    // TODO: Implement. The below return statement is here to prevent compiler errors.
    return std::vector<std::vector<int>>();
}

std::vector<int> UnweightedGraph::getBFSOrdering(int start) const
{
    // TODO: Implement. The below return statement is here to prevent compiler errors.
    return std::vector<int>();
}

std::vector<int> UnweightedGraph::getDFSOrdering(int start) const
{
    // TODO: Implement. The below return statement is here to prevent compiler errors.
    return std::vector<int>();
}

std::vector<std::vector<bool>> UnweightedGraph::getTransitiveClosure() const
{
    // TODO: Implement. The below return statement is here to prevent compiler errors.
    return std::vector<std::vector<bool>>();
}
