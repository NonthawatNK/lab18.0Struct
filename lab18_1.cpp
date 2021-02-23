#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2){
	double x1 = max(r1.x,r2.x);
	double y1 = min(r1.y,r2.y);
	double x2 = min(r1.w+r1.x,r2.w+r2.x);
	double y2 = max(r1.y-r1.h,r2.y-r2.h);
	double newx = x2 - x1 ;
	double newy = y1 - y2 ;
	
	if(newx > 0 && newy>0) return  newx * newy ;
	else return 0;


}

int main (){
Rect R1 = {1,1,5,5};
Rect R2 = {2,2,5,5};	
cout << overlap(R1,R2)<<endl;	
/*
Rect R1 = {1,1,5,5};
Rect R2 = {7,2,3,3};
cout << overlap(R1,R2) <<endl;

Rect R1 = {-1,2,6.9,9.6};
Rect R2 = {0,0,1.2,2.5};	
cout << overlap(R1,R2) <<endl ;	
*/
return 0;

}