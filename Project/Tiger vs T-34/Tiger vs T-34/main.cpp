#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include <windows.h>

float _move_sun = 1.00f;
float _move_cloud_1 = 0.00f;
float _move_cloud_2 = 0.00f;


GLfloat i = 0.0f;
GLfloat r = 0.0f;
GLfloat position = 0.0f;
GLfloat speed = 0.02f;



void update_sun(int value){
    _move_sun -= 0.00055f;
    if(_move_sun+1.0 < -1.0)
    {
        _move_sun = 1.0;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, update_sun, 0);
}
void update_plane(int value) {

    if(position > 1.6)
        position = -1.2f;

    position += speed;

	glutPostRedisplay();

	glutTimerFunc(100, update_plane, 0);
}

void update_cloud_1(int value) {
    _move_cloud_1 += 0.0025f;
    if(_move_cloud_1-1.1 > 1.0)
    {
        _move_cloud_1 = -1.0;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, update_cloud_1, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_2(int value){
    _move_cloud_2 -= 0.0025f;
    if(_move_cloud_2+1.1 < -1.0)
    {
        _move_cloud_2 = 1.0;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, update_cloud_2, 0);
}


void star()
{
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0085;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();

}

void sky(){

    if(_move_sun<=1.00f && _move_sun>=0.90f){
        glClear (GL_COLOR_BUFFER_BIT);
        glBegin(GL_QUADS);
        glColor3f(0.529, 0.808, 0.922);
        glVertex2f(-1.0,1.0);
        glVertex2f(1.0,1.0);

        glColor3f(0.529, 0.808, 0.980);
        glVertex2f(1.0, -0.05);
        glVertex2f(-1.0, -0.05);
        glEnd();
    }
    else if(_move_sun<0.90f && _move_sun>=0.55f){
        glBegin(GL_QUADS);
        glColor3f(0.000, 0.749, 1.000);
        glVertex2f(-1.0,1.0);
        glVertex2f(1.0,1.0);

        glColor3f(0.8, 1.000, 1.000);
        glVertex2f(1.0, -0.05);
        glVertex2f(-1.0, -0.05);
        glEnd();
    }
    else if(_move_sun<0.55f && _move_sun>=0.35f){
        glBegin(GL_QUADS);
        glColor3f(0.000, 0.749, 1.000);
        glVertex2f(-1.0,1.0);
        glVertex2f(1.0,1.0);

        glColor3f(1.000, 0.961, 0.933);
        glVertex2f(1.0, -0.05);
        glVertex2f(-1.0, -0.05);
        glEnd();
    }

    else if(_move_sun<0.35f && _move_sun>=0.25f){
        glBegin(GL_QUADS);
        glColor3f(0.529, 0.808, 0.980);
        glVertex2f(-1.0,1.0);
        glVertex2f(1.0,1.0);

        glColor3f(1.000, 0.855, 0.725);
        glVertex2f(1.0, -0.05);
        glVertex2f(-1.0, -0.05);
        glEnd();
    }

    else if(_move_sun<0.25f && _move_sun>=0.10f){
        glBegin(GL_QUADS);
        glColor3f(0.529, 0.808, 0.980);
        glVertex2f(-1.0,1.0);
        glVertex2f(1.0,1.0);

        glColor3f(0.957, 0.643, 0.376);
        glVertex2f(1.0, -0.05);
        glVertex2f(-1.0, -0.05);
        glEnd();
    }
    else if(_move_sun<0.10f && _move_sun>=0.0f){
        glBegin(GL_QUADS);
        glColor3f(1.000, 0.388, 0.278);
        glVertex2f(-1.0,1.0);
        glVertex2f(1.0,1.0);

        glColor3f(0.957, 0.643, 0.376);
        glVertex2f(1.0, -0.05);
        glVertex2f(-1.0, -0.05);
        glEnd();
    }
    else{
        glBegin(GL_QUADS);
        glColor3f(0.412, 0.412, 0.412);
        glVertex2f(-1.0,1.0);
        glVertex2f(1.0,1.0);

        glColor3f(0.8, 1.000, 1.000);
        glVertex2f(1.0, -0.05);
        glVertex2f(-1.0, -0.05);
        glEnd();

        glPushMatrix();
        glTranslatef(0.0f, _move_sun, 0.0f);
        glTranslatef(0.80,1.05,0);
        glScalef(0.6,1,1);
        glColor3f(0.902, 0.902, 0.980);
        glBegin(GL_POLYGON);// moon
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.085;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.95,0.95,0);
        star();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.75,0.85,0);
        star();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.65,0.65,0);
        star();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.60,0.85,0);
        star();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.65,0.93,0);
        star();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.10,0.67,0);
        star();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.15,0.67,0);

        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.35,0.85,0);
        star();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.25,0.73,0);
        star();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.72,0.63,0);
        star();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.05,0.43,0);
        star();
        glPopMatrix();


        glPushMatrix();
        glTranslatef(0.15,0.13,0);
        star();
        glPopMatrix();


        glPushMatrix();
        glTranslatef(-0.15,0.88,0);
        star();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.65,0.73,0);
        star();
        glPopMatrix();
    }
}

