//
//  main.c
//  ALGraph
//
//  Created by SonChangWoo on 2016. 7. 23..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>
//#include "ALGraph.h"
//
//int main() {
//    ALGraph graph;
//    GraphInit(&graph, 5);
//    
//    AddEdge(&graph, A, B);
//    AddEdge(&graph, A, D);
//    AddEdge(&graph, B, C);
//    AddEdge(&graph, C, D);
//    AddEdge(&graph, D, E);
//    AddEdge(&graph, E, A);
//    
//    ShowGraphEdgeInfo(&graph);
//    GraphDestroy(&graph);
//    
//    return 0;
//}
#include "ALGraphDFS.h"

int main() {
    ALGraph graph;
    GraphInit(&graph, 7);
    
    AddEdge(&graph, A, B);
    AddEdge(&graph, A, D);
    AddEdge(&graph, B, C);
    AddEdge(&graph, D, C);
    AddEdge(&graph, D, E);
    AddEdge(&graph, E, F);
    AddEdge(&graph, E, G);
    
    ShowGraphEdgeInfo(&graph);
    
    DFSShowGraphVertex(&graph, A); printf("\n");
    DFSShowGraphVertex(&graph, C); printf("\n");
    DFSShowGraphVertex(&graph, E); printf("\n");
    
    GraphDestroy(&graph);
    
    return 0;
}