//
//  Point.h
//  ArrayList
//
//  Created by SonChangWoo on 2016. 7. 6..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#ifndef Point_h
#define Point_h

typedef struct _point
{
    int xpos;
    int ypos;
} Point;

void SetPointPos(Point * ppos, int xpos, int ypos);

void ShowPointPos(Point * ppos);

int PointComp(Point * pos1, Point * pos2);

#endif /* Point_h */
