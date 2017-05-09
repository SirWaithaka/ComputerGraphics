#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>


void display()
{  
   glClear(GL_COLOR_BUFFER_BIT);
   glBegin(GL_POINTS);
    glVertex2d(41.899578000000005, 3.9774445);
    glVertex2d(41.8736506, 3.9379500999999997);
    glVertex2d(41.8725241, 3.9362340999999996);
    glVertex2d(41.871452999999995, 3.9339675);
   glEnd();
   glFlush();
}

void init()
{
   // set the background color
   glClearColor(1.0, 1.0, 1.0, 0.0);
   // set the drawing color
   glColor3f(0.0f, 0.0f, 0.0f);
   // set the dot size
   glPointSize(4.0);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluOrtho2D(0.0, 800.0, 0.0, 600.0);

}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE);
   glutInitWindowPosition(100, 100);
   glutInitWindowSize(800, 600);
   glutCreateWindow("Map of Kenya");
   init();
   glutDisplayFunc(display);
   glutMainLoop();
}