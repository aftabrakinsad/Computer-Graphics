/*#include<windows.h>
#include<GL/glut.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int xc, yc, r;

void plotpoint(int x, int y)

{
    glBegin(GL_POINTS);
    glVertex2i(xc+x, yc+y);
    glVertex2i(xc+x, yc-y);
    glVertex2i(xc+y, yc+x);
    glVertex2i(xc+y, yc-x);
    glVertex2i(xc-x, yc-y);
    glVertex2i(xc-y, yc-x);
    glVertex2i(xc-x, yc+y);
    glVertex2i(xc-y, yc+x);
    glEnd();
}

void mca()
{
    int x = 0, y = r;
    float pk = 1 - r;
    plotpoint(x, y);
    int k;

    while(x < y)
    {
        x++;

        if(pk < 0)
        {
            pk = pk + (2*x) + 1;
        }
        else
        {
            y--;
            pk = pk + (2 * x) + 1 - (2 * y);
        }

        plotpoint(x, y);
    }

    glFlush();
}

void init(void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    cout<<"Enter the center\n(xc, yc):-\n";
    cin>>xc>>yc;
    cout<<"Enter the radius:\n";
    cin>>r;
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Midpoint Circle Algorithm");
    init();
    glutDisplayFunc(mca);
    glutMainLoop();
    return 0;
}*/

#include<windows.h>
#include<GL/glut.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int xc,yc,r;
void plot_point(int x, int y)
{

glBegin(GL_POINTS);

glVertex2i(xc+x, yc+y);
glVertex2i(xc+x, yc-y);
glVertex2i(xc+y, yc+x);
glVertex2i(xc+y, yc-x);
glVertex2i(xc-x, yc-y);
glVertex2i(xc-y, yc-x);
glVertex2i(xc-x, yc+y);
glVertex2i(xc-y, yc+x);

glEnd();

}

void midpoint ()
{

    int x = 0, y = r;
    float pk = 1-r;
    plot_point(x,y);
    int k;
    while(x<y)
    {

        x = x+1;
        if(pk < 0)
        {
            pk = pk + (2*x)+1;
        }
        else
        {
            y = y-1;
            pk = pk + (2*x) + 1-(2*y);
        }
        plot_point(x,y);

        }

    glFlush();
}


void init(void)
{

    glClearColor (1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}
int main(int argc, char** argv)
{
    cout<<("Enter the center\n(xc,yc):-\n");
    cin>>xc>>yc;
    cout<<("Enter the radius\n");
    cin>>r;
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("MIdPoint Circle Algorithm");
    init ();
    glutDisplayFunc(midpoint);
    glutMainLoop();
    return 0;

}
