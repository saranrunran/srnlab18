#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r1, Rect *r2){
	double a = r1->x + r1->w;
	double b = r1->y-r1->h;

	double c = r2->x+r2->w;
	double d = r2->y-r2->h;

	double same_x1 = max(r1->x , r2->x);
	double same_x2 = min(a , c);

	double same_y1 = min(r1->y, r2->y);
	double same_y2 = max(b , d);

	if (same_y1-same_y2 <= 0 || same_x2-same_x1 <= 0) {
        return 0;
    }

	return (same_y1-same_y2)*(same_x2-same_x1);
}
