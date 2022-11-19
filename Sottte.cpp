#include <iostream>
#include <ctime>
using namespace std;
double qr(double r1, double r2) {
	double s = circles(r1) - circles(r2)
	return s;
}
double qe( double r) {
	 return  3.14 * r * r;
}
int qw(double x)  {
	if (x < 0) return -1;
	if (x == 0) return 0;
	if (x > 0) return 1;
}
int qq(double a, double b, double c ) {
	double  d = b * b - 4 * a * c;
	if (d > 0) return 2;
	if (d == 0) return 1;
	if (d < 0) return 0;
}
int main() {
	//16
	/*int  A , B;
	cin >> A >> B;
	cout << qw(A) + qw(B) << endl;*/
	//17
	/*double a, b, c;
	cin >> a >> b >> c;
	cout << qq(a , b ,c)  << endl;*/
	//18
	/*int s, r;
	cin >> r;
	for (int i = 1; i <= 3; ++i) {
		double s = qe(r);
		cout << qe(s) << endl;
	}
	return 0;*/
	//19
	//int  q , w , e, r, t , y ;
	//cin >> q >> w >> e >> r >> t >> y;	
	//	cout << qr ( q , w ) << endl << qr (e , r) << endl << qr(t , y) <<  endl;
	//}

}