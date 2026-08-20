#include <iostream>
#include <string>

using namespace std;

struct food{
	string name;
	float calories;
	float grams;
	float calPerGram = calories/grams;
};

void calCalculator(float calories, float grams) {
	//bool isHealthy;
	string healthStatus;
	float calPerGrams = calories/grams;
	bool isHealthy = calPerGrams < 4;
	if (!isHealthy) {
		healthStatus = "That's too Unhealthy.";
	} else {
		healthStatus = "That's healthy. You can consume it.";
	}

	cout << healthStatus << "It has " << calPerGrams << " cal/grams. \n";
}

int main() {
	float cal, gr;
	cout << "Introduce calories:" << endl;
	cin >> cal;
	cout << "Introduce grams: " << endl;
	cin >> gr;
	calCalculator(cal,gr);
	return 0;
}
