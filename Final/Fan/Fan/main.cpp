#include <GL/gl.h>

#include <GL/glut.h>

#include <stdio.h>



static GLfloat spin = 0;

GLfloat scale_x = 1.0;

GLfloat scale_y = 1.0;

GLfloat startStop = 0;

void init(void){

glClearColor(0.0, 0.0, 0.0, 0.0);

glShadeModel(GL_SMOOTH);

}

void update(int value) {

    spin += startStop;
    glRotatef(spin, 0.0, 0.0, 1.0);
	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void action(void)

{

}

void shape(){
glBegin(GL_LINE_LOOP);

        glVertex3f(0, -0.05, 0.0);

        glVertex3f(-.05, .07, 0.0);

        glVertex3f(-.12, .07, 0.0);

        glVertex3f(-.18, .15, 0.0);

        glVertex3f(-.1, .15, 0.0);

        glVertex3f(-.15, .22, 0.0);

        glVertex3f(-.20, .22, 0.0);

        glVertex3f(-.27, .30, 0.0);

        glVertex3f(-.10, .30, 0.0);

        glVertex3f(-.17, .37, 0.0);

        glVertex3f(-.24, .37, 0.0);

        glVertex3f(-.27, .45, 0.0);

        glVertex3f(-.12, .45, 0.0);

        glVertex3f(-.2, .55, 0.0);

        glVertex3f(.2, .55, 0.0);

        glVertex3f(.12, .45, 0.0);

        glVertex3f(.27, .45, 0.0);

        glVertex3f(.24, .37, 0.0);

        glVertex3f(.17, .37, 0.0);

        glVertex3f(.10, .30, 0.0);

        glVertex3f(.27, .30, 0.0);

        glVertex3f(.20, .22, 0.0);

        glVertex3f(.15, .22, 0.0);

        glVertex3f(.1, .15, 0.0);

        glVertex3f(.18, .15, 0.0);

        glVertex3f(.12, .07, 0.0);

        glVertex3f(.05, .07, 0.0);



    glEnd();
}


void display(void)

{

glClear(GL_COLOR_BUFFER_BIT);



glPushMatrix();
glScalef(scale_x,scale_y,1);
shape();
glPopMatrix();

glPushMatrix();
glScalef(scale_x,scale_y,1);
glRotatef(90,0.0f,0.0f,1.0f);
shape();
glPopMatrix();

glPushMatrix();
glScalef(scale_x,scale_y,1);
glRotatef(180,0.0f,0.0f,1.0f);
shape();
glPopMatrix();

glPushMatrix();
glScalef(scale_x,scale_y,1);
glRotatef(270,0.0f,0.0f,1.0f);
shape();
glPopMatrix();

glutSwapBuffers();

glFlush();

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

        startStop=0;
        spin=0;

    glutPostRedisplay();

    break;

case GLUT_RIGHT_BUTTON:

    if (state == GLUT_DOWN)

        startStop=45;

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

glutCreateWindow("Fan");

init();

glutReshapeFunc(reshape);

glutDisplayFunc(display);

glutTimerFunc(100, update, 0);

glutKeyboardFunc(keyboard);

glutMouseFunc(mouse);

glutIdleFunc(action);

glutMainLoop();

return 0;

}
