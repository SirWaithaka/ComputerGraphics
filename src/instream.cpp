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
   int x, y;

   inStream >> lines;
   while (inStream >> x >> y) {
      cout << x << " " << y << endl;
   }
   cout << lines << endl;
   inStream.close();
}