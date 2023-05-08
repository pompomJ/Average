#include <iostream>
using namespace std;

//平均点を求めるプログラム

int main()
{
	int student[5];
	int sum;
	double avg;
	int i;

	student[0] = 62;
	student[1] = 56;
	student[2] = 82;
	student[3] = 77;
	student[4] = 90;

	sum = 0; 
	for ( i = 0; i < 5; i++)
	{
		sum += student[i];
	}

	avg = sum / 5.0;
	cout << "•½‹Ï“_‚Í" << avg << "“_‚Å‚·B\n";

	return 0;
}
