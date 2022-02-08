#include <windows.h>
#include <GL/glut.h>

void Society()
{
glClearColor(0.529f, 0.800f, 1.000f, 0.0f);
glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);
glColor3ub(189, 28, 157);
glVertex2f(-0.7f,-0.3f);
glVertex2f(-0.2f,-0.3f);
glVertex2f(-0.2f,0.6f);
glVertex2f(-0.7f,0.6f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 0);
glVertex2f(-0.5f,0.1f);
glVertex2f(-0.6f,0.1f);
glVertex2f(-0.6f,0.0f);
glVertex2f(-0.5f,0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 0);
glVertex2f(-0.5f,0.3f);
glVertex2f(-0.6f,0.3f);
glVertex2f(-0.6f,0.2f);
glVertex2f(-0.5f,0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 0);
glVertex2f(-0.5f,0.5f);
glVertex2f(-0.6f,0.5f);
glVertex2f(-0.6f,0.4f);
glVertex2f(-0.5f,0.4f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 0);
glVertex2f(-0.3f,0.1f);
glVertex2f(-0.4f,0.1f);
glVertex2f(-0.4f,0.0f);
glVertex2f(-0.3f,0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 0);
glVertex2f(-0.3f,0.3f);
glVertex2f(-0.4f,0.3f);
glVertex2f(-0.4f,0.2f);
glVertex2f(-0.3f,0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 0);
glVertex2f(-0.3f,0.5f);
glVertex2f(-0.4f,0.5f);
glVertex2f(-0.4f,0.4f);
glVertex2f(-0.3f,0.4f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-2.0f,-0.1f);
glVertex2f(0.3f,-0.1f);
glVertex2f(0.3f,-0.5f);
glVertex2f(-2.0f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255, 255);
glVertex2f(-2.0f,-0.3f);
glVertex2f(0.3f,-0.3f);
glVertex2f(0.3f,-0.295f);
glVertex2f(-2.0f,-0.295f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(49, 163, 34);
glVertex2f(0.3f,-2.0f);
glVertex2f(2.0f,-2.0f);
glVertex2f(2.0f,2.0f);
glVertex2f(0.3f,2.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(0.5f,-0.5f);
glVertex2f(0.8f,-0.5f);
glVertex2f(0.8f,0.3f);
glVertex2f(0.5f,0.3f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255,255,255);
glVertex2f(-1.0f,-0.5f);
glVertex2f(-0.8f,-0.6f);
glVertex2f(-0.5f,-0.5f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255,255,255);
glVertex2f(-0.5f,-0.5f);
glVertex2f(-0.3f,-0.6f);
glVertex2f(-0.0f,-0.5f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255,255,255);
glVertex2f(-0.0f,-0.5f);
glVertex2f(0.155f,-0.6f);
glVertex2f(0.3f,-0.5f);
glEnd();

glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Society");
	glutInitWindowSize(600, 600);
	glutDisplayFunc(Society);
	glutMainLoop();
	return 0;
}
