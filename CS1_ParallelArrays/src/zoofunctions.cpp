#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;
const int MAXANIMALS = 100;

void clearCIN(){
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}
int inputAnimals(string speciesNameArray[], int populationArray[], float lifeSpanArray[]){
	int animalCounter = 0;
	string inputSpecies;
	int inputPop = 0;
	float inputLifeSpan = 0.0;
	for(int i = 0; i < MAXANIMALS; i++){
		cout << "Please enter Animal Species: ";
		getline(cin, inputSpecies);
		if(inputSpecies == "-999"){
			break;
		}
		cout << "Please enter the life span of " << inputSpecies << endl;
		cin >> inputLifeSpan;
		clearCIN();
		if(inputLifeSpan == -999){
			break;
		}
		cout << "Please enter the current population of " << inputSpecies << endl;
		cin >> inputPop;
		clearCIN();
		speciesNameArray[i] = inputSpecies;
		populationArray[i] = inputPop;
		lifeSpanArray[i] = inputLifeSpan;
		animalCounter++;
		}
	return animalCounter;
}
void printAnimalReport(string speciesNameArray[], int populationArray[], float lifeSpanArray[], int arraySize){
	for(int i = 0; i < arraySize; i++ ){
			cout << left << "Population of " << setw(8) <<speciesNameArray[i] << setw(8) << " is:" << setw(8) << populationArray[i] << setw(8) << " each may live " << setw(8) << lifeSpanArray[i] << " years."<< endl;
		}
}

