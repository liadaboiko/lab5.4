#include <iostream>
#include <iomanip>

using namespace std;


double s1(double N, int k = 19, double t = 1)
{
	t = (sqrt(sin(k * 1.) * sin(k * 1.) + cos((N * 1.) / (k * 1.)) * cos((N * 1.) / (k * 1.))));
	if (k <= N)
	{
		return t;
	}
	else
	{
		return t + s1(N, k - 1, t);
	}

}

double s2(double N, int k = 1, double t = 1)
{
	t = (sqrt(sin(k * 1.) * sin(k * 1.) + cos((N * 1.) / (k * 1.)) * cos((N * 1.) / (k * 1.))));
	if (k >= 19)
	{
		return t;
	}
	else
	{
		return t + s2(N, k + 1, t);
	}

}

double s3(double N, double t = 1, int k = 19)
{
	t = (sqrt(sin(k * 1.) * sin(k * 1.) + cos((N * 1.) / (k * 1.)) * cos((N * 1.) / (k * 1.))));
	if (k <= N)
		return t;
	else
		return (sqrt(sin(k * 1.) * sin(k * 1.) + cos((N * 1.) / (k * 1.)) * cos((N * 1.) / (k * 1.)))) + s3(N, t, k - 1);

}
double s4(double N, int k = 1)
{
	if (k > 19)
		return 0;
	else
		return (sqrt(sin(k * 1.) * sin(k * 1.) + cos((N * 1.) / (k * 1.)) * cos((N * 1.) / (k * 1.)))) + s4(N, k + 1);

}
double s5(double N)
{
	double S = 0;
	for (size_t k = N; k <= 19; k++)
	{
		S += sqrt(sin(k * 1.) * sin(k * 1.) + cos((N * 1.) / (k * 1.)) * cos((N * 1.) / (k * 1.)));
	}
	return S;
}







void main()
{
	cout << "n = ";
	int n;
	cin >> n;
	cout << s1(n) << endl;
	cout << s2(n, n) << endl;
	cout << s3(n) << endl;
	cout << s4(n, n) << endl;
	cout << s5(n) << endl;
	system("pause");
}
