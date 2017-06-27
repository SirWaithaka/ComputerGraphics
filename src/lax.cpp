#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>


void lax()
{
   glClear(GL_COLOR_BUFFER_BIT);
   // L-shape
   glBegin(GL_LINE_LOOP);
      glVertex2i(10,100);
      glVertex2i(10,20);
      glVertex2i(80,20);
      glVertex2i(80,40);
      glVertex2i(30,40);
      glVertex2i(30,100);
   glEnd();
   // A shape
   glBegin(GL_LINE_LOOP);
      glVertex2i(120,20);
      glVertex2i(150,20);
      glVertex2i(175,60);
      glVertex2i(205,60);
      glVertex2i(220,20);
      glVertex2i(250,20);
      glVertex2i(240,100);
      glVertex2i(130,100);
   glEnd();
   glBegin(GL_LINE_LOOP);
      glVertex2i(300,20);
      glVertex2i(340,20);
      glVertex2i(365,60);
      glVertex2i(390,20);
      glVertex2i(430,20);
      glVertex2i(400,70);
      glVertex2i(430,120);
      glVertex2i(390,120);
      glVertex2i(365,80);
      glVertex2i(340,120);
      glVertex2i(300,120);
      glVertex2i(330,70);
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
   glLineWidth(1.0);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluOrtho2D(0.0, 600.0, 0.0, 480.0);

}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE);
   glutInitWindowPosition(100, 100);
   glutInitWindowSize(600, 480);
   glutCreateWindow("Big Dots");
   init();
   glutDisplayFunc(lax);
   glutMainLoop();
}