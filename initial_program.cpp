#include <iostream>

#include <string>

using namespace std;

 

void sortNumbers(int sortArray[], int howManyToSort){

 

}

int main(){

            int howManyToSort = 5;

            int *sortArray = NULL;

            int loopIndex = 0;

 

            cout << " Enter how many numbers to sort: ";

            cin >> howManyToSort;

            cout << endl;

            sortArray = new int[howManyToSort];

 

            for (loopIndex = 0; loopIndex < howManyToSort; loopIndex++)

            {

                        cout << " Enter number: ";

                        cin >> sortArray[loopIndex];

                        cout << endl;

            }

 

            sortNumbers(sortArray, howManyToSort);

}