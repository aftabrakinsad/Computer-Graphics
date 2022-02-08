#include <windows.h>
#include <GL/glut.h>

void initGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void batmanlogo()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.6f);
    glVertex2f(-0.55f, 0.6f);
    glVertex2f(-0.55f, 0.55f);
    glVertex2f(-0.6f, 0.55f);
    glVertex2f(-0.6f, 0.5f);
    glVertex2f(-0.65f, 0.5f);
    glVertex2f(-0.65f, 0.45f);
    glVertex2f(-0.7f, 0.45f);
    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.75f, 0.4f);
    glVertex2f(-0.75f, 0.35f);
    glVertex2f(-0.8f, 0.35f);
    glVertex2f(-0.8f, 0.3f);
    glVertex2f(-0.85f, 0.3f);
    glVertex2f(-0.85f, 0.25f);
    glVertex2f(-0.9f, 0.25f);
    glVertex2f(-0.9f, 0.2f);
    glVertex2f(-0.95f, 0.2f);
    glVertex2f(-0.95f, -0.2f);
    glVertex2f(-0.9f, -0.2f);
    glVertex2f(-0.9f, -0.25f);
    glVertex2f(-0.85f, -0.25f);
    glVertex2f(-0.85f, -0.3f);
    glVertex2f(-0.8f, -0.3f);
    glVertex2f(-0.8f, -0.35f);
    glVertex2f(-0.75f, -0.35f);
    glVertex2f(-0.75f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f, -0.45f);
    glVertex2f(-0.65f, -0.45f);
    glVertex2f(-0.65f, -0.5f);
    glVertex2f(-0.6f, -0.5f);
    glVertex2f(-0.6f, -0.55f);
    glVertex2f(-0.55f, -0.55f);
    glVertex2f(-0.55f, -0.6f);

    glVertex2f(0.55f, -0.6f);
    glVertex2f(0.55f, -0.55f);
    glVertex2f(0.6f, -0.55f);
    glVertex2f(0.6f, -0.5f);
    glVertex2f(0.65f, -0.5f);
    glVertex2f(0.65f, -0.45f);
    glVertex2f(0.7f, -0.45f);
    glVertex2f(0.7f, -0.4f);
    glVertex2f(0.75f, -0.4f);
    glVertex2f(0.75f, -0.35f);
    glVertex2f(0.8f, -0.35f);
    glVertex2f(0.8f, -0.3f);
    glVertex2f(0.85f, -0.3f);
    glVertex2f(0.85f, -0.25f);
    glVertex2f(0.9f, -0.25f);
    glVertex2f(0.9f, -0.2f);
    glVertex2f(0.95f, -0.2f);
    glVertex2f(0.95f, 0.2f);
    glVertex2f(0.9f, 0.2f);
    glVertex2f(0.9f, 0.25f);
    glVertex2f(0.85f, 0.25f);
    glVertex2f(0.85f, 0.3f);
    glVertex2f(0.8f, 0.3f);
    glVertex2f(0.8f, 0.35f);
    glVertex2f(0.75f, 0.35f);
    glVertex2f(0.75f, 0.4f);
    glVertex2f(0.7f, 0.4f);
    glVertex2f(0.7f, 0.45f);
    glVertex2f(0.65f, 0.45f);
    glVertex2f(0.65f, 0.5f);
    glVertex2f(0.6f, 0.5f);
    glVertex2f(0.6f, 0.55f);
    glVertex2f(0.55f, 0.55f);
    glVertex2f(0.55f, 0.6f);
    glVertex2f(0.0f, 0.6f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f); //yellow
    glVertex2f(0.0f, 0.55f);
    glVertex2f(-0.55f, 0.55f);
    glVertex2f(-0.55f, 0.5f);
    glVertex2f(-0.6f, 0.5f);
    glVertex2f(-0.6f, 0.45f);
    glVertex2f(-0.65f, 0.45f);
    glVertex2f(-0.65f, 0.4f);
    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.75f, 0.35f);
    glVertex2f(-0.75f, 0.3f);
    glVertex2f(-0.8f, 0.3f);
    glVertex2f(-0.8f, 0.25f);
    glVertex2f(-0.85f, 0.25f);
    glVertex2f(-0.85f, 0.2f);
    glVertex2f(-0.9f, 0.2f);
    glVertex2f(-0.9f, -0.2f);
    glVertex2f(-0.85f, -0.2f);
    glVertex2f(-0.85f, -0.25f);
    glVertex2f(-0.8f, -0.25f);
    glVertex2f(-0.8f, -0.3f);
    glVertex2f(-0.75f, -0.3f);
    glVertex2f(-0.75f, -0.35f);
    glVertex2f(-0.7f, -0.35f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.65f, -0.4f);
    glVertex2f(-0.65f, -0.45f);
    glVertex2f(-0.6f, -0.45f);
    glVertex2f(-0.6f, -0.5f);
    glVertex2f(-0.55f, -0.5f);
    glVertex2f(-0.55f, -0.55f);
    glVertex2f(-0.5f, -0.55f);

    glVertex2f(0.55f, -0.55f); //right
    glVertex2f(0.55f, -0.5f);
    glVertex2f(0.6f, -0.5f);
    glVertex2f(0.6f, -0.45f);
    glVertex2f(0.65f, -0.45f);
    glVertex2f(0.65f, -0.4f);
    glVertex2f(0.7f, -0.4f);
    glVertex2f(0.7f, -0.35f);
    glVertex2f(0.75f, -0.35f);
    glVertex2f(0.75f, -0.3f);
    glVertex2f(0.8f, -0.3f);
    glVertex2f(0.8f, -0.25f);
    glVertex2f(0.85f, -0.25f);
    glVertex2f(0.85f, -0.2f);
    glVertex2f(0.9f, -0.2f);
    glVertex2f(0.9f, 0.2f);
    glVertex2f(0.85f, 0.2f);
    glVertex2f(0.85f, 0.25f);
    glVertex2f(0.8f, 0.25f);
    glVertex2f(0.8f, 0.3f);
    glVertex2f(0.75f, 0.3f);
    glVertex2f(0.75f, 0.35f);
    glVertex2f(0.7f, 0.35f);
    glVertex2f(0.7f, 0.4f);
    glVertex2f(0.65f, 0.4f);
    glVertex2f(0.65f, 0.45f);
    glVertex2f(0.6f, 0.45f);
    glVertex2f(0.6f, 0.5f);
    glVertex2f(0.55f, 0.5f);
    glVertex2f(0.55f, 0.55f);
    glVertex2f(0.0f, 0.55f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    // left wing
    glVertex2f(-0.4f, 0.45f);
    glVertex2f(-0.55f, 0.45f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.6f, 0.4f);
    glVertex2f(-0.6f, 0.35f);
    glVertex2f(-0.65f, 0.35f);
    glVertex2f(-0.65f, 0.3f);
    glVertex2f(-0.7f, 0.3f);
    glVertex2f(-0.7f, 0.25f);
    glVertex2f(-0.75f, 0.25f);
    glVertex2f(-0.75f, 0.2f);
    glVertex2f(-0.8f, 0.2f);
    glVertex2f(-0.8f, 0.15f);
    glVertex2f(-0.85f, 0.15f);
    glVertex2f(-0.85f, -0.15f);
    glVertex2f(-0.8f, -0.15f);
    glVertex2f(-0.8f, -0.2f);
    glVertex2f(-0.75f, -0.2f);
    glVertex2f(-0.75f, -0.25f);
    glVertex2f(-0.7f, -0.25f);
    glVertex2f(-0.7f, -0.3f);
    glVertex2f(-0.65f, -0.3f);
    glVertex2f(-0.65f, -0.35f);
    glVertex2f(-0.6f, -0.35f);
    glVertex2f(-0.6f, -0.4f);
    glVertex2f(-0.55f, -0.4f);
    glVertex2f(-0.55f, -0.45f);
    glVertex2f(-0.4f, -0.45f);
    glVertex2f(-0.4f, -0.5f);

    //right wing
    glVertex2f(0.4f, -0.5f);
    glVertex2f(0.4f, -0.45f);
    glVertex2f(0.55f, -0.45f);
    glVertex2f(0.55f, -0.4f);
    glVertex2f(0.6f, -0.4f);
    glVertex2f(0.6f, -0.35f);
    glVertex2f(0.65f, -0.35f);
    glVertex2f(0.65f, -0.3f);
    glVertex2f(0.7f, -0.3f);
    glVertex2f(0.7f, -0.25f);
    glVertex2f(0.75f, -0.25f);
    glVertex2f(0.75f, -0.2f);
    glVertex2f(0.8f, -0.2f);
    glVertex2f(0.8f, -0.15f);
    glVertex2f(0.85f, -0.15f);
    glVertex2f(0.85f, 0.15f);
    glVertex2f(0.8f, 0.15f);
    glVertex2f(0.8f, 0.2f);
    glVertex2f(0.75f, 0.2f);
    glVertex2f(0.75f, 0.25f);
    glVertex2f(0.7f, 0.25f);
    glVertex2f(0.7f, 0.3f);
    glVertex2f(0.65f, 0.3f);
    glVertex2f(0.65f, 0.35f);
    glVertex2f(0.6f, 0.35f);
    glVertex2f(0.6f, 0.4f);
    glVertex2f(0.55f, 0.4f);
    glVertex2f(0.55f, 0.45f);
    glVertex2f(0.4f, 0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.4f, 0.45f);
    glVertex2f(-0.4f, 0.15f);
    glVertex2f(-0.2f, 0.15f);
    glVertex2f(-0.2f, 0.2f);
    glVertex2f(-0.15f, 0.2f);
    glVertex2f(-0.15f, 0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.4f, 0.4f);
    glVertex2f(-0.45f, 0.4f);
    glVertex2f(-0.45f, 0.2f);
    glVertex2f(-0.4f, 0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.15f, 0.5f);//left ear
    glVertex2f(-0.15f, 0.45f);
    glVertex2f(-0.1f, 0.45f);
    glVertex2f(-0.1f, 0.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.1f, 0.5f);//right ear
    glVertex2f(0.1f, 0.45f);
    glVertex2f(0.15f, 0.45f);
    glVertex2f(0.15f, 0.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.15f, 0.45f);
    glVertex2f(0.15f, 0.2f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.4f, 0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.2f, 0.15f);
    glVertex2f(0.4f, 0.15f);
    glVertex2f(0.4f, 0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.4f, 0.4f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.45f, 0.2f);
    glVertex2f(0.45f, 0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.03f, -0.45f);
    glVertex2f(0.03f, -0.5f);
    glVertex2f(0.3f, -0.5f);
    glVertex2f(0.3f, -0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.1f, -0.4f);
    glVertex2f(0.1f, -0.45f);
    glVertex2f(0.3f, -0.45f);
    glVertex2f(0.3f, -0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.1f, -0.35f);
    glVertex2f(0.1f, -0.4f);
    glVertex2f(0.25f, -0.4f);
    glVertex2f(0.25f, -0.35f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.15f, -0.3f);
    glVertex2f(0.15f, -0.35f);
    glVertex2f(0.2f, -0.35f);
    glVertex2f(0.2f, -0.3f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.3f, -0.45f);
    glVertex2f(-0.3f, -0.5f);
    glVertex2f(-0.03f, -0.5f);
    glVertex2f(-0.03f, -0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.3f, -0.4f);
    glVertex2f(-0.3f, -0.45f);
    glVertex2f(-0.1f, -0.45f);
    glVertex2f(-0.1f, -0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.25f, -0.35f);
    glVertex2f(-0.25f, -0.4f);
    glVertex2f(-0.1f, -0.4f);
    glVertex2f(-0.1f, -0.35f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.2f, -0.3f);
    glVertex2f(-0.2f, -0.35f);
    glVertex2f(-0.15f, -0.35f);
    glVertex2f(-0.15f, -0.3f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutCreateWindow("Batman Logo");
glutInitWindowSize(320, 320);
glutDisplayFunc(batmanlogo);
initGL();
glutMainLoop();
return 0;
}
