//
//  ALGraph.h
//  ALGraph
//
//  Created by SonChangWoo on 2016. 7. 23..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#ifndef ALGraph_h
#define ALGraph_h

#include "LinkedList.h"

enum {A, B, C, D, E, F, G, H, I, J};

typedef struct _ual
{
    int numV;
    int numE;
    List * adjList;
} ALGraph;

void GraphInit(ALGraph * pg, int nv);

void GraphDestroy(ALGraph * pg);

void AddEdge(ALGraph * pg, int fromV, int toV);

void ShowGraphEdgeInfo(ALGraph * pg);

#endif /* ALGraph_h */
