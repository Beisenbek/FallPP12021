#include <bits/stdc++.h>

using namespace std;

struct Point {
	int x, y;

	Point() {}
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

Point p;

bool cmp(Point a, Point b) {
	double disa = sqrt(pow(a.x-p.x,2)+pow(a.y-p.y,2));
	double disb = sqrt(pow(b.x-p.x,2)+pow(b.y-p.y,2));
	return disa < disb;
}

int main() {
	int x,y;
	cin >> x >> y;
	p.x = x;
	p.y = y;
	int n;
	cin >> n;
	vector <Point> v;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back(Point(x,y));
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++)
		cout << v[i].x << " " << v[i].y << endl;


}