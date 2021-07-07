#include <iostream>
#include "unit.h"

Unit unitArray[3][3];

int main(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(j == 2)
				std::cout << "[" << unitArray[i][j].getState() << "]" << std::endl;
			else
				std::cout << "[" << unitArray[i][j].getState() << "]";
		}
	}
}