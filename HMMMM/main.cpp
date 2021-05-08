#include "ShapesBlocks.h"




int main(){
    //creating objetcs
     rectBlocks a;
     SqrBaseRectBlocks b;
     cuboidBlocks c;
     cylindricalBlocks d;
     sphericalBlocks e;
      ifstream file;
    file.open("datablocks.txt");
    int score1,score2,score3;
    while( file>>score1 && file>>score2 && file>>score3 ){

        a.addItem(score1,score2,score3);
        b.addItem(score1,score2,score3);
        c.addItem(score1,score2,score3);
        d.addItem(score1,score2,score3);
        e.addItem(score1,score2,score3);


    }



     cout << " dimentions for rect blocks "<<endl;
     a.printVector();
      cout << " dimentions for rect blocks "<<endl;
     a.printVectorSqr();


    cout << " dimentions for square blocks "<<endl;


    b.printVectorSqr();
      cout << " dimentions for cubiod blocks "<<endl;

      c.printVectorCube();


      cout << " diameter of cylindrecal block "<<endl;
      d.printVectorCylindrical();


        cout << " diameter of Sphere block "<<endl;
        e.printVectorSphere();


           cout << " Sorting  of Sphere block in ascending order "<<endl;
           e.SortAscendingOfDiameterSPhere();


             cout << " Sorting surface area  "<<endl;
             e.SphericalSurface();

              cout << " Sorting Volume of sphere  "<<endl;
              e.VolumeSPhere();


               cout << " Sorting Cylindrical diameter "<<endl;
               d.SortingDiameterOFCylinder();

                cout << "surface Area of  Cylindrical  "<<endl;
                d.SurfaceAreaOfCylinder();


                cout << "sort length  of  Cylindrical object  "<<endl;
                d.sortLengthOfCylinder();

   //rectBlocks b;
   //SqrBaseRectBlocks c;
  // c.addItem()
   //SqrBaseRectBlocks n;
     //cout << "Square blocks"<<endl;

   // a.printVector();
    //cout << "Square blocks reults"<<endl;

      //a.WHequal(b);
     // c.WHLequal(n);







    return 0;


}
