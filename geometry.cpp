#include <iostream>
#include "CPunct.h"
#include "CDreapta.h"
#include "CCerc.h"
#include "CDreptunghi.h"
#include "CPatrat.h"

using namespace std;

int main()
{
    CPunct c1(3, 7), p1(4, 7), p2(1, 11), p3(1, 17), p4(9, 17), p5(9,11);
    CCerc cerc1(c1, p1); //cercul are centrul in punctul c1, iar punctul p1 apartine conturului cercului
    cerc1.printArie();
    cerc1.printPerim();
    cout << endl;
    CPatrat patrat1(p1, p2);//patratul are una dintre laturi delimitata de punctele p1 si p2
    patrat1.printArie();
    patrat1.printPerim();
    cout << endl;
    CDreptunghi dreptunghi1(p2, p3, p4, p5);//dreptunghiul este delimitat de cele patru puncte
    dreptunghi1.printArie();
    dreptunghi1.printPerim();
    return 0;
}

