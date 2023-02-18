#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include<stdio.h>



// Initialize all the global variables here
int x1, x2, y1, y2, dx, dy;
float ix, iy, step;

void display(void)
{


    glClear (GL_COLOR_BUFFER_BIT);
    //glEnd();
    glColor3f (1.0, 0.0, 0.0);

//Write down the algorithm here
    dx = abs(x2-x1);
    dy = abs(y2-y1);
    if(abs(dx) > abs(dy))
        step = dx;
    else
        step = dy;
    ix = dx / step;
    iy = dy / step;
    int x = x1, y = y1;

    glBegin(GL_POINTS);
    glVertex2i(abs(x), abs(y));
    int i = 0;
    while(i < step)
    {
        x += ix;
        y += iy;
        glVertex2i(abs(x), abs(y));

        i++;
    }

    glEnd();

    glutSwapBuffers();
}
void init (void)
{

    glClearColor (0.0, 0.0, 0.0, 0.0);   /* select clearing (background) color */
    glMatrixMode(GL_PROJECTION);        /* initialize viewing values */
    glLoadIdentity();
    glOrtho(0.0, 200.0, 0.0, 200.0, -200.0, 200.0);

}


int main(int argc, char** argv)
{


    //Scan all the values from here

    printf("Enter value of x1: ");
    scanf("%d", &x1);
    printf("Enter value of x2: ");
    scanf("%d", &x2);
    printf("Enter value of y1: ");
    scanf("%d", &y1);
    printf("Enter value of y2: ");
    scanf("%d", &y2);


    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (300, 300);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("AAKA-231");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}

