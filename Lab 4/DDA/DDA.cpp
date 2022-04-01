#include<windows.h>
#include<GL/glut.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int xa,xb,ya,yb;

void display (void)
{

    int dx=xb-xa;
    int dy=yb-ya;
    int m0 = dy/dx;
    float x=xa,y=ya;
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POINTS);
    glVertex2i(x,y);
    int m = m0;
    int k;
    int zzz = max(dx, dy);
    for(k=0;k<zzz;k++)
    {
        if(m<1)

        {
            x = x+1;
            y=y+m;
            glVertex2i(x,y);
        }

        else if(m>1)

        {
            x = x+(1/m);
            y = y+1;
            glVertex2i(x,y);

        }

        else if(m=1)

        {
            x=x+1;
            y=y+1;
            glVertex2i(x,y);

        }

    }

    glEnd();
    glFlush();

}

void init(void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}




