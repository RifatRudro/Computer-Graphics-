#include<windows.h>
#include<GL/glut.h>
#include<iostream>
#include<stdlib.h>
//DDA DDa DDA DDA DDA DDA DDA
using namespace std;

int xa,xb,ya,yb;

void display (void)
{

    float dx=xb-xa;
    float dy=yb-ya;
    float m0 = dy/dx;
    float x=xa,y=ya;
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POINTS);
    glVertex2i(x,y);
    int k;
    cout<<"("<<x<<", "<<y<<") "<<"m= "<<m0<<endl;
    while(x!=xb && y!=yb)
    {
        if(m0<1)

        {
            x = x+1;
            y=y+m0;
            glVertex2i(x,y);
            cout<<"("<<x<<", "<<y<<") "<<"m= "<<m0<<endl;
        }

        else if(m0>1)

        {
            x = x+(1/m0);
            y = y+1;
            glVertex2i(x,y);
            cout<<"("<<x<<", "<<y<<") "<<"m= "<<m0<<endl;

        }

        else if(m0=1)

        {
            x=x+1;
            y=y+1;
            glVertex2i(x,y);
            cout<<"("<<x<<", "<<y<<") "<<"m= "<<m0<<endl;

        }

    }

    glEnd();
    glFlush();

}

void init(void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}



int main(int argc, char** argv)
{
    cout<<("Enter the points\n(X1,Y1,X2,Y2):-\n");
    cin>>xa>>ya>>xb>>yb;
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("DDA Line Algorithm ");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

}
