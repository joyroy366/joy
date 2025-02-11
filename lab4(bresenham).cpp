#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>

using namespace std;
void bresenham(int x1,int y1,int x2,int y2,int x3,int y3,int xCenter,int yCenter)
{
    int dx,dy,d,ds,dt,x,y;
    dx=x2-x1;
    dy=y2-y1;
    d=(2*dy)-dx;
    ds=2*dy;
    dt=2*(dy-dx);
    x=x1;
    y=y1;
    while(x<=x2)
    {
        putpixel(x+xCenter,yCenter-y,10);
        if(d<0)
        {
            x++;
            d=d+ds;
        }
        else
        {
            x++;
            y++;
            d=d+dt;
        }
    }

    int dx1=x3-x1;
    int dy1=y3-y1;
    int d1=2*dy1-dx1;
    int ds1=2*dy1;
    int dt1 =2*(dy1-dx1);
    x=x1;
    y=y1;
    while(x<=x3)
    {

        putpixel(x+xCenter,yCenter+y,10);
        if(d1<0)
        {
            x++;
            d1=d1 +ds1;
        }
        else
            x++;
        y++;
        d1=d1+dt1;
    }

}
int main()
{
    int gd = DETECT, gm;

    // initgraph initializes the
    // graphics system by loading a
    // graphics driver from disk
    initgraph(&gd, &gm, "");

    int x,y,x1,y1,x2,y2,x3,y3,a,b;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    x = getmaxx();
    y = getmaxy();


    line(0, y / 2, x, y / 2);
    line(x / 2, 0, x / 2, y);

    int xCenter = x / 2;
    int yCenter = y / 2;
    bresenham(x1,y1,x2,y2,x3,y3,xCenter,yCenter);
    line(xCenter,yCenter, xCenter + 100, yCenter);



    getch();

    // closegraph function closes the
    // graphics mode and deallocates
    // all memory allocated by
    // graphics system.
    closegraph();

    return 0;
}
