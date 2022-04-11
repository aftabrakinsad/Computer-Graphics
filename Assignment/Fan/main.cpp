#include<windows.h>
#include<GL/glut.h>

static GLfloat spin = 0.0;
static GLfloat spin_speed = 1.0;
float spin_x = 0;
float spin_y = 0;
float spin_z = 0;

float scale_x = 1;
float scale_y = 1;
float scale_z = 1;

float translate_x = 0.0;
float translate_y = 0.0;
float translate_z = -30.0;


void init()
{
    glClearColor(0,0,0,0);
    glShadeModel(GL_SMOOTH);
    glClearDepth(1.0f);
    glEnable(GL_DEPTH_TEST);
}
void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(translate_x, translate_y, translate_z);
    glRotatef(spin,spin_x,spin_y,spin_z);
    glScalef(scale_x,scale_y,scale_z);

    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-2.0f, 3.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(2.0f, 3.0f);
    glVertex2f(2.0f, 3.0f);
    glVertex2f(4.0f, 3.0f);
    glVertex2f(-2.0f, 3.0f);
    glVertex2f(-4.0f, 3.0f);
    glVertex2f(4.0f, 3.0f);
    glVertex2f(5.0f, 5.0f);
    glVertex2f(-4.0f, 3.0f);
    glVertex2f(-5.0f, 5.0f);
    glVertex2f(-5.0f, 5.0f);
    glVertex2f(-3.0f, 5.0f);
    glVertex2f(5.0f, 5.0f);
    glVertex2f(3.0f, 5.0f);
    glVertex2f(3.0f, 5.0f);
    glVertex2f(4.0f, 7.5f);
    glVertex2f(-3.0f, 5.0f);
    glVertex2f(-4.0f, 7.5f);
    glVertex2f(-4.0f, 7.5f);
    glVertex2f(-6.0f, 7.5f);
    glVertex2f(4.0f, 7.5f);
    glVertex2f(6.0f, 7.5f);
    glVertex2f(6.0f, 7.5f);
    glVertex2f(6.5f, 9.5f);
    glVertex2f(-6.0f, 7.5f);
    glVertex2f(-6.5f, 9.5f);
    glVertex2f(-6.5f, 9.5f);
    glVertex2f(-3.0f, 9.5f);
    glVertex2f(6.5f, 9.5f);
    glVertex2f(3.0f, 9.5f);
    glVertex2f(3.0f, 9.5f);
    glVertex2f(4.0f, 11.5f);
    glVertex2f(-3.0f, 9.5f);
    glVertex2f(-4.0f, 11.5f);
    glVertex2f(-4.0f, 11.5f);
    glVertex2f(4.0f, 11.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-2.0f, -3.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(2.0f, -3.0f);
    glVertex2f(2.0f, -3.0f);
    glVertex2f(4.0f, -3.0f);
    glVertex2f(-2.0f, -3.0f);
    glVertex2f(-4.0f, -3.0f);
    glVertex2f(4.0f, -3.0f);
    glVertex2f(5.0f, -5.0f);
    glVertex2f(-4.0f, -3.0f);
    glVertex2f(-5.0f, -5.0f);
    glVertex2f(-5.0f, -5.0f);
    glVertex2f(-3.0f, -5.0f);
    glVertex2f(5.0f, -5.0f);
    glVertex2f(3.0f, -5.0f);
    glVertex2f(3.0f, -5.0f);
    glVertex2f(4.0f, -7.5f);
    glVertex2f(-3.0f, -5.0f);
    glVertex2f(-4.0f, -7.5f);
    glVertex2f(-4.0f, -7.5f);
    glVertex2f(-6.0f, -7.5f);
    glVertex2f(4.0f, -7.5f);
    glVertex2f(6.0f, -7.5f);
    glVertex2f(6.0f, -7.5f);
    glVertex2f(6.5f, -9.5f);
    glVertex2f(-6.0f, -7.5f);
    glVertex2f(-6.5f, -9.5f);
    glVertex2f(-6.5f, -9.5f);
    glVertex2f(-3.0f, -9.5f);
    glVertex2f(6.5f, -9.5f);
    glVertex2f(3.0f, -9.5f);
    glVertex2f(3.0f, -9.5f);
    glVertex2f(4.0f, -11.5f);
    glVertex2f(-3.0f, -9.5f);
    glVertex2f(-4.0f, -11.5f);
    glVertex2f(-4.0f, -11.5f);
    glVertex2f(4.0f, -11.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(3.0f, -2.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(3.0f, 2.0f);
    glVertex2f(3.0f, 2.0f);
    glVertex2f(3.0f, 4.0f);
    glVertex2f(3.0f, -2.0f);
    glVertex2f(3.0f, -4.0f);
    glVertex2f(3.0f, 4.0f);
    glVertex2f(5.0f, 5.0f);
    glVertex2f(3.0f, -4.0f);
    glVertex2f(5.0f, -5.0f);
    glVertex2f(5.0f, -5.0f);
    glVertex2f(5.0f, -3.0f);
    glVertex2f(5.0f, 5.0f);
    glVertex2f(5.0f, 3.0f);
    glVertex2f(5.0f, 3.0f);
    glVertex2f(7.5f, 4.0f);
    glVertex2f(5.0f, -3.0f);
    glVertex2f(7.5f, -4.0f);
    glVertex2f(7.5f, -4.0f);
    glVertex2f(7.5f, -6.0f);
    glVertex2f(7.5f, 4.0f);
    glVertex2f(7.5f, 6.0f);
    glVertex2f(7.5f, 6.0f);
    glVertex2f(9.5f, 6.5f);
    glVertex2f(7.5f, -6.0f);
    glVertex2f(9.5f, -6.5f);
    glVertex2f(9.5f, -6.5f);
    glVertex2f(9.5f, -3.0f);
    glVertex2f(9.5f, 6.5f);
    glVertex2f(9.5f, 3.0f);
    glVertex2f(9.5f, 3.0f);
    glVertex2f(11.5f, 4.0f);
    glVertex2f(9.5f, -3.0f);
    glVertex2f(11.5f, -4.0f);
    glVertex2f(11.5f, -4.0f);
    glVertex2f(11.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-3.0f, -2.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-3.0f, 2.0f);
    glVertex2f(-3.0f, 2.0f);
    glVertex2f(-3.0f, 4.0f);
    glVertex2f(-3.0f, -2.0f);
    glVertex2f(-3.0f, -4.0f);
    glVertex2f(-3.0f, 4.0f);
    glVertex2f(-5.0f, 5.0f);
    glVertex2f(-3.0f, -4.0f);
    glVertex2f(-5.0f, -5.0f);
    glVertex2f(-5.0f, -5.0f);
    glVertex2f(-5.0f, -3.0f);
    glVertex2f(-5.0f, 5.0f);
    glVertex2f(-5.0f, 3.0f);
    glVertex2f(-5.0f, 3.0f);
    glVertex2f(-7.5f, 4.0f);
    glVertex2f(-5.0f, -3.0f);
    glVertex2f(-7.5f, -4.0f);
    glVertex2f(-7.5f, -4.0f);
    glVertex2f(-7.5f, -6.0f);
    glVertex2f(-7.5f, 4.0f);
    glVertex2f(-7.5f, 6.0f);
    glVertex2f(-7.5f, 6.0f);
    glVertex2f(-9.5f, 6.5f);
    glVertex2f(-7.5f, -6.0f);
    glVertex2f(-9.5f, -6.5f);
    glVertex2f(-9.5f, -6.5f);
    glVertex2f(-9.5f, -3.0f);
    glVertex2f(-9.5f, 6.5f);
    glVertex2f(-9.5f, 3.0f);
    glVertex2f(-9.5f, 3.0f);
    glVertex2f(-11.5f, 4.0f);
    glVertex2f(-9.5f, -3.0f);
    glVertex2f(-11.5f, -4.0f);
    glVertex2f(-11.5f, -4.0f);
    glVertex2f(-11.5f, 4.0f);
    glEnd();


    glutSwapBuffers();
}


void setSpin(float x, float y, float z)
{
    spin_x = x;
    spin_y = y;
    spin_z = z;
}


void reset()
{
    spin_x = 0;
    spin_y = 1;
    spin_z = 0;
    translate_x = 0.0;
    translate_y = 0.0;
    translate_z = -30.0;
}



void reshape(int w,int h)
{
    glViewport(0,0, (GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(100.0f, (GLfloat)w/(GLfloat)h, 1.0f, 100.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}


void spinDisplay(void)
{
    spin=spin+spin_speed;
    setSpin(0.0,0.0,1.0);
    if(spin>360.0)
    {

        spin=spin-360.0;
    }
    glutPostRedisplay();
}

void spinDisplayReverse(void)
{
    spin=spin-spin_speed;
    setSpin(0.0,0.0,1.0);
    if(spin<360.0)
    {
        spin=spin+360.0;
    }
    glutPostRedisplay();
}

void mouse(int button,int state,int x,int y)
{
    switch(button)
    {
    case GLUT_LEFT_BUTTON:
        if(state==GLUT_DOWN)
            glutIdleFunc(spinDisplay);
        break;


    case GLUT_MIDDLE_BUTTON:
        if(state==GLUT_DOWN)
        {
            glutIdleFunc(NULL);
        }
        break;


    case GLUT_RIGHT_BUTTON:
        if(state==GLUT_DOWN)
            glutIdleFunc(spinDisplayReverse);
        break;


    default:
        break;


    }
}


void keyboard(unsigned char key, int x, int y)
{

    if(key=='w')
    {
        setSpin(0.0,0.0,1.0);
        glutPostRedisplay();
        reset();
        for (int i=0; i<=50; i++)
        {
            translate_x++;
            scale_x=0.5;
        }
        for (int j=0; j<=20; j++)
        {
            translate_y++;
            scale_y=0.5;
        }

        glutPostRedisplay();

    }
    else if(key=='d')
    {
        setSpin(0.0,0.0,1.0);
        glutPostRedisplay();
        reset();
        for (int i=0; i<=50; i++)
        {
            translate_x++;
            scale_x=0.5;
        }
        for (int j=0; j<=20; j++)
        {
            translate_y--;
            scale_y=0.5;
        }



        glutPostRedisplay();

    }
    else if(key=='s')
    {
        setSpin(0.0,0.0,1.0);
        glutPostRedisplay();
        reset();
        for (int i=0; i<=50; i++)
        {
            translate_x--;
            scale_x=0.5;
        }
        for (int j=0; j<=20; j++)
        {
            translate_y--;
            scale_y=0.5;
        }



        glutPostRedisplay();

    }
    else if(key=='a')
    {
        setSpin(0.0,0.0,1.0);
        glutPostRedisplay();
        reset();
        for (int i=0; i<=50; i++)
        {
            translate_x--;
            scale_x=0.5;
        }
        for (int j=0; j<=20; j++)
        {
            translate_y++;
            scale_y=0.5;
        }


        glutPostRedisplay();

    }


    else if(key=='r')
    {
        scale_x=1;
        scale_y=1;
        reset();
        glutPostRedisplay();
    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1920, 1080 );
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Keyboard and Mouse Interaction");
    glutDisplayFunc(myDisplay);
    glutReshapeFunc(reshape);
    glutMouseFunc(mouse);
    glutKeyboardFunc(keyboard);
    init();
    glutMainLoop();
}
