#include <windows.h>
#include <GL/glut.h>


void initGL() {

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}


void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex2f(0.0f, 1.0f);
	glVertex2f(0.5f, 0.4f);
	glVertex2f(-0.5f,  0.4f);

	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.5f, -1.0f); //Right Bottom
	glVertex2f(-0.5f, -1.0f); //Left Bottom
	glVertex2f(-0.5f,  0.4f); //Left Top
	glVertex2f(0.5f, 0.4f); //Right Top

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f);

	glVertex2f(0.19f, -1.0f); //Right Bottom
	glVertex2f(-0.19f, -1.0f); //Left Bottom
	glVertex2f(-0.19f,  0.1f); //Left Top
	glVertex2f(0.19f, 0.1f); //Right Top

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(-0.24f, -0.25f); //Right Bottom
	glVertex2f(-0.4f, -0.25f); //Left Bottom
	glVertex2f(-0.4f,  -0.0f); //Left Top
	glVertex2f(-0.24f, -0.0f); //Right Top

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(0.24f, -0.25f); //Right Bottom
	glVertex2f(0.4f, -0.25f); //Left Bottom
	glVertex2f(0.4f,  -0.0f); //Left Top
	glVertex2f(0.24f, -0.0f); //Right Top

	glEnd();


	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Rifat Rudro");
	glutInitWindowSize(640, 640);
	glutDisplayFunc(display);
	initGL();
	glutMainLoop();
	return 0;
}
