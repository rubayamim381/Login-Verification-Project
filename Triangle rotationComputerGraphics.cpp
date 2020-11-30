#include<graphics.h>
#include<conio.h>
#include<math.h>

int triangle(int a1, int a2 , int b1, int b2 , int c1, int c2){
    line(a1,a2,b1,b2);
    line(a1,a2,c1,c2);
    line(b1,b2,c1,c2);
}
int tree(){

    //Line(As Branch of the Tree)
    line(170,330,550,180);

    //Axis(Area of the Tree)
    line(100,50,100,450);
    line(100,450,550,450);
}
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"");

    int x1,x2,x3,y1,y2,y3;
    x1=400,x2=460,x3=430,y1=180,y2=180,y3=150;
    int xr1,xr2,xr3,yr1,yr2,yr3;
    int xrr1,xrr2,xrr3,yrr1,yrr2,yrr3;
    //DELAY TO SPEED UP OR DOWN
    int del;
    del = 400;
    float ang = 30,ang2=10;
    ang=(ang*3.14)/180;
    ang2=(ang2*3.14)/180;

    // mid of the lines as vanity/center point of transformation
    int mx,my, mx1,my1;


    while(TRUE){

        //tree
        tree();
        //triangle
        triangle(x1,y1,x2,y2,x3,y3);


        delay(del);
        cleardevice();

        //rotation against own axis ( mid point of triangle)
        mx=(x1+x2+x3)/3;
        my=(y1+y2+y3)/3;

        xr1 = mx+(x1-mx)*cos(ang)-(y1-my)*sin(ang);
        yr1 = my+(x1-mx)*sin(ang)+(y1-my)*cos(ang);

        xr2 = mx+(x2-mx)*cos(ang)-(y2-my)*sin(ang);
        yr2 = my+(x2-mx)*sin(ang)+(y2-my)*cos(ang);

        xr3 = mx+(x3-mx)*cos(ang)-(y3-my)*sin(ang);
        yr3 = my+(x3-mx)*sin(ang)+(y3-my)*cos(ang);

        //now rotating around tree-branch
        mx1 = (170+550)/2;
        my1 = (330+180)/2;

        xrr1 = mx1+(xr1-mx1)*cos(ang2)-(yr1-my1)*sin(ang2);
        yrr1 = my1+(xr1-mx1)*sin(ang2)+(yr1-my1)*cos(ang2);

        xrr2 = mx1+(xr2-mx1)*cos(ang2)-(yr2-my1)*sin(ang2);
        yrr2 = my1+(xr2-mx1)*sin(ang2)+(yr2-my1)*cos(ang2);

        xrr3 = mx1+(xr3-mx1)*cos(ang2)-(yr3-my1)*sin(ang2);
        yrr3 = my1+(xr3-mx1)*sin(ang2)+(yr3-my1)*cos(ang2);


        //updating old value
        x1=xrr1,x2=xrr2,x3=xrr3,y1=yrr1,y2=yrr2,y3=yrr3;


    }
}
