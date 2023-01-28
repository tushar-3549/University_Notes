#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 40.0, 0.0, 30.0, -1.0, 1.0);
    //gluOrtho2D(0.0,300.0,0.0,300.0);
}


void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //code
    glBegin(GL_QUADS);

    glColor3f(1.0,0.0,0.0);
    //Trapezoid
    glVertex3f(3.0f, 20.0f, 0.0f);
    glVertex3f(11.0f, 20.0f, 0.0f);
    glVertex3f(11.0f, 27.0f, 0.0f);
    glVertex3f(3.0f, 27.0f, 0.0f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(1.0,1.0,0.0);
    //Pentagon
	glVertex3f(25.0f, 23.0f, 0.0f);
	glVertex3f(27.0f, 20.0f, 0.0f);
	glVertex3f(32.0f, 20.0f, 0.0f);

	glVertex3f(34.0f, 23.0f, 0.0f);
	glVertex3f(32.0f, 26.0f, 0.0f);
	glVertex3f(27.0f, 26.0f, 0.0f);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f(0.0,1.0,0.0);
    //Trapezoid
    glVertex3f(7.0f, 7.0f, 0.0f);
    glVertex3f(15.0f, 7.0f, 0.0f);
    glVertex3f(15.0f, 15.0f, 0.0f);
    glVertex3f(5.0f, 15.0f, 0.0f);

    glVertex3f(5.0f, 10.0f, 0.0f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3f(1.0,1.0,1.0);
    //Trapezoid
    glVertex3f(2.0f, 5.0f, 0.0f);
    glVertex3f(10.0f, 5.0f, 0.0f);
    glVertex3f(10.0f, 10.0f, 0.0f);
    glVertex3f(2.0f, 10.0f, 0.0f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.0,0.0,1.0);
    //Pentagon
	glVertex3f(25.0f, 7.0f, 0.0f);
	glVertex3f(32.0f, 7.0f, 0.0f);
	glVertex3f(30.0f, 10.0f, 0.0f);

	glVertex3f(33.0f, 10.0f, 0.0f);
	glVertex3f(30.0f, 14.0f, 0.0f);

    glEnd();


    glBegin(GL_TRIANGLES);

    glColor3f(0.0,1.0,0.0);

    //Triangle

    glVertex3f(34.0f, 5.0f, 0.0f);
    glVertex3f(37.0f, 10.0f, 0.0f);
    glVertex3f(30.0f, 10.0f, 0.0f);

    glEnd();



    glutSwapBuffers();
}

int main(int argc,char **argv)
{


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Lab Task");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
