#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //to read from file:
    ifstream myfile;
    myfile.open("bebo.txt");
    cout<<myfile.rdbuf();
    myfile.close();


    //to write in file:
    /*ofstream myfile;
    myfile.open("bebo.txt");
    myfile<<"hello world";
    myfile.close();*/


    //to write or read:
    /*fstream myfile;     //out=ááßÊÇÈå
    myfile.open("bebo.txt",ios::out|ios::app);
    myfile<<"hiii";
    myfile.close();*/

    ////////////////////////
    /*if(myfile.fail()){
        cout<<"error";
    }*/
    return 0;
}
