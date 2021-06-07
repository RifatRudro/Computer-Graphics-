#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector>
#include <GL/glut.h>
using namespace std;
GLfloat x;
GLfloat y;
int pntX1, pntY1,edges, angle;
vector<int> pntX;
vector<int> pntY;
char reflectionAxis, shearingAxis;
int shearingX, shearingY;

void drawPolygon()
{
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	for (int i = 0; i < edges; i++)
	{
		glVertex2i(pntX[i], pntY[i]);
	}
	glEnd();
}

void scaling() {

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    gluOrtho2D(-2, 2,-2, 2); //(left, right, top, bottom)
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(.3,.3);
        glVertex2f(-.3,.3);
        glVertex2f(-.3,-.3);
        glVertex2f(.3,-.3);
    glEnd();
    glScalef(x,y,1);
    //glTranslatef(-0.5,0.5,0);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(.3,.3);
        glVertex2f(-.3,.3);
        glVertex2f(-.3,-.3);
        glVertex2f(.3,-.3);
    glEnd();

    glFlush();  // Render now
}

void translation() {

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    gluOrtho2D(-2, 2,-2, 2); //(left, right, top, bottom)
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(.3,.3);
        glVertex2f(-.3,.3);
        glVertex2f(-.3,-.3);
        glVertex2f(.3,-.3);
    glEnd();
    glTranslatef(x,y,0);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(.3,.3);
        glVertex2f(-.3,.3);
        glVertex2f(-.3,-.3);
        glVertex2f(.3,-.3);
    glEnd();

    glFlush();  // Render now
}

void rotation()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);

    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.5f, 0.0f);
    glVertex2f( 0.5f, 0.4f);
    glVertex2f( 0.0f, 0.4f);
    glEnd();

    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(angle,0,0.0,0.1);//i=how many degree you want to rotate around an axis

    glBegin(GL_QUADS);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.5f, 0.0f);
    glVertex2f( 0.5f, 0.4f);
    glVertex2f( 0.0f, 0.4f);
    glEnd();

    glPopMatrix();

    //continiuosly rotation - speed
    //i+=0.2f;

    glFlush();
}

void drawPolygonMirrorReflection(char reflectionAxis)
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 1.0);

	if (reflectionAxis == 'x' || reflectionAxis == 'X')
	{
		for (int i = 0; i < edges; i++)
		{
			glVertex2i(round(pntX[i]), round(pntY[i] * -1));

		}
	}
	else if (reflectionAxis == 'y' || reflectionAxis == 'Y')
	{
		for (int i = 0; i < edges; i++)
		{
			glVertex2i(round(pntX[i] * -1), round(pntY[i]));
		}
	}
	glEnd();
}

void drawPolygonShearing()
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 1.5);

	if (shearingAxis == 'x' || shearingAxis == 'X')
	{
		glVertex2i(pntX[0], pntY[0]);

		glVertex2i(pntX[1] + shearingX, pntY[1]);
		glVertex2i(pntX[2] + shearingX, pntY[2]);

		glVertex2i(pntX[3], pntY[3]);
	}
	else if (shearingAxis == 'y' || shearingAxis == 'Y')
	{
		glVertex2i(pntX[0], pntY[0]);
		glVertex2i(pntX[1], pntY[1]);

		glVertex2i(pntX[2], pntY[2] + shearingY);
		glVertex2i(pntX[3], pntY[3] + shearingY);
	}
	glEnd();
}

void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(8.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-640.0, 640.0, -480.0, 480.0);
}

void shearing(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);

		drawPolygon();
		drawPolygonShearing();


	glFlush();
}

void MirrorReflection(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);

		drawPolygon();
		drawPolygonMirrorReflection(reflectionAxis);
	glFlush();
}

int main(int argc, char** argv)
{
    int choice;
    while(true){
    cout<<"Enter Your Choice:"<<endl;
    cout<<" 1. Translation"<<endl;
    cout<<" 2. Scaling"<<endl;
    cout<<" 3. Rotation"<<endl;
    cout<<" 4. Mirror Reflection"<<endl;
    cout<<" 5. Shearing"<<endl;
    cout<<" 6. Exit"<<endl;
    cout<<"Press 1 To 6 To Perform:";
    cin>>choice;
    cout<<endl;
    switch(choice){
    case 1:
    cout<<"Enter Translation Values: \n";
    cout<<"=============================\n";
    cout<<"Enter x: ";
    cin >> x;
    cout<<"Enter y: ";
    cin >> y;
  glutInit(&argc, argv);
  glutCreateWindow("Translation"); // Create a window with the given title
  glutInitWindowSize(320, 320);   // Set the window's initial width & height
  glutDisplayFunc(translation); // Register display callback handler for window re-paint
  glutMainLoop();
        break;
    case 2:
        cout<<"Enter Scaling Values: \n";
    cout<<"=============================\n";
    cout<<"Enter x: ";
    cin >> x;
    cout<<"Enter y: ";
    cin >> y;
  glutInit(&argc, argv);
  glutCreateWindow("Scaling"); // Create a window with the given title
  glutInitWindowSize(320, 320);   // Set the window's initial width & height
  glutDisplayFunc(scaling); // Register display callback handler for window re-paint
  glutMainLoop();
        break;
    case 3:
    cout<<"Enter The Angle You Want To Rotate:";
    cin>>angle;
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(500, 500);
    glutCreateWindow("Rotation");
    glutDisplayFunc(rotation);
    glutMainLoop();
        break;
    case 4:
    cout << "Mirror Reflection" << endl;

	cout << "\n\nFor Polygon:" << endl;

	cout << "Enter no of edges: "; cin >> edges;

	for (int i = 0; i < edges; i++)
	{
		cout << "Enter co-ordinates for vertex " << i + 1 << " : "; cin >> pntX1 >> pntY1;
		pntX.push_back(pntX1);
		pntY.push_back(pntY1);
	}

		cout << "Enter reflection axis ( x or y ): "; cin >> reflectionAxis;
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Mirror Reflection");
	glutDisplayFunc(MirrorReflection);
	myInit();
	glutMainLoop();
        break;
    case 5:
        cout << "Shearing" << endl;


    cout << "\n------------\n" << endl;

	cout << "Enter no of edges for a Polygon: "; cin >> edges;

	for (int i = 0; i < edges; i++)
	{
		cout << "Enter co-ordinates for vertex  " << i + 1 << " : "; cin >> pntX1 >> pntY1;
		pntX.push_back(pntX1);
		pntY.push_back(pntY1);
	}
		cout << "Enter reflection axis ( x or y ): "; cin >> shearingAxis;
		if (shearingAxis == 'x' || shearingAxis == 'X')
		{
			cout << "Enter the shearing factor for X: "; cin >> shearingX;
		}
		else
		{
			cout << "Enter the shearing factor for Y: "; cin >> shearingY;
		}


	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Shearing");
	glutDisplayFunc(shearing);
	myInit();
	glutMainLoop();
        break;
    case 6:
        return 0;
    }
    cout<<endl;
        }
}