void field_1(){
    //field 1
    glBegin(GL_QUADS);
    glColor3f(0.196, 0.804, 0.196);
    glVertex2f(1.0, -0.60);

    glColor3f(0.000, 1.000, 0.000);
    glVertex2f(-1.0, -0.60);

    glColor3f(0.486, 0.988, 0.000);
    glVertex2f(-1.0, 0.135);

    glColor3f(0.498, 1.000, 0.000);
    glVertex2f(1.0, 0.135);

    glEnd();
}

void sun_circle()
{
    glScalef(0.6,1,1);
    glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.125;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
}

void sun(){
    //Sun
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);

    if(_move_sun<=1.00 && _move_sun>=0.90f){
        glPushMatrix();
        glTranslatef(0.0f, _move_sun, 0.0f);
        glColor3f(1.000, 0.647, 0.000);
        sun_circle();
        glPopMatrix();
    }

    else if(_move_sun<0.90f && _move_sun>=0.80f){
        glPushMatrix();
        glTranslatef(0.0f, _move_sun, 0.0f);
        glColor3f(1.000, 0.843, 0.000);
        sun_circle();
        glPopMatrix();
    }

    else if(_move_sun<0.80 && _move_sun>=0.65){
        glPushMatrix();
        glTranslatef(0.0f, _move_sun, 0.0f);
        glColor3f(1.000, 1.000, 0.000);
        sun_circle();
        glPopMatrix();
    }

    else if(_move_sun<0.65 && _move_sun>=0.45){
        glPushMatrix();
        glTranslatef(0.0f, _move_sun, 0.0f);
        glColor3f(1.000, 0.843, 0.000);
        sun_circle();
        glPopMatrix();
    }

    else if(_move_sun<0.45 && _move_sun>=0.25){
        glPushMatrix();
        glTranslatef(0.0f, _move_sun, 0.0f);
        glColor3f(1.000, 0.647, 0.000);
        sun_circle();
        glPopMatrix();
    }

    else if(_move_sun<0.25 && _move_sun>=0.0){
        glPushMatrix();
        glTranslatef(0.0f, _move_sun, 0.0f);
        glColor3f(1.000, 0.549, 0.000);
        sun_circle();
        glPopMatrix();
    }

    else{
        glPushMatrix();
        glTranslatef(0.0f, _move_sun, 0.0f);
        glColor3f(1.000, 0.271, 0.000);
        sun_circle();
        glPopMatrix();
    }
}

void cloud_struct()
{
    if(NULL){}
    else{
         glColor3f(1.000, 1.000, 1.000);
    }
        glScalef(0.6,1,1);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
        glEnd();

}

void cloud_left(){
    //Cloud on the left
    glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
    glTranslatef(-0.78,0.82,0);
    cloud_struct();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
    glTranslatef(-0.74,0.87,0);
    cloud_struct();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
    glTranslatef(-0.70,0.91,0);
    cloud_struct();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
    glTranslatef(-0.65,0.88,0);
    cloud_struct();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
    glTranslatef(-0.61,0.80,0);
    cloud_struct();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
    glTranslatef(-0.68,0.77,0);
    cloud_struct();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
    glTranslatef(-0.75,0.78,0);
    cloud_struct();
    glPopMatrix();
}

