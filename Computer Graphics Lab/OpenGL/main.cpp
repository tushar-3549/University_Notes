#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

int xc, yc, r;

void drawCirclePoints(int x, int y)
{
    // drawing the circle points in all 8 octants
    glVertex2i(xc + x, yc + y);
    glVertex2i(xc + y, yc + x);
    glVertex2i(xc - x, yc + y);
    glVertex2i(xc - y, yc + x);
    glVertex2i(xc + x, yc - y);
    glVertex2i(xc + y, yc - x);
    glVertex2i(xc - x, yc - y);
    glVertex2i(xc - y, yc - x);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POINTS);

    int x = 0, y = r;
    float p = 1 - r;

    drawCirclePoints(x, y);

    while (x < y)
    {
        if (p < 0)
        {
            x++;
            p += 2*x + 1;
        }
        else
        {
            x++;
            y--;
            p += 2*(x-y) + 1;
        }
        drawCirclePoints(x, y);
    }

    glEnd();
    glFlush();
}

void init (void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 200, 0, 200);
}

int main(int argc, char** argv)
{
    printf("Enter center point (xc,yc) and radius: ");
    scanf("%d %d %d",&xc, &yc, &r); // 100 100 50

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Mid-Point Circle Drawing with any center point");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
