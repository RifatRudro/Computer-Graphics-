#include <GL/gl.h>

#include <GL/glut.h>

#include <stdio.h>



static GLfloat spin = 45.0;

GLfloat scale_x = 1.0;

GLfloat scale_y = 1.0;

GLfloat colorR = 1;

GLfloat colorG = 1;

GLfloat colorB = 0;

void init(void){

glClearColor(0.0, 0.0, 0.0, 0.0);

glShadeModel(GL_SMOOTH);

}



void action(void)

{



}



void display(void)

{

glClear(GL_COLOR_BUFFER_BIT);



glPushMatrix();

glScalef(scale_x,scale_y,1);

   glBegin(GL_QUADS);

      glColor3f(colorR, colorG, colorB);

      glVertex2f(-0.2f, -0.2f);

      glVertex2f( 0.2f, -0.2f);

      glVertex2f( 0.2f,  0.2f);

      glVertex2f(-0.2f,  0.2f);

   glEnd();

   glBegin(GL_TRIANGLES);

   glColor3f(1.0f, 0.0f, 1.0f);

   glVertex2f(0.2f,-0.2f);

   glVertex2f(0.5f, 0.0f);

   glVertex2f(0.2f, 0.2f);

   glEnd();



glPopMatrix();

glutSwapBuffers();

glFlush();

}





void spinDisplay(void){

spin = spin + 0.02;

if (spin > 360.0)

    spin = spin - 360.0;

glutPostRedisplay();

}





void reshape(int w, int h)

{

glViewport(0, 0, (GLsizei)w, (GLsizei)h);

glMatrixMode(GL_PROJECTION);

glLoadIdentity();

glFrustum(-1.0, 1.0, -1.0, 1.0, 0.5, 15.0);

glMatrixMode(GL_MODELVIEW);

glLoadIdentity();

gluLookAt(0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

}





void keyboard(unsigned char key, int x, int y)

{

switch (key)

{

case 0:

    exit(0);

    break;

case 'x':

    glRotatef(spin, 1.0, 0.0, 0.0);

    break;

case 'y':

    glRotatef(spin, 0.0, 1.0, 0.0);

    break;

case 'z':

    glRotatef(spin, 0.0, 0.0, 1.0);

    break;

case 'r':

    glutIdleFunc(action);

    break;

case 'i':

    scale_x+=0.1;

    scale_y+=0.1;

    break;

case 'o':

    scale_x-=0.1;

    scale_y-=0.1;

    break;

default:

    break;

}

glutPostRedisplay();

}





void mouse(int button, int state, int x, int y){

switch (button){

case GLUT_LEFT_BUTTON:

    if (state == GLUT_DOWN)

        colorG+=0.1f;

        colorB+=0.1f;

    glutPostRedisplay();

    break;

case GLUT_RIGHT_BUTTON:

    if (state == GLUT_DOWN)

        colorG-=0.1f;

        colorB-=0.1f;

        glutPostRedisplay();

    break;

default:

    break;

}

}



int main(int argc, char** argv)

{

glutInit(&argc, argv);

glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

glutInitWindowSize(1024, 768);

glutInitWindowPosition(100, 100);

glutCreateWindow("Spinning & Zoom");

init();

glutReshapeFunc(reshape);

glutDisplayFunc(display);

glutKeyboardFunc(keyboard);

glutMouseFunc(mouse);

glutIdleFunc(action);

glutMainLoop();

return 0;

}
