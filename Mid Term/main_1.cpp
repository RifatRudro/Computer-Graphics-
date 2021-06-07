#include <windows.h>

#include <math.h>

#include <GL/glut.h>

#include<iostream>

using namespace std;


int xc, yc, radius;


void plot_point(int x, int y)

{

 glBegin(GL_POINTS);

 glVertex2i(xc+x, yc+y);

 glVertex2i(xc+x, yc-y);

 glVertex2i(xc+y, yc+x);

 glVertex2i(xc+y, yc-x);

 glVertex2i(xc-x, yc-y);

 glVertex2i(xc-y, yc-x);

 glVertex2i(xc-x, yc+y);

 glVertex2i(xc-y, yc+x);

 glEnd();

}


void bresenham_circle(int r)

{

 int x=0,y=r;

 float pk = 3 - 2*r;


 plot_point(x,y);

 int k;

 while(x < y)

 {

 x = x + 1;

 if(pk < 0)

 pk += 4*x+6;

 else if(pk>=0)

 {

 y = y - 1;

 pk += 4*(x-y)+10;

 }

 plot_point(x,y);

 }

 glFlush();

}


void display(void)

{

 glClear(GL_COLOR_BUFFER_BIT);

 bresenham_circle(radius);

}


void Init()

{


 glColor3f(1.0,1.0,1.0);

 gluOrtho2D(0 , 640 , 0 , 480);

}


int main(int argc, char **argv)

{

 cout<<("Enter the coordinates of the center: ");

 cin>>xc>>yc;
 cout<<endl;

 cout<<("Enter the radius:-\n");

 cin>>radius;
 cout<<endl;

 glutInit(&argc,argv);

 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

 glutInitWindowPosition(0,0);

 glutInitWindowSize(640,480);

 glutCreateWindow("bresenham_circle");

 Init();

 glutDisplayFunc(display);

 glutMainLoop();

}
