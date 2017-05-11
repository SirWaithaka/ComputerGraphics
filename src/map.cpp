/*
 * OpenGL headers
 */
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

/*
 * Other headers
 */
#include <iostream>
#include <fstream>


using namespace std;

void display()
{  
   /*
    * Read map file
    */
   fstream inStream;
   inStream.open("/docs/cpp/opengl/kenya/src/data/map.dat", ios::in);
   if (inStream.fail()) {
      cout << "Couldnt open file" << endl;
      return;
   }

   GLint numPoints;
   GLint numDots;
   GLint x, y;
   inStream >> numPoints;

   glClear(GL_COLOR_BUFFER_BIT);

   while (inStream >> x >> y) {
      glBegin(GL_POINTS);
         glVertex2i((GLint) x, (GLint) y);
      glEnd();
   }

   glFlush();
   inStream.close();
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