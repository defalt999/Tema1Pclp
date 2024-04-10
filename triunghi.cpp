#include <iostream>
using namespace std;
#include "triunghi.h";
#include <cmath>;


triunghi::triunghi(double a, double b, double c, double d, double e, double f) {
	v1a = a;
	v1b = b;
	v2a = c;
	v2b = d;
	v3a = e;
	v3b = f;
}

double triunghi::getV1a() {
	return v1a;
}
double triunghi::getV1b()
{
	return v1b;
}
double triunghi::getV2a()
{
	return v2a;
}
double triunghi::getV2b()
{
	return v2b;
}
double triunghi::getV3a()
{
	return v3a;
}
double triunghi::getV3b()
{
	return v3b;
}
void triunghi::setV1(double x, double y) {
	v1a = x;
	v1b = y;
}
void triunghi::setV2(double x, double y) {
	v2a = x;
	v2b = y;
}
void triunghi::setV3(double x, double y) {
	v3a = x;
	v3b = y;
}
void triunghi::printArie() {
	double lungD1;//AB
	double lungD2;//BC
	double lungD3;//AC
	double semiper;
	double arie;
	lungD1 = sqrt((v2a - v1a) * (v2a - v1a) + (v2b - v1b)* (v2b - v1b));
	lungD2 = sqrt((v3a - v2a) * (v3a - v2a) + (v3b - v2b) * (v3b - v2b));
	lungD3 = sqrt((v3a - v1a) * (v3a - v1a) + (v3b - v1b) * (v3b - v1b));
	semiper = (lungD1 + lungD2 + lungD3) / 2;
	arie = sqrt(semiper * (semiper - lungD1) * (semiper - lungD2) * (semiper - lungD3));
	cout << "Aria triunghiului este: " << arie<<endl;
}
void triunghi::checkDrept() {
	double lungD1;
	double lungD2;
	double lungD3;
	lungD1 = sqrt((v2a - v1a) * (v2a - v1a) + (v2b - v1b) * (v2b - v1b));
	lungD2 = sqrt((v3a - v2a) * (v3a - v2a) + (v3b - v2b) * (v3b - v2b));
	lungD3 = sqrt((v3a - v1a) * (v3a - v1a) + (v3b - v1b) * (v3b - v1b));
	if (lungD2 * lungD2 + lungD3 * lungD3==lungD1*lungD1) {
		cout << "Triunghiul este dreptunghic";
	}else if (lungD2 * lungD2 + lungD1 * lungD1 == lungD3 * lungD3) {
		cout << "Triunghiul este dreptunghic";
	}else if (lungD1 * lungD1 + lungD3 * lungD3 == lungD2 * lungD2) {
		cout << "Triunghiul este dreptunghic";
	}
	else {
		cout << "Triunghiul nu este dreptunghic"<<endl;
	}
	
}