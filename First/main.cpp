#include <iostream>
#include <cstring>
#include <vector>
#include <list>
#include <queue>

using namespace std;

int main()
{
   //task a: string=> Init,insert,remove,change
   //also copy and compare
   string str1 = "Robert";
   string str2 = "Toth";
   char ch[5] = "ama";
   char vj[] = "teur";

   cout << str1 << endl;
   cout << str2 << endl;

   str1.insert (6, " ");
   str1 += str2;

   cout << str1 << endl;

   str1.erase(1,5);
   str2 += " Awesome";

   cout << str1 << " and " << str2 << endl;

   str1.append(str2.begin()+8,str2.end());
   str2.replace(str2.begin()+5,str2.end()-4, "Hand");

   cout << str1 << " " << str2 << endl;

   strcpy (ch,vj);
   if (strcmp (ch,vj) == 0)
      cout <<"ch is " << ch << " and vj is " << vj << endl;

/////////////////////////////////////////////////////////////////////////////////

   std::vector <int> mijnvec (4);
   std::vector <int> myvec;
   std::vector <int>::iterator it = myvec.end();

   myvec.insert(it,2);
   myvec.erase(myvec.begin(),myvec.end()-1);
   mijnvec.at(1) = 33;

   for (int i : myvec)
      cout << "myvec: " << i << endl;
   for (int i : mijnvec)
      cout << "mijnvec: " << i << endl;

//////////////////////////////////////////////////////////////////////

   int nmb[] = {45,55,65,70};

   list<int> first (nmb, nmb + sizeof(nmb)/sizeof(int));
   list<int> second (4);
   list<int>::iterator it2 = second.end();

   for (int i : first){
      cout << "first list : " << i << endl;
   }
   for (int i : second){
      cout << "second list " << i << endl;
   }

   second.insert(it2,8);
   first.erase(first.begin(),first.end());
   first.emplace(first.end(), 66);

   for (int i : first){
      cout << "first list : " << i << endl;
   }
   for (int i : second){
      cout << "second list " << i << endl;
   }

///////////////////////////////////////////////////////////////////////

 queue <int> myFirstQueue;

 cout << "Size of the queue is:" << myFirstQueue.size() << endl;

   myFirstQueue.emplace(1);
   myFirstQueue.emplace(2);
   myFirstQueue.emplace(3);
   myFirstQueue.push(4);

 cout << "The size became:" << myFirstQueue.size() << endl;

   while (! myFirstQueue.empty())
   {
      int i=myFirstQueue.front();
      cout << i << endl;
      myFirstQueue.pop();
   }

 return 0;
}
