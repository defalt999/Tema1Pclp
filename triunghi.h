#pragma once
class triunghi {
private:
	double v1a;
	double v1b;
	double v2a;
	double v2b;
	double v3a;
	double v3b;
public:
	triunghi(double, double, double, double, double, double);
	double getV1a();
	double getV1b();
	double getV2a();
	double getV2b();
	double getV3a();
	double getV3b();
	void setV1(double,double);
	void setV2(double, double);
	void setV3(double, double);
	void printArie();
	void checkDrept();
	
};
