#include <windows.h>
#include <GL/glut.h>
void codeblocksicon()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	//Red
	glLineWidth(3);

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.75f, 0.75f);
	glVertex2f(-0.75f, 0.25f);
	glVertex2f(-0.25f, 0.25f);
	glVertex2f(-0.25f, 0.75f);
	glEnd();

	glLineWidth(1);

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.25f);
	glVertex2f(-0.25f, 0.75f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.25f, 0.75f);
	glVertex2f(-0.25f, 0.25f);
	glVertex2f(-0.05f, 0.05f);
	glVertex2f(-0.05f, 0.4f);
	glEnd();

	glLineWidth(1);

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.25f);
	glVertex2f(-0.05f, 0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.75f, 0.25f);
	glVertex2f(-0.45f, 0.05f);
	glVertex2f(-0.05f, 0.05f);
	glVertex2f(-0.25f, 0.25f);
	glEnd();

    glLineWidth(1);

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.25f);
	glVertex2f(-0.25f, 0.25f);
	glEnd();

	//Green

	glLineWidth(3);

	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(0.75f, 0.75f);
	glVertex2f(0.75f, 0.25f);
	glVertex2f(0.25f, 0.25f);
	glVertex2f(0.25f, 0.75f);
	glEnd();

	glLineWidth(1);

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.25f);
	glVertex2f(0.25f, 0.75f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(0.25f, 0.75f);
	glVertex2f(0.25f, 0.25f);
	glVertex2f(0.05f, 0.05f);
	glVertex2f(0.05f, 0.4f);
	glEnd();

	glLineWidth(1);

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.25f);
	glVertex2f(0.05f, 0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(0.75f, 0.25f);
	glVertex2f(0.45f, 0.05f);
	glVertex2f(0.05f, 0.05f);
	glVertex2f(0.25f, 0.25f);
	glEnd();

    glLineWidth(1);

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.25f);
	glVertex2f(0.25f, 0.25f);
	glEnd();

    //Blue

	glLineWidth(3);

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(0.75f, -0.75f);
	glVertex2f(0.75f, -0.25f);
	glVertex2f(0.25f, -0.25f);
	glVertex2f(0.25f, -0.75f);
	glEnd();

	glLineWidth(1);

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.25f);
	glVertex2f(0.25f, -0.75f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(0.25f, -0.75f);
	glVertex2f(0.25f, -0.25f);
	glVertex2f(0.05f, -0.05f);
	glVertex2f(0.05f, -0.4f);
	glEnd();

	glLineWidth(1);

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.25f);
	glVertex2f(0.05f, -0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(0.75f, -0.25f);
	glVertex2f(0.45f, -0.05f);
	glVertex2f(0.05f, -0.05f);
	glVertex2f(0.25f, -0.25f);
	glEnd();

    glLineWidth(1);

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.25f);
	glVertex2f(0.25f, -0.25f);
	glEnd();

	//Yellow

	glLineWidth(3);

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.75f, -0.75f);
	glVertex2f(-0.75f, -0.25f);
	glVertex2f(-0.25f, -0.25f);
	glVertex2f(-0.25f, -0.75f);
	glEnd();

	glLineWidth(1);

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.25f);
	glVertex2f(-0.25f, -0.75f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.25f, -0.75f);
	glVertex2f(-0.25f, -0.25f);
	glVertex2f(-0.05f, -0.05f);
	glVertex2f(-0.05f, -0.4f);
	glEnd();

	glLineWidth(1);

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.25f);
	glVertex2f(-0.05f, -0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.75f, -0.25f);
	glVertex2f(-0.45f, -0.05f);
	glVertex2f(-0.05f, -0.05f);
	glVertex2f(-0.25f, -0.25f);
	glEnd();

    glLineWidth(1);

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.25f);
	glVertex2f(-0.25f, -0.25f);
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(250, 250);
	glutInitWindowPosition(30, 20);
    glutCreateWindow("CodeBlocks Icon");
	glutDisplayFunc(codeblocksicon);
	glutMainLoop();
	return 0;
}

