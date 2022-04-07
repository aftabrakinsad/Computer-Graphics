#include <windows.h>
#include <GL/glut.h>
#include<math.h>
#define PI 3.1415926535897323846
GLfloat position = 0.0f;
GLfloat speed = 0.1f;

void update(int value)
{
    if(position >1.0)
        position = -1.0f;
        position += speed;
        glutPostRedisplay();
        glutTimerFunc(100, update, 0);
}

void display()
{
    glClearColor(0.0f,1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    int i;
    GLfloat x = -0.6f;
    GLfloat y = 0.75f;
    GLfloat radius = 0.2f;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0f * PI;

    //sun
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

    //cloud
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

    //second cloud
    //int i;

    x = 0.7f;
    y = 0.1f;
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
    y = 0.15f;
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
    y = 0.1f;
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
    y = 0.18f;
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

	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glTranslatef(0.0f, position,0.0f);

	//rocket
    glBegin(GL_QUADS);
    glColor3ub(165,42,42);
    glVertex2f(-0.3f, 0.0f);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.0f, 0.3f);

    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f,0.3f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.3f, 0.3f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,0);
    glVertex2f(-0.4f,-0.1f);
    glVertex2f(-0.28f, -0.25f);
    glVertex2f(-0.21f, -0.09f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,0);
    glVertex2f(-0.26f,-0.3f);
    glVertex2f(-0.1f, -0.2f);
    glVertex2f(-0.15f, -0.4f);
    glEnd();

    glPopMatrix();
    glFlush();
}

void handleMouse(int button, int state, int x, int y)
{
    if(button == GLUT_LEFT_BUTTON)
    {
        speed += 0.1f;
    }
    if(button == GLUT_RIGHT_BUTTON)
    {
        speed -= 0.1f;
    }
    glutPostRedisplay();
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Translation Animation");
    glutDisplayFunc(display);
    glutTimerFunc(100, update, 0);
    glutMouseFunc(handleMouse);
    glutMainLoop();
    return 0;
}
