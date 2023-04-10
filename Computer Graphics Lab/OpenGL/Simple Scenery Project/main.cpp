#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include<stdio.h>

void display(void)
{

    glClear (GL_COLOR_BUFFER_BIT);

//Write down the code here
// water
    glColor3f (0.255, 0.412, 0.882);

    glBegin(GL_QUADS);

    //Trapezoid
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 10.0f, 0.0f);
    glVertex3f(100.0f, 35.0f, 0.0f);
    glVertex3f(100.0f, 0.0f, 0.0f);

    glEnd();
    //.................. boat
    glColor3f (0.0, 0.0, 1.0);

    glBegin(GL_QUADS);
    //Trapezoid
    glVertex3f(55.0f, 15.0f, 0.0f);
    glVertex3f(60.0f, 10.0f, 0.0f);
    glVertex3f(85.0f, 10.0f, 0.0f);
    glVertex3f(90.0f, 15.0f, 0.0f);

    glEnd();

    //................
    glBegin(GL_TRIANGLES);

    glColor3f (1.0, 0.10, 0.10);

    glVertex3f(50.0f, 16.0f, 0.0f);
    glVertex3f(66.0f, 16.0f, 0.0f);
    glVertex3f(66.0, 24.0f, 0.0f);
    glEnd();

    //...........
    glColor3f (0.184, 0.310, 0.310);

    glBegin(GL_QUADS);

    //Trapezoid
    glVertex3f(75.0f, 15.0f, 0.0f);
    glVertex3f(76.0f, 15.0f, 0.0f);
    glVertex3f(76.0f, 24.0f, 0.0f);
    glVertex3f(75.0f, 24.0f, 0.0f);

    glEnd();
    //.............
    glColor3f (0.184, 0.310, 0.310);

    glBegin(GL_QUADS);

    //Trapezoid
    glVertex3f(79.0f, 15.0f, 0.0f);
    glVertex3f(80.0f, 15.0f, 0.0f);
    glVertex3f(80.0f, 24.0f, 0.0f);
    glVertex3f(79.0f, 24.0f, 0.0f);

    glEnd();

    //.................. field

    glColor3f (0.420, 0.557, 0.137);

    glBegin(GL_QUADS);

    //Trapezoid
    glVertex3f(0.0f, 10.0f, 0.0f);
    glVertex3f(100.0f, 35.0f, 0.0f);
    glVertex3f(100.0f, 51.0f, 0.0f);
    glVertex3f(0.0f, 51.0f, 0.0f);

    glEnd();

    // ................. house 1
    glColor3f (1.0, 0.14, 0.0);

    glBegin(GL_QUADS);

    //Trapezoid
    glVertex3f(5.0f, 30.0f, 0.0f);
    glVertex3f(5.0f, 20.0f, 0.0f);
    glVertex3f(25.0f, 20.0f, 0.0f);
    glVertex3f(25.0f, 30.0f, 0.0f);

    glEnd();
    //......... door
    glColor3f (0.0, 0.31, 0.31);

    glBegin(GL_QUADS);

    //Trapezoid
    glVertex3f(12.0f, 27.0f, 0.0f);
    glVertex3f(12.0f, 20.0f, 0.0f);
    glVertex3f(18.0f, 20.0f, 0.0f);
    glVertex3f(18.0f, 27.0f, 0.0f);

    glEnd();
    //.....................
    glColor3f (0.38, 0.19, 0.0);

    glBegin(GL_POLYGON);

    //polygon
    glVertex3f(3.0f, 30.0f, 0.0f);
    glVertex3f(5.0f, 30.0f, 0.0f);
    glVertex3f(25.0f, 30.0f, 0.0f);
    glVertex3f(27.0f, 30.0f, 0.0f);
    glVertex3f(24.0f, 34.0f, 0.0f);
    glVertex3f(6.0f, 34.0f, 0.0f);

    glEnd();
    //.....................
    glColor3f (0.0, 0.31, 0.31);

    glBegin(GL_QUADS);

    //Trapezoid
    glVertex3f(7.0f, 23.0f, 0.0f);
    glVertex3f(10.0f, 23.0f, 0.0f);
    glVertex3f(10.0f, 26.0f, 0.0f);
    glVertex3f(7.0f, 26.0f, 0.0f);

    glEnd();
    //....................
    glColor3f (0.0, 0.31, 0.31);

    glBegin(GL_QUADS);

    //Trapezoid
    glVertex3f(21.0f, 23.0f, 0.0f);
    glVertex3f(24.0f, 23.0f, 0.0f);
    glVertex3f(24.0f, 26.0f, 0.0f);
    glVertex3f(21.0f, 26.0f, 0.0f);

    glEnd();
    //................ straw
    glColor3f (0.81, 0.71, 0.23);

    glBegin(GL_POLYGON);

    //polygon
    glVertex3f(25.0f, 22.0f, 0.0f);
    glVertex3f(35.0f, 22.0f, 0.0f);
    glVertex3f(35.0f, 26.0f, 0.0f);
    glVertex3f(33.0f, 28.0f, 0.0f);
    glVertex3f(30.0f, 30.0f, 0.0f);
    glVertex3f(25.0f, 27.0f, 0.0f);

    glEnd();
    //..............
    glColor3f (0.50, 0.0, 0.30);

    glBegin(GL_QUADS);
    //Trapezoid
    glVertex3f(40.0f, 25.0f, 0.0f);
    glVertex3f(41.0f, 25.0f, 0.0f);
    glVertex3f(41.0f, 32.0f, 0.0f);
    glVertex3f(40.0f, 32.0f, 0.0f);

    glEnd();
    //................head tree
    glColor3f (0.0, 0.43, 0.0);

    glBegin(GL_POLYGON);

    //polygon
    glVertex3f(45.0f, 32.0f, 0.0f);

    glVertex3f(46.0f, 34.0f, 0.0f);
    glVertex3f(45.0f, 34.0f, 0.0f);
    glVertex3f(46.0f, 36.0f, 0.0f);

    glVertex3f(45.0f, 36.0f, 0.0f);

    glVertex3f(46.0f, 36.0f, 0.0f);

    glVertex3f(41.0f, 44.0f, 0.0f);
    glVertex3f(36.0f, 36.0f, 0.0f);
    glVertex3f(38.0f, 36.0f, 0.0f);
    glVertex3f(36.0f, 34.0f, 0.0f);
    glVertex3f(38.0f, 34.0f, 0.0f);
    glVertex3f(36.0f, 32.0f, 0.0f);

    glEnd();

    //.............................house 2
    glColor3f (0.7, 0.14, 0.0);

    glBegin(GL_QUADS);

    //Trapezoid
    glVertex3f(55.0f, 43.0f, 0.0f);
    glVertex3f(55.0f, 35.0f, 0.0f);
    glVertex3f(68.0f, 35.0f, 0.0f);
    glVertex3f(68.0f, 43.0f, 0.0f);

    glEnd();
    //.........door
    glColor3f (0.0, 0.65, 0.42);

    glBegin(GL_QUADS);

    //Trapezoid
    glVertex3f(60.0f, 41.0f, 0.0f);
    glVertex3f(60.0f, 35.0f, 0.0f);
    glVertex3f(64.0f, 35.0f, 0.0f);
    glVertex3f(64.0f, 41.0f, 0.0f);

    glEnd();
    //.....................
    glColor3f (0.38, 0.19, 0.0);

    glBegin(GL_POLYGON);

    //polygon
    glVertex3f(55.0f, 43.0f, 0.0f);
    glVertex3f(68.0f, 43.0f, 0.0f);
    glVertex3f(70.0f, 43.0f, 0.0f);
    glVertex3f(68.0f, 46.0f, 0.0f);
    glVertex3f(55.0f, 46.0f, 0.0f);
    glVertex3f(53.0f, 43.0f, 0.0f);

    glEnd();
    //.....................
    glColor3f (0.0, 0.31, 0.31);

    glBegin(GL_QUADS);

    //Trapezoid
    glVertex3f(56.0f, 37.0f, 0.0f);
    glVertex3f(58.0f, 37.0f, 0.0f);
    glVertex3f(58.0f, 40.0f, 0.0f);
    glVertex3f(56.0f, 40.0f, 0.0f);

    glEnd();
    //....................
    glColor3f (0.0, 0.31, 0.31);

    glBegin(GL_QUADS);

    //Trapezoid
    glVertex3f(65.0f, 37.0f, 0.0f);
    glVertex3f(67.0f, 37.0f, 0.0f);
    glVertex3f(67.0f, 40.0f, 0.0f);
    glVertex3f(65.0f, 40.0f, 0.0f);

    glEnd();
    //............ tree2
    glColor3f (0.50, 0.0, 0.30);

    glBegin(GL_QUADS);

    //Trapezoid
    glVertex3f(90.0f, 38.0f, 0.0f);
    glVertex3f(91.0f, 38.0f, 0.0f);
    glVertex3f(91.0f, 42.0f, 0.0f);
    glVertex3f(90.0f, 42.0f, 0.0f);

    glEnd();
    //........... head tree2
    glBegin(GL_TRIANGLES);

    glColor3f (0.0, 0.43, 0.0);

    glVertex3f(87.0f, 42.0f, 0.0f);
    glVertex3f(94.0f, 42.0f, 0.0f);
    glVertex3f(91.0, 50.0f, 0.0f);
    glEnd();
    //....................sky
    glColor3f (0.118, 0.565, 1.0);

    glBegin(GL_QUADS);

    //Trapezoid
    glVertex3f(0.0f, 51.0f, 0.0f);
    glVertex3f(100.0f, 51.0f, 0.0f);
    glVertex3f(100.0f, 80.0f, 0.0f);
    glVertex3f(0.0f, 80.0f, 0.0f);

    glEnd();
    //............ behind
    glBegin(GL_TRIANGLES);

    glColor3f (0.627, 0.332, 0.176);

    glVertex3f(0.0f, 51.0f, 0.0f);
    glVertex3f(4.0f, 56.0f, 0.0f);
    glVertex3f(20.0, 51.0f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3f (0.627, 0.332, 0.176);

    glVertex3f(20.0f, 51.0f, 0.0f);
    glVertex3f(30.0f, 56.0f, 0.0f);
    glVertex3f(40.0, 51.0f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3f (0.627, 0.332, 0.176);

    glVertex3f(40.0f, 51.0f, 0.0f);
    glVertex3f(50.0f, 56.0f, 0.0f);
    glVertex3f(60.0, 51.0f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3f (0.627, 0.332, 0.176);

    glVertex3f(60.0f, 51.0f, 0.0f);
    glVertex3f(70.0f, 56.0f, 0.0f);
    glVertex3f(80.0, 51.0f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3f (0.627, 0.332, 0.176);

    glVertex3f(80.0f, 51.0f, 0.0f);
    glVertex3f(90.0f, 56.0f, 0.0f);
    glVertex3f(100.0, 51.0f, 0.0f);
    glEnd();

    // ..............house 3 ....................

    glColor3f (0.35, 0.35, 0.67);

    glBegin(GL_QUADS);

    //Trapezoid
    glVertex3f(77.0f, 38.0f, 0.0f);
    glVertex3f(85.0f, 38.0f, 0.0f);
    glVertex3f(85.0f, 43.0f, 0.0f);
    glVertex3f(77.0f, 43.0f, 0.0f);

    glEnd();

    glColor3f (0.50, 0.0, 0.30);

    glBegin(GL_QUADS);

    //Trapezoid
    glVertex3f(77.0f, 43.0f, 0.0f);
    glVertex3f(85.0f, 43.0f, 0.0f);
    glVertex3f(83.0f, 46.0f, 0.0f);
    glVertex3f(75.0f, 46.0f, 0.0f);

    glEnd();
    // door
    glColor3f (1.0, 0.5, 0.0);

    glBegin(GL_QUADS);

    //Trapezoid
    glVertex3f(80.0f, 38.0f, 0.0f);
    glVertex3f(82.0f, 38.0f, 0.0f);
    glVertex3f(82.0f, 41.0f, 0.0f);
    glVertex3f(80.0f, 41.0f, 0.0f);

    glEnd();
    //...........
    glColor3f (0.737255, 0.560784, 0.560784);

    glBegin(GL_POLYGON);

    //polygon
    glVertex3f(73.0f, 43.0f, 0.0f);
    glVertex3f(73.0f, 39.0f, 0.0f);
    glVertex3f(77.0f, 38.0f, 0.0f);
    glVertex3f(77.0f, 43.0f, 0.0f);
    glVertex3f(75.0f, 46.0f, 0.0f);

    glEnd();
    //..............
    glColor3f (0.50, 0.0, 0.30);

    glBegin(GL_QUADS);

    //Trapezoid
    glVertex3f(72.0f, 43.0f, 0.0f);
    glVertex3f(73.0f, 43.0f, 0.0f);
    glVertex3f(76.0f, 45.0f, 0.0f);
    glVertex3f(75.0f, 46.0f, 0.0f);

    glEnd();



    //glEnd();


    glutSwapBuffers();
}
void init (void)
{

    glClearColor (0.0, 0.0, 0.0, 0.0);   /* select clearing (background) color */
    glMatrixMode(GL_PROJECTION);        /* initialize viewing values */
    glLoadIdentity();
    glOrtho(0.0, 100.0, 0.0, 80.0, -200.0, 200.0);

}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Project");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
