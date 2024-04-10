#include <iostream>
using namespace std;
#include "triunghi.h";

int main()
{
	
	triunghi t1(3, 10, 11.6, 18.3, 2.5, 14.9);
	cout << "Primele coordonate ale varfurilor sunt: [(" << t1.getV1a() << "," << t1.getV2a() << ");(" << t1.getV2a() << "," << t1.getV2b() << ");(" << t1.getV3a() << "," << t1.getV3b() << ")]" << endl;
	t1.printArie();
	t1.checkDrept();
	t1.setV1(4, 8);
	t1.setV2(4, 2);
	t1.setV3(6, 2);
	cout << "Noile coordonate ale varfurilor sunt: [(" << t1.getV1a() << ","
		<< t1.getV2a() << ");(" << t1.getV2a() << "," << t1.getV2b() << ");(" <<
		t1.getV3a() << "," << t1.getV3b() << ")]" << endl;
	t1.printArie();
	t1.checkDrept();
	return 0;
}

