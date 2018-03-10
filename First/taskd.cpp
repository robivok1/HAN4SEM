#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
   //Using the default constructor.
   vector <string> vdata1;
   //Using an initialiser list for initialisation.
   vector <string> vdata2{"start", "setspeed 2", "stop"};

   vdata1.push_back("Hello"); //first element
   vdata2.push_back("Bello"); //4th element

   vdata1.insert(vdata1.end(),"-"); //second element
   vdata1[0] = vdata1[0] + vdata1[1] + vdata2[3];

   //vdata2=vdata1;

   cout << vdata1.size() << endl;
   cout << vdata1[0] << vdata2[4] << endl;

   vdata2.erase(vdata2.begin()+1);
   cout << vdata2[1] << endl;
   vdata2.emplace(vdata2.end(),"yo");
   cout << vdata2[3] << endl;
   return 0;
}
