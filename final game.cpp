#include<graphics.h>
#include<windows.h>
#include<winbgim.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
using namespace std;
int x=470,y=455;
void lost()
{
    cleardevice();
    settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
    setcolor(RED);
    outtextxy(80,100,"_________");
    Sleep(1000);
    outtextxy(80,150,"  LOST !!");
    Sleep(1000);
    outtextxy(80,180,"_________");
    getch();
    exit(0);
    cleardevice();
}
void won()
{
    cleardevice();
    settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
    setcolor(GREEN);
    outtextxy(80,100,"_________");
    Sleep(1000);
    outtextxy(80,150,"  WON !!");
    Sleep(1000);
    outtextxy(80,180,"_________");
    getch();
    cleardevice();
}
void check()
{
    if(x>=480 && y>=5 && y<=445 || y<=25 && x<=470 && x>=120 || x>=30 && x<=370 && y>=475 || x<=20 && y>=35 && y<=475)
        {
            lost();
        }

        else if(x>=290 && x<=440 && y==65 || x<=60 && x>=50 && y>=195 && y<=325 || x>=50 && x<=60 && y>=75 && y<=155)
        {
            lost();
        }
        else if(x>=50 && x<=60 && y>=365 && y<=445 || x>=100 && x<=110 && y>=75 && y<=265)
        {
            lost();
        }
        else if(x>=70 && x<=200 && y>=435 && y<=445 || x>=310 && x<=400 && y>=435 && y<=445)
        {
            lost();
        }
        else if(x>=370 && x<=380 && y>=355 && y<=395 || x>=300 && x<=310 && y>=395 && y<=425)
        {
            lost();
        }
        else if(x>=130 && x<=140 && y>=465 && y<=465 || x>=70 && x<=470 && y>=315 && y<=325)
        {
            lost();
        }
        else if(x>=240 && x<=400 && y>=435 && y<=445 || x>=30 && x<=300 && y>=355 && y<=365)
        {
            lost();
        }

        else if(x>=350 && x<=420 && y>=355 && y<=365 || x>=150 && x<=160 && y>=195 && y<=325)
        {
            lost();
        }
        else if(x>=150 && x<=160 && y>=455 && y<=145 || x>=440 && x<=450 && y>=45 && y<=275)
        {
            lost();
        }
        else if(x>=170 && x<=350 && y>=95 && y<=105 || x>=70 && x<=470 && y>=305 && y<=325)
        {
            lost();
        }


        else if(x>=70 && x<=190 && y>=435 && y<=445 || x>=160 && x<=470 && y>=395 && y<=405)
        {
            lost();
        }
        else if(x>=400 && x<=440 && y>=275 && y<=285 || x>=290 && x<=300 && y>=145 && y<=275)
        {
            lost();
        }

        else if(x<=110 && x>=80 && y<=40 && y>=20)
        {
            won();
        }
}
int main()
{
   int i, j=0;
   bool flag=false;
    bool dbflag= false,closeflag=true;
    initwindow(500,500,"MAZE BALL",0, 0, dbflag, closeflag);

    int ch='\0';

    settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
    setcolor(GREEN);
    outtextxy(80,100,"_________");
    outtextxy(80,150,"MAZE BALL");
    outtextxy(80,180,"_________");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(100,240,"|S| Start");
    outtextxy(100,280,"|E| Exit");
    char a;
    a=getch();
    if(a=='s')
    {
        flag=true;
    }
    if((a)=='e')
    {
        return 0;
    }

    if(flag){
    cleardevice();


   for( i = 0 ;i<=1000 ; )
   {
       /********* GRAY BORDER **********************/
            setbkcolor(WHITE);
            setfillstyle(SOLID_FILL,DARKGRAY);
            setcolor(DARKGRAY);
            rectangle(0,0,500,500);
            rectangle(10,10,490,490);
            floodfill(5,5,DARKGRAY);
     /************* TEXT ************************/

            setbkcolor(BLACK);
            setcolor(BLUE);
            settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
            outtextxy(15,15,"STOP");
            outtextxy(365,465,"START");
     /********** MAZE ****************************/

    setfillstyle(SOLID_FILL,BLUE);
    bar(120,20,490,10);
    bar(10,490,365,480);
    bar(10,480,20,40);
    bar(490,440,480,10);
    bar(20,60,250,50);
    bar(290,60,440,50);
    bar(60,320,50,200);
    bar(60,60,50,150);
    bar(60,445,50,360);
    bar(110,270,100,50);
    bar(60,445,200,435);
    bar(240,445,400,435);
    bar(380,355,370,400);
    bar(300,445,310,400);
    bar(140,480,130,440);
    bar(50,320,480,310);
    bar(160,405,480,395);
    bar(20,365,300,355);
    bar(350,365,420,355);
    bar(160,320,150,200);
    bar(160,50,150,140);
    bar(450,50,440,270);
    bar(160,100,350,90);
    bar(210,140,400,130);
    bar(210,190,480,180);
    bar(200,240,410,230);
    bar(160,280,400,270);
    bar(300,280,290,130);

      if((int)ch==80) //down y++
       {
           y=y+10;
      }
      if((int)ch==72) //up y--
       {
           y=y-10;
      }
      if((int)ch==77) //right x++
       {
           x=x+10;
      }
      if((int)ch==75) //left x--
       {
           x=x-10;
      }

      setfillstyle(SOLID_FILL,RED);
        setcolor(RED);
        circle(x,y,10);
        floodfill(x,y,RED);

        check();
        delay(20);
        ch=getch();
        cleardevice();
   }
    }
   getch();
   closegraph();
   return 0;

}