void cloud_right(){
    //Cloud on the right
    glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.78,0.70,0);
    cloud_struct();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.74,0.75,0);
    cloud_struct();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.70,0.79,0);
    cloud_struct();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.65,0.76,0);
    cloud_struct();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.61,0.76,0);
    cloud_struct();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.68,0.65,0);
    cloud_struct();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.63,0.66,0);
    cloud_struct();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.75,0.66,0);
    cloud_struct();
    glPopMatrix();
}

void river(){
    glBegin(GL_QUADS);
    glColor3f(0.000, 1.000, 1.000);
    glVertex2f(1.0, -0.60);

    glColor3f(0.686, 0.933, 0.933);
    glVertex2f(-1.0, -0.60);

    glColor3f(0.498, 1.000, 0.831);
    glVertex2f(-1.0, -1.0);

    glColor3f(0.282, 0.820, 0.800);
    glVertex2f(1.0, -1.0);

    glEnd();
}

void planeWindow()
{
   glBegin(GL_POLYGON);
    glColor3f(0.00, 0.00, 0.0);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f(-0.1f, 0.1f);
    glVertex2f(0.1f, 0.1f);
    glVertex2f(0.1f, -0.1f);
   glEnd();
}
void plane()
{
   glBegin(GL_TRIANGLES);
    glColor3f(0.5, 0.5, 0.5);
    glVertex2f(0.9f, 0.0f);
    glColor3f(0.9, 0.9, 1.0);
    glVertex2f(0.5f, 0.2f);
    glColor3f(0.9, 0.9, 1.0);
    glVertex2f(0.5f, 0.0f);
   glEnd();
   glBegin(GL_POLYGON);
    glColor3f(1.00, 1.00, 1.0);
    glVertex2f(0.5f, 0.2f);
    glVertex2f(-0.4f, 0.2f);
    glVertex2f(-0.4f, 0.0f);
    glVertex2f(0.5f, 0.0f);
   glEnd();
   glBegin(GL_POLYGON);
    glColor3f(0.000, 0.5, 1.000);
    glVertex2f(-0.4f, 0.2f);
    glVertex2f(-0.6f, 0.4f);
    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.6f, 0.0f);
    glVertex2f(-0.4f, 0.0f);
   glEnd();
   glBegin(GL_POLYGON);
    glColor3f(0.000, 0.5, 1.000);
    glVertex2f(-0.1f, 0.2f);
    glVertex2f(-0.3f, 0.5f);
    glVertex2f(-0.2f, 0.5f);
    glVertex2f(0.2f, 0.2f);
   glEnd();
   glBegin(GL_POLYGON);
    glColor3f(0.000, 0.5, 1.000);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(-0.3f, -0.3f);
    glVertex2f(-0.2f, -0.3f);
    glVertex2f(0.2f, 0.0f);
   glEnd();



    glPushMatrix();
    glScalef(0.2, 0.4, 0.0);
    glTranslatef( 0.3, 0.32, 0.0);
    planeWindow();
    glTranslatef( 0.3, 0.0, 0.0);
    planeWindow();
    glTranslatef( 0.3, 0.0, 0.0);
    planeWindow();
    glTranslatef( 0.3, 0.0, 0.0);
    planeWindow();
    glPopMatrix();
}

void airplane()
{
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
      glScalef(0.2, 0.2, 0.0);
      glTranslatef(0.0, 4.0, 0.0);
      plane();
    glPopMatrix();
}


void myDisplay(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    sky();
    sun();
    field_1();
    cloud_left();
    cloud_right();
    river();
     airplane();
    glFlush();
}


void myInit (void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1.0, 0.0, 1.0);
}



int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (1366, 768);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Project");
    glutDisplayFunc(myDisplay);
    glutTimerFunc(20, update_sun, 0);
    glutTimerFunc(20, update_cloud_1, 0);
    glutTimerFunc(20, update_cloud_2, 0);
    glutTimerFunc(100, update_plane, 0);
    myInit ();
    glutMainLoop();

}
