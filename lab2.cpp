#include <graphics.h>
#include <stdio.h>
#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>

using namespace std;

void arif()
{
    double x0,y0,x1,y2;
    cin>>x0>>y0>>x1>>y2;
    double x=x0;y=y0;
    double vx=y1-y0/x1-x0;

    if(vx<=x1)
    {
        while(x<=x1)0
    }
}


int main()
{

    int gd = DETECT, gm;



    initgraph(&gd, &gm,"");

    int x=getmaxx();
    int y=getmaxy();

    setcolor(RED + BLUE);
     line(0,y/2,x,y/2);

    setcolor(GREEN + RED);
    line(x/2,0,x/2,y);



     getch();



    closegraph();

    return 0;
}


