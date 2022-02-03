#include<GL\glut.h>
void init(void)
{
	gluOrtho2D(0.0, 200.0, 0.0, 150.0);

}

void House(void)
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON);  //start house
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(50, 30);
	glVertex2i(50, 100);
	glVertex2i(150, 100);
	glVertex2i(150,30);
	glEnd();   //end house

	glBegin(GL_POLYGON);  //start window
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(60, 80);
	glVertex2i(80, 80);
	glVertex2i(80, 65);
	glVertex2i(60, 65);
	glEnd();   //end window

	glBegin(GL_POLYGON);  //start window
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(120, 80);
	glVertex2i(140, 80);
	glVertex2i(140, 65);
	glVertex2i(120, 65);
	glEnd();   //end window

	glBegin(GL_POLYGON); //start ceiling
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(50, 100);
	glVertex2i(150, 100);
	glVertex2i(100, 130);
	glEnd(); //end ceiling

	glBegin(GL_POLYGON);  //start door
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(85, 30);
	glVertex2i(85, 85);
	glVertex2i(115, 85);
	glVertex2i(115,30);
	glEnd();  //end door

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Home! Sweet Home");
	init();
	glutDisplayFunc(House);
	glutMainLoop();
}
