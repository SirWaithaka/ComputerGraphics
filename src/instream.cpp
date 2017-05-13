#include <iostream>
#include <fstream>

using namespace std;


int main()
{
   fstream inStream("data/map.dat");

   if (inStream.fail()) {
      cout << "Couldnt open file" << endl;
      return 0;
   }

   int lines;
   int points;
   int x, y;

   while (inStream >> x >> y) {
      cout << x << " " << y << endl;
   }
   inStream.close();
}