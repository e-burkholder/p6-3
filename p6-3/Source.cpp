#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double num, sum = 0, sumsq = 0, count = 0, avg = 0, devi;
	bool done = false;
	cout << "Enter number or Q to quit: ";

	while (!done) {
		cin >> num;
		cout << " ";

		if (cin.fail()) {
			if (count == 0) {
				cout << "no data to process... exiting... ";
				return 1;
			}

			done = true;
			avg = sum/count;
			devi = sqrt((sumsq - (1 / count) * sum * sum) / (count - 1));
			cout << "n = " << count;
			cout << ", average = " << avg;
			cout << ", standard deviation = " << devi;
		}
		else {
			count++;
			sum += num;
			sumsq += num * num;

		}
	}


	return 0;
}