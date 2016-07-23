//
//  ALGraphDFS.h
//  ALGraph
//
//  Created by SonChangWoo on 2016. 7. 23..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#ifndef ALGraphDFS_h
#define ALGraphDFS_h

#include "LinkedList.h"

enum {A, B, C, D, E, F, G, H, I, J};

typedef struct _ual
{
    int numV;
    int numE;
    List * adjList;
    int * visitInfo;
} ALGraph;

void GraphInit(ALGraph * pg, int nv);
void GraphDestroy(ALGraph * pg);
void AddEdge(ALGraph * pg, int fromV, int toV);
void ShowGraphEdgeInfo(ALGraph * pg);
void DFSShowGraphVertex(ALGraph * pg, int startV);


#endif /* ALGraphDFS_h */
