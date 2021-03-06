//=======================================================================
// Copyright 1997, 1998, 1999, 2000 University of Notre Dame.
// Authors: Andrew Lumsdaine, Lie-Quan Lee, Jeremy G. Siek
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=======================================================================
#include <boost/graph/graph_concepts.hpp>
#include <boost/graph/graph_archetypes.hpp>
#include <boost/graph/adjacency_list.hpp>

int main(int,char*[])
{
  using namespace boost;
  // Check adjacency_list with properties
  {
    typedef adjacency_list<vecS, vecS, directedS, 
      property<vertex_color_t, int>,
      property<edge_weight_t, int>
    > Graph;
    typedef graph_traits<Graph>::vertex_descriptor Vertex;
    typedef graph_traits<Graph>::edge_descriptor Edge;
    function_requires< VertexListGraphConcept<Graph> >();
    function_requires< EdgeListGraphConcept<Graph> >();
    function_requires< IncidenceGraphConcept<Graph> >();
    function_requires< AdjacencyGraphConcept<Graph> >();
    function_requires< MutableIncidenceGraphConcept<Graph> >();
    function_requires< MutableEdgeListGraphConcept<Graph> >();
    function_requires< VertexMutablePropertyGraphConcept<Graph> >();
    function_requires< EdgeMutablePropertyGraphConcept<Graph> >();
    function_requires<
      ReadablePropertyGraphConcept<Graph, Vertex, vertex_index_t> >();
    function_requires<
      LvaluePropertyGraphConcept<Graph, Vertex, vertex_color_t> >();
    function_requires<
      LvaluePropertyGraphConcept<Graph, Edge, edge_weight_t> >();
  }
  {
    typedef adjacency_list<vecS, vecS, bidirectionalS, 
      property<vertex_color_t, int>,
      property<edge_weight_t, int>
    > Graph;
    typedef graph_traits<Graph>::vertex_descriptor Vertex;
    typedef graph_traits<Graph>::edge_descriptor Edge;
    function_requires< VertexListGraphConcept<Graph> >();
    function_requires< EdgeListGraphConcept<Graph> >();
    function_requires< IncidenceGraphConcept<Graph> >();
    function_requires< AdjacencyGraphConcept<Graph> >();
    function_requires< BidirectionalGraphConcept<Graph> >();
    function_requires< MutableBidirectionalGraphConcept<Graph> >();
    function_requires< MutableEdgeListGraphConcept<Graph> >();
    function_requires< VertexMutablePropertyGraphConcept<Graph> >();
    function_requires< EdgeMutablePropertyGraphConcept<Graph> >();
    function_requires<
      ReadablePropertyGraphConcept<Graph, Vertex, vertex_index_t> >();
    function_requires<
      LvaluePropertyGraphConcept<Graph, Vertex, vertex_color_t> >();
    function_requires<
      LvaluePropertyGraphConcept<Graph, Edge, edge_weight_t> >();
  }
  {
    typedef adjacency_list< listS, listS, directedS, 
      property<vertex_color_t, int>,
      property<edge_weight_t, int>
    > Graph;
    typedef graph_traits<Graph>::vertex_descriptor Vertex;
    typedef graph_traits<Graph>::edge_descriptor Edge;
    function_requires< VertexListGraphConcept<Graph> >();
    function_requires< EdgeListGraphConcept<Graph> >();
    function_requires< IncidenceGraphConcept<Graph> >();
    function_requires< AdjacencyGraphConcept<Graph> >();
    function_requires< MutableIncidenceGraphConcept<Graph> >();
    function_requires< MutableEdgeListGraphConcept<Graph> >();
    function_requires< VertexMutablePropertyGraphConcept<Graph> >();
    function_requires< EdgeMutablePropertyGraphConcept<Graph> >();
    function_requires< 
      ReadablePropertyGraphConcept<Graph, Vertex, vertex_index_t> >();
    function_requires<
      LvaluePropertyGraphConcept<Graph, Vertex, vertex_color_t> >();
    function_requires<
      LvaluePropertyGraphConcept<Graph, Edge, edge_weight_t> >();
  }
  {
    typedef adjacency_list< listS, listS, undirectedS, 
      property<vertex_color_t, int>,
      property<edge_weight_t, int>
    > Graph;
    typedef graph_traits<Graph>::vertex_descriptor Vertex;
    typedef graph_traits<Graph>::edge_descriptor Edge;
    function_requires< VertexListGraphConcept<Graph> >();
    function_requires< EdgeListGraphConcept<Graph> >();
    function_requires< IncidenceGraphConcept<Graph> >();
    function_requires< AdjacencyGraphConcept<Graph> >();
    function_requires< MutableBidirectionalGraphConcept<Graph> >();
    function_requires< MutableEdgeListGraphConcept<Graph> >();
    function_requires< VertexMutablePropertyGraphConcept<Graph> >();
    function_requires< EdgeMutablePropertyGraphConcept<Graph> >();
    function_requires<
      ReadablePropertyGraphConcept<Graph, Vertex, vertex_index_t> >();
    function_requires<
      LvaluePropertyGraphConcept<Graph, Vertex, vertex_color_t> >();
    function_requires<
      LvaluePropertyGraphConcept<Graph, Edge, edge_weight_t> >();
  }
  // Checking adjacency_list with EdgeList=setS
  {
    typedef adjacency_list<setS, vecS, bidirectionalS, 
      property<vertex_color_t, int>,
      property<edge_weight_t, int>
    > Graph;
    typedef graph_traits<Graph>::vertex_descriptor Vertex;
    typedef graph_traits<Graph>::edge_descriptor Edge;
    function_requires< VertexListGraphConcept<Graph> >();
    function_requires< EdgeListGraphConcept<Graph> >();
    function_requires< IncidenceGraphConcept<Graph> >();
    function_requires< AdjacencyGraphConcept<Graph> >();
    function_requires< BidirectionalGraphConcept<Graph> >();
    function_requires< MutableBidirectionalGraphConcept<Graph> >();
    function_requires< MutableEdgeListGraphConcept<Graph> >();
    function_requires< VertexMutablePropertyGraphConcept<Graph> >();
    function_requires< EdgeMutablePropertyGraphConcept<Graph> >();
    function_requires<
      ReadablePropertyGraphConcept<Graph, Vertex, vertex_index_t> >();
    function_requires<
      LvaluePropertyGraphConcept<Graph, Vertex, vertex_color_t> >();
    function_requires<
      LvaluePropertyGraphConcept<Graph, Edge, edge_weight_t> >();
  }
  {
    typedef adjacency_list< setS, listS, directedS, 
      property<vertex_color_t, int>,
      property<edge_weight_t, int>
    > Graph;
    typedef graph_traits<Graph>::vertex_descriptor Vertex;
    typedef graph_traits<Graph>::edge_descriptor Edge;
    function_requires< VertexListGraphConcept<Graph> >();
    function_requires< EdgeListGraphConcept<Graph> >();
    function_requires< IncidenceGraphConcept<Graph> >();
    function_requires< AdjacencyGraphConcept<Graph> >();
    function_requires< MutableIncidenceGraphConcept<Graph> >();
    function_requires< MutableEdgeListGraphConcept<Graph> >();
    function_requires< VertexMutablePropertyGraphConcept<Graph> >();
    function_requires< EdgeMutablePropertyGraphConcept<Graph> >();
    function_requires<
      ReadablePropertyGraphConcept<Graph, Vertex, vertex_index_t> >();
    function_requires<
      LvaluePropertyGraphConcept<Graph, Vertex, vertex_color_t> >();
    function_requires<
      LvaluePropertyGraphConcept<Graph, Edge, edge_weight_t> >();
  }
  {
    typedef adjacency_list< setS, listS, undirectedS, 
      property<vertex_color_t, int>,
      property<edge_weight_t, int>
    > Graph;
    typedef graph_traits<Graph>::vertex_descriptor Vertex;
    typedef graph_traits<Graph>::edge_descriptor Edge;
    function_requires< VertexListGraphConcept<Graph> >();
    function_requires< EdgeListGraphConcept<Graph> >();
    function_requires< IncidenceGraphConcept<Graph> >();
    function_requires< AdjacencyGraphConcept<Graph> >();
    function_requires< MutableBidirectionalGraphConcept<Graph> >();
    function_requires< MutableEdgeListGraphConcept<Graph> >();
    function_requires< VertexMutablePropertyGraphConcept<Graph> >();
    function_requires< EdgeMutablePropertyGraphConcept<Graph> >();
    function_requires<
      ReadablePropertyGraphConcept<Graph, Vertex, vertex_index_t> >();
    function_requires<
      LvaluePropertyGraphConcept<Graph, Vertex, vertex_color_t> >();
    function_requires<
      LvaluePropertyGraphConcept<Graph, Edge, edge_weight_t> >();
  }
  // Check adjacency_list without any properties
  {
    typedef adjacency_list<vecS, vecS, directedS > Graph;
    typedef graph_traits<Graph>::vertex_descriptor Vertex;
    typedef graph_traits<Graph>::edge_descriptor Edge;
    function_requires< VertexListGraphConcept<Graph> >();
    function_requires< EdgeListGraphConcept<Graph> >();
    function_requires< IncidenceGraphConcept<Graph> >();
    function_requires< AdjacencyGraphConcept<Graph> >();
    function_requires< MutableIncidenceGraphConcept<Graph> >();
    function_requires< MutableEdgeListGraphConcept<Graph> >();
    function_requires< VertexMutablePropertyGraphConcept<Graph> >();
    function_requires< EdgeMutablePropertyGraphConcept<Graph> >();
    function_requires<
      ReadablePropertyGraphConcept<Graph, Vertex, vertex_index_t> >();
  }
  {
    typedef adjacency_list<vecS, vecS, bidirectionalS> Graph;
    typedef graph_traits<Graph>::vertex_descriptor Vertex;
    typedef graph_traits<Graph>::edge_descriptor Edge;
    function_requires< VertexListGraphConcept<Graph> >();
    function_requires< EdgeListGraphConcept<Graph> >();
    function_requires< IncidenceGraphConcept<Graph> >();
    function_requires< AdjacencyGraphConcept<Graph> >();
    function_requires< BidirectionalGraphConcept<Graph> >();
    function_requires< MutableBidirectionalGraphConcept<Graph> >();
    function_requires< MutableEdgeListGraphConcept<Graph> >();
    function_requires<
      ReadablePropertyGraphConcept<Graph, Vertex, vertex_index_t> >();
  }
  {
    typedef adjacency_list< listS, listS, directedS> Graph;
    typedef graph_traits<Graph>::vertex_descriptor Vertex;
    typedef graph_traits<Graph>::edge_descriptor Edge;
    function_requires< VertexListGraphConcept<Graph> >();
    function_requires< EdgeListGraphConcept<Graph> >();
    function_requires< IncidenceGraphConcept<Graph> >();
    function_requires< AdjacencyGraphConcept<Graph> >();
    function_requires< MutableIncidenceGraphConcept<Graph> >();
    function_requires< MutableEdgeListGraphConcept<Graph> >();
  }
  {
    typedef adjacency_list< listS, listS, undirectedS> Graph;
    typedef graph_traits<Graph>::vertex_descriptor Vertex;
    typedef graph_traits<Graph>::edge_descriptor Edge;
    function_requires< VertexListGraphConcept<Graph> >();
    function_requires< EdgeListGraphConcept<Graph> >();
    function_requires< IncidenceGraphConcept<Graph> >();
    function_requires< AdjacencyGraphConcept<Graph> >();
    function_requires< MutableBidirectionalGraphConcept<Graph> >();
    function_requires< MutableEdgeListGraphConcept<Graph> >();
  }
  // Checking EdgeList=setS with no properties
  {
    typedef adjacency_list<setS, vecS, bidirectionalS> Graph;
    typedef graph_traits<Graph>::vertex_descriptor Vertex;
    typedef graph_traits<Graph>::edge_descriptor Edge;
    function_requires< VertexListGraphConcept<Graph> >();
    function_requires< EdgeListGraphConcept<Graph> >();
    function_requires< IncidenceGraphConcept<Graph> >();
    function_requires< AdjacencyGraphConcept<Graph> >();
    function_requires< BidirectionalGraphConcept<Graph> >();
    function_requires< MutableBidirectionalGraphConcept<Graph> >();
    function_requires< MutableEdgeListGraphConcept<Graph> >();
    function_requires< ReadablePropertyGraphConcept<Graph, 
      Vertex, vertex_index_t> >();
  }
  {
    typedef adjacency_list< setS, listS, directedS> Graph;
    typedef graph_traits<Graph>::vertex_descriptor Vertex;
    typedef graph_traits<Graph>::edge_descriptor Edge;
    function_requires< MutableIncidenceGraphConcept<Graph> >();
    function_requires< MutableEdgeListGraphConcept<Graph> >();
  }
  {
    typedef adjacency_list< setS, listS, undirectedS> Graph;
    typedef graph_traits<Graph>::vertex_descriptor Vertex;
    typedef graph_traits<Graph>::edge_descriptor Edge;
    function_requires< VertexListGraphConcept<Graph> >();
    function_requires< EdgeListGraphConcept<Graph> >();
    function_requires< IncidenceGraphConcept<Graph> >();
    function_requires< AdjacencyGraphConcept<Graph> >();
    function_requires< MutableBidirectionalGraphConcept<Graph> >();
    function_requires< MutableEdgeListGraphConcept<Graph> >();
  }
  return 0;
}
