#include <windows.h>
#include <GL/glut.h>
#include<math.h>
#define PI 3.1415926535897323846

void initGL()
{
	glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
}

void cloudandsun()
{
	glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(-1.0f, 1.f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(-1.0f, 0.0f);

	glEnd();


    int i;
    GLfloat x = -0.6f;
    GLfloat y = 0.75f;
    GLfloat radius = 0.2f;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(252, 255, 0);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f
        (
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    x = 0.7f;
    y = 0.6f;
    radius = 0.2f;
    triangleAmount = 40;
    twicePi = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f
        (
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    x = 0.6f;
    y = 0.75f;
    radius = 0.2f;
    triangleAmount = 40;
    twicePi = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f
        (
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    x = 0.5f;
    y = 0.6f;
    radius = 0.2f;
    triangleAmount = 40;
    twicePi = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f
        (
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    x = 0.3f;
    y = 0.6f;
    radius = 0.2f;
    triangleAmount = 40;
    twicePi = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f
        (
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

	glFlush();


	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Cloud And Sun");
	glutInitWindowSize(500, 500);
	glutDisplayFunc(cloudandsun);
	initGL();
	glutMainLoop();
	return 0;
}

