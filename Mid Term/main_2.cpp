#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3f(0.73f,0.16f,0.96f); // Violet
	glVertex2f(0.6f, 0.5f);    // x, y
	glVertex2f(-0.6f, 0.5f);    // x, y

	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3f(0.0f,0.0f,1.0f); // Indigo
	glVertex2f(0.6f, 0.446f);
	glVertex2f(-0.6f, 0.446f);

	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3f(0.0f,1.0f,1.0f); // Blue
	glVertex2f(0.6f, 0.392f);
	glVertex2f(-0.6f, 0.392f);

	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3f(0.0f,1.0f,0.0f); // Green
	glVertex2f(0.6f, 0.338f);
	glVertex2f(-0.6f, 0.338f);

	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3f(1.0f,1.0f,0.0f); // Yellow
	glVertex2f(0.6f, 0.284f);
	glVertex2f(-0.6f, 0.284f);

	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3f(1.0f,0.5f,0.0f); // Orange
	glVertex2f(0.6f, 0.23f);
	glVertex2f(-0.6f, 0.23f);

	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3f(1.0f,0.0f,0.0f); // Red
	glVertex2f(0.6f, 0.177f);
	glVertex2f(-0.6f, 0.177f);
	//glVertex3f

	glEnd();


	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Rifat Rudro");
	glutInitWindowSize(480, 480);
	glutDisplayFunc(display);
	//glutMainLoop();
	return 0;
}
