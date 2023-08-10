
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int ch;
    cout<<"Enter your number:\n1 Flag\n2 Emoji\n3 House\n4 Village\n";
    cin>>ch;

    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    switch(ch)
    {
    case 1:
        setcolor(GREEN);

        rectangle(200,100,450,250);
        setfillstyle(1,GREEN);
        floodfill(201,110,GREEN);

        setcolor(RED);
        circle(320,175,40);
        setfillstyle(1,RED);
        floodfill(301,176,RED);

        setcolor(WHITE);
        rectangle(194,100,199,400);
        setfillstyle(1,LIGHTCYAN);
        floodfill(197,253,WHITE);

        getch();
        closegraph();
        break;

    case 2:
        circle(300,150,100);
        circle(245,120,10);
        circle(350,120,10);
        line(295,130,285,150);
        line(295,130,305,150);
        line(285,150,305,150);

        ellipse(300, 160, 180, 0, 70, 60);
        getch();
        closegraph();

        break;

    case 3:
        /* Draw Hut */
        setcolor(WHITE);
        rectangle(150,180,250,300);
        rectangle(250,180,420,300);
        rectangle(180,250,220,300);

        line(200,100,150,180);
        line(200,100,250,180);
        line(200,100,370,100);
        line(370,100,420,180);

        /* Fill colours */
        setfillstyle(SOLID_FILL, BROWN);
        floodfill(152, 182, WHITE);
        floodfill(252, 182, WHITE);
        setfillstyle(SLASH_FILL, BLUE);
        floodfill(182, 252, WHITE);
        setfillstyle(HATCH_FILL, GREEN);
        floodfill(200, 105, WHITE);
        floodfill(210, 105, WHITE);
        getch();
        closegraph();

        break;

    case 4:
        setcolor(WHITE);
        circle(300,70,30);
        setfillstyle(SOLID_FILL, YELLOW);
        floodfill(301,75, WHITE);
        /* Draw Hut */
        setcolor(WHITE);
        rectangle(150,180,250,300);
        rectangle(250,180,420,300);
        rectangle(180,250,220,300);

        line(200,100,150,180);
        line(200,100,250,180);
        line(200,100,370,100);
        line(370,100,420,180);

        /* Fill colours */
        setfillstyle(SOLID_FILL, BROWN);
        floodfill(152, 182, WHITE);
        floodfill(252, 182, WHITE);
        setfillstyle(SLASH_FILL, BLUE);
        floodfill(182, 252, WHITE);
        setfillstyle(HATCH_FILL, GREEN);
        floodfill(200, 105, WHITE);
        floodfill(210, 105, WHITE);
        getch();
        closegraph();
        break;
    default:
        cout<<"Invalid";
        break;
    }
    return 0;
}
