
#include <vector>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

#include <algorithm>



using namespace std;


// Base class


class  rectBlocks{
 public :
     vector<int>w;
     vector<int>h;
     vector<int>l;



void  printVector();
void printVectorSqr();
void addItem(int a,int b ,int c);






     };




// Derived class
class SqrBaseRectBlocks : public rectBlocks{



 public :
         vector<int>length;
       vector<int>width;
        vector<int>height;



   void   printVectorCube();
     void printVectorCylindrical();
   void SortingDiameterOFCylinder();
void sortLengthOfCylinder();
void SurfaceAreaOfCylinder();






};

class  cuboidBlocks: public SqrBaseRectBlocks {

 public :


      vector<int>W;
     vector<int>H;
     vector<int>L;
     void printVectorSphere();

      void SortAscendingOfDiameterSPhere();

         void SphericalSurface();
   void VolumeSPhere();








};

class cylindricalBlocks:public SqrBaseRectBlocks{




} ;

class  sphericalBlocks: public cuboidBlocks{





};
