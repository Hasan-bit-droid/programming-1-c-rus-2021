<<<<<<< HEAD
#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int t = 0;
	int t1 = 45;
	int t2 = 5;
	int t3 = 15;
	int h = 9 * 60;

	/* n - lesson number
	*  t - the number of minutes after the start of classes, after which the lesson will end
	   t1 - duration of lessons
	   t2 - durations of short breaks
	   t3 - duration of long breaks
	*/
	cin >> n;
	t = h + t1 * n;
	t += (n - 1) * t2;
	t += (n - 1) / 2 * (t3 - t2);

	cout << t / 60 << " " << t % 60 << endl;
	return EXIT_SUCCESS;
=======
#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int t = 0;
	int t1 = 45;
	int t2 = 5;
	int t3 = 15;
	int h = 9 * 60;

	/* n - lesson number
	*  t - the number of minutes after the start of classes, after which the lesson will end
	   t1 - duration of lessons
	   t2 - durations of short breaks
	   t3 - duration of long breaks
	*/
	cin >> n;
	t = h + t1 * n;
	t += (n - 1) * t2;
	t += (n - 1) / 2 * (t3 - t2);

	cout << t / 60 << " " << t % 60 << endl;
	return EXIT_SUCCESS;
>>>>>>> 96ef0ba26f0e24d8a9f62888b1436c1c4c558e10
}