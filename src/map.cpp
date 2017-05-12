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


/*
 * constant variables
 */
const GLint screenWidth = 800;
const GLint screenHeight = 640;


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

   // will hold coordinate values from file
   GLint x, y;

   glClear(GL_COLOR_BUFFER_BIT);
   
   glBegin(GL_LINE_LOOP);
      // read until EOF
      while (inStream >> x >> y) {
            glVertex2i(x, y);
      }
   glEnd();

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
   gluOrtho2D(0.0, (GLdouble) screenWidth, 0.0, (GLdouble) screenHeight);

}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE);
   glutInitWindowPosition(100, 100);
   glutInitWindowSize(screenWidth, screenHeight);
   glutCreateWindow("Map of Kenya");
   init();
   glutDisplayFunc(display);
   glutMainLoop();
}