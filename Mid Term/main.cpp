#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(-0.5f,-0.8075f); //f
    glVertex2f(0.5f,-0.8075f);  //g
    glVertex2f(0.8075f,-0.25f); //h
    glVertex2f(0.8075f,0.25f); //i
    glVertex2f(0.5f,0.8075f); //j
    glVertex2f(-0.5f,0.8075f); //k
    glVertex2f(-0.8075f,0.25f); //m
    glVertex2f(-0.8075f,-0.25f); //n
    glEnd();


    //top

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.5f, 0.8075f);                 //Right Bottom
    glVertex2f(-0.5f, 0.8075f);              //Left Bottom
    glVertex2f(-0.5f,0.87f);     //Left Top
    glVertex2f(0.5f,0.87f);              //Right Top
    glEnd();

    //bottom

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.5f, -0.8075f);     //Right Bottom
    glVertex2f(-0.5f, -0.8075f);   //Left Bottom
    glVertex2f(-0.5f,-0.87f);     //Left Top
    glVertex2f(0.5f,-0.87f);      //Right Top
    glEnd();

    //left

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.8095f, -0.25f);    //Right Bottom
    glVertex2f(-0.872f,-0.25f);    //Left Bottom
    glVertex2f(-0.872f,0.25f);     //Left Top
    glVertex2f(-0.8095,0.25f);      //Right Top
    glEnd();

    //Right

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.8095f, -0.25f);    //Right Bottom
    glVertex2f(0.872f,-0.25f);    //Left Bottom
    glVertex2f(0.872f,0.25f);     //Left Top
    glVertex2f(0.8095,0.25f);      //Right Top
    glEnd();

    //center quad

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.747f,-0.1875f);    //Right Bottom
    glVertex2f(-0.747f,-0.1875f);    //Left Bottom
    glVertex2f(-0.747f,0.1875f);     //Left Top
    glVertex2f(0.747f,0.1875f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.6845f,-0.1875f);    //Right Bottom
    glVertex2f(-0.6845f,-0.1875f);    //Left Bottom
    glVertex2f(-0.6845f,0.25f);     //Left Top
    glVertex2f(0.6845f,0.25f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.6845f,-0.1875f);    //Right Bottom
    glVertex2f(-0.6845f,-0.1875f);    //Left Bottom
    glVertex2f(-0.6845f,-0.25f);     //Left Top
    glVertex2f(0.6845f,-0.25f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.622f,-0.3125f);    //Right Bottom
    glVertex2f(-0.622f,-0.3125f);    //Left Bottom
    glVertex2f(-0.622f,-0.1875f);     //Left Top
    glVertex2f(0.622f,-0.1875f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.622f,0.3125f);    //Right Bottom
    glVertex2f(-0.622f,0.3125f);    //Left Bottom
    glVertex2f(-0.622f,0.1875f);     //Left Top
    glVertex2f(0.622f,0.1875f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.5595f,0.375f);    //Right Bottom
    glVertex2f(-0.5595f,0.375f);    //Left Bottom
    glVertex2f(-0.5595f,0.125f);     //Left Top
    glVertex2f(0.5595f,0.125f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.5595f,-0.375f);    //Right Bottom
    glVertex2f(-0.5595f,-0.375f);    //Left Bottom
    glVertex2f(-0.5595f,-0.125f);     //Left Top
    glVertex2f(0.5595f,-0.125f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.497f,0.4375f);    //Right Bottom
    glVertex2f(-0.497f,0.4375f);    //Left Bottom
    glVertex2f(-0.497f,0.0625f);     //Left Top
    glVertex2f(0.497f,0.0625f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.497f,-0.4375f);    //Right Bottom
    glVertex2f(-0.497f,-0.4375f);    //Left Bottom
    glVertex2f(-0.497f,-0.0625f);     //Left Top
    glVertex2f(0.497f,-0.0625f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.4345f,0.5f);    //Right Bottom
    glVertex2f(-0.4345f,0.5f);    //Left Bottom
    glVertex2f(-0.4345f,0.0f);     //Left Top
    glVertex2f(0.4345f,0.0f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.4345f,-0.5f);    //Right Bottom
    glVertex2f(-0.4345f,-0.5f);    //Left Bottom
    glVertex2f(-0.4345f,-0.0f);     //Left Top
    glVertex2f(0.4345f,-0.0f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.1845f,0.5625f);    //Right Bottom
    glVertex2f(-0.1845f,0.5625f);    //Left Bottom
    glVertex2f(-0.1845f,-0.0625f);     //Left Top
    glVertex2f(0.1845f,-0.0625f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.0595f,-0.5625f);    //Right Bottom
    glVertex2f(-0.0595f,-0.5625f);    //Left Bottom
    glVertex2f(-0.0595f,0.0625f);     //Left Top
    glVertex2f(0.0595f,0.0625f);      //Right Top
    glEnd();
    //yello
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.122f,0.5625f);    //Right Bottom
    glVertex2f(-0.122f,0.5625f);    //Left Bottom
    glVertex2f(-0.122f,0.5f);     //Left Top
    glVertex2f(0.122f,0.5f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(-0.1845f,0.5f);    //Right Bottom
    glVertex2f(-0.3095f,0.5f);    //Left Bottom
    glVertex2f(-0.3095f,0.4375f);     //Left Top
    glVertex2f(-0.1845f,0.4375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.1845f,0.5f);    //Right Bottom
    glVertex2f(0.3095f,0.5f);    //Left Bottom
    glVertex2f(0.3095f,0.4375f);     //Left Top
    glVertex2f(0.1845f,0.4375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(-0.1845f,0.4375f);    //Right Bottom
    glVertex2f(-0.372f,0.4375f);    //Left Bottom
    glVertex2f(-0.372f,0.375f);     //Left Top
    glVertex2f(-0.1845f,0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(-0.1845f,0.25f);    //Right Bottom
    glVertex2f(-0.4345f,0.25f);    //Left Bottom
    glVertex2f(-0.4345f,0.375f);     //Left Top
    glVertex2f(-0.1845f,0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.1845f,0.4375f);    //Right Bottom
    glVertex2f(0.372f,0.4375f);    //Left Bottom
    glVertex2f(0.372f,0.375f);     //Left Top
    glVertex2f(0.1845f,0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.1845f,0.25f);    //Right Bottom
    glVertex2f(0.4345f,0.25f);    //Left Bottom
    glVertex2f(0.4345f,0.375f);     //Left Top
    glVertex2f(0.1845f,0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.247f,0.25f);    //Right Bottom
    glVertex2f(0.372f,0.25f);    //Left Bottom
    glVertex2f(0.372f,0.1857f);     //Left Top
    glVertex2f(0.247f,0.1857f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(-0.247f,0.25f);    //Right Bottom
    glVertex2f(-0.372f,0.25f);    //Left Bottom
    glVertex2f(-0.372f,0.1857f);     //Left Top
    glVertex2f(-0.247f,0.1857f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.253f,-0.5f);    //Right Bottom
    glVertex2f(-0.3095f,-0.5f);    //Left Bottom
    glVertex2f(-0.3095f,-0.5625f);     //Left Top
    glVertex2f(-0.253f,-0.5625f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.253f,-0.5f);    //Right Bottom
    glVertex2f(0.3095f,-0.5f);    //Left Bottom
    glVertex2f(0.3095f,-0.5625f);     //Left Top
    glVertex2f(0.253f,-0.5625f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.0655f,-0.5f);    //Right Bottom
    glVertex2f(0.253f,-0.5f);    //Left Bottom
    glVertex2f(0.253f,-0.375f);     //Left Top
    glVertex2f(0.0655f,-0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(-0.0655f,-0.5f);    //Right Bottom
    glVertex2f(-0.253f,-0.5f);    //Left Bottom
    glVertex2f(-0.253f,-0.375f);     //Left Top
    glVertex2f(-0.0655f,-0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.128f,-0.375f);    //Right Bottom
    glVertex2f(0.1905f,-0.375f);    //Left Bottom
    glVertex2f(0.1905f,-0.3125f);     //Left Top
    glVertex2f(0.128f,-0.3125f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(-0.128f,-0.375f);    //Right Bottom
    glVertex2f(-0.1905f,-0.375f);    //Left Bottom
    glVertex2f(-0.1905f,-0.3125f);     //Left Top
    glVertex2f(-0.128f,-0.3125f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.8095,0.25f);    //Right Bottom
    glVertex2f(-0.747f,0.25f);    //Left Bottom
    glVertex2f(-0.747f,0.3125f);     //Left Top
    glVertex2f(-0.8095,0.3125f);      //Right Top
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.8095,-0.25f);    //Right Bottom
    glVertex2f(-0.747f,-0.25f);    //Left Bottom
    glVertex2f(-0.747f,-0.3125f);     //Left Top
    glVertex2f(-0.8095,-0.3125f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.8095,0.25f);    //Right Bottom
    glVertex2f(0.747f,0.25f);    //Left Bottom
    glVertex2f(0.747f,0.3125f);     //Left Top
    glVertex2f(0.8095,0.3125f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.8095,-0.25f);    //Right Bottom
    glVertex2f(0.747f,-0.25f);    //Left Bottom
    glVertex2f(0.747f,-0.3125f);     //Left Top
    glVertex2f(0.8095,-0.3125f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.747,0.3125f);    //Right Bottom
    glVertex2f(-0.6845f,0.3125f);    //Left Bottom
    glVertex2f(-0.6845f,0.375f);     //Left Top
    glVertex2f(-0.747,0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.747,0.3125f);    //Right Bottom
    glVertex2f(0.6845f,0.3125f);    //Left Bottom
    glVertex2f(0.6845f,0.375f);     //Left Top
    glVertex2f(0.747,0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.747,-0.3125f);    //Right Bottom
    glVertex2f(-0.6845f,-0.3125f);    //Left Bottom
    glVertex2f(-0.6845f,-0.375f);     //Left Top
    glVertex2f(-0.747,-0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.747,-0.3125f);    //Right Bottom
    glVertex2f(0.6845f,-0.3125f);    //Left Bottom
    glVertex2f(0.6845f,-0.375f);     //Left Top
    glVertex2f(0.747,-0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.6845f,0.375f);    //Right Bottom
    glVertex2f(0.622f,0.375f);    //Left Bottom
    glVertex2f(0.622f,0.4375f);     //Left Top
    glVertex2f(0.6845,0.4375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.6845f,0.375f);    //Right Bottom
    glVertex2f(-0.622f,0.375f);    //Left Bottom
    glVertex2f(-0.622f,0.4375f);     //Left Top
    glVertex2f(-0.6845,0.4375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.6845f,-0.375f);    //Right Bottom
    glVertex2f(0.622f,-0.375f);    //Left Bottom
    glVertex2f(0.622f,-0.4375f);     //Left Top
    glVertex2f(0.6845,-0.4375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.6845f,-0.375f);    //Right Bottom
    glVertex2f(-0.622f,-0.375f);    //Left Bottom
    glVertex2f(-0.622f,-0.4375f);     //Left Top
    glVertex2f(-0.6845,-0.4375f);      //Right Top
    glEnd();


   //row
    for (float i = -1.0f; i<=1.0f; i+=0.0625f) {
        for (float j = 1.0f; j>=-1.0f; j-=0.0625f) {
        glBegin(GL_LINES);
        glColor3f(0.98f,0.04f,0.7f);
        glVertex2f(i, j);
        glVertex2f(-i, j);
        glEnd();
       }
    }

    //column
        for (float i = -1.0f; i<=1.0f; i+=0.0625) {
        for (float j = 1.0f; j>=0.0f; j-=0.0625) {
        glBegin(GL_LINES);
        glColor3f(0.98f,0.04f,0.7f);
        glVertex2f(i, j);
        glVertex2f(i, -j);
        glEnd();
       }
    }


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Rifat Rudro");  // Create window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
