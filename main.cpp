#include <iostream>
#include <vector>
#include "funcs.h"

int main(){
	std::cout << "Tesing Task A" << std::endl;
	std::cout << "Initializing vector elements [0,4] << std::endl;
	std::vector<int> vec1 = makeVector(5);
	for (int i=0; i<vec1.size(); i++){
		std::cout << vec1[i] << " ";
	}
	std::cout << "\n\n";
	 
	std::cout << "Tesing Task B" << std::endl;
	std::cout << "Initialized vector{-1,-2,-5,0,2,3,1,5}, expecting new vector to contain {2,3,1,5}" << std::endl;
	std::vector<int> vec2{-1,-2,-5,0,2,3,1,5};
	std::vector<int> vec2Out = goodVibes(vec2);
	for (int i=0; i<vec2Out.size(); i++){
		std::cout << vec2Out[i] << " ";
	}
	std::cout << "\n\n";
	 
	std::cout << "Tesing Task C" << std::endl;
	std::cout <<"Initialized vector1{-1,-2,0,2,3} and vector2{4,5} expecting new vector to contain {-1,-2,0,2,3,4,5} and vector2 be empty";
	std::vector<int> vec3A{-1,-2,0,2,3};
	std::vector<int> vec3B{4,5};
	std::vector<int> vec3Out = gogeta(vec3A, vec3B);
	for (int i=0; i<vec3A.size(); i++){
		std::cout << vec3A[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "vector2 size = " + vec3B.size();
	std::cout << "\n\n";
	
	std::cout << "Tesing Task D" << std::endl;
	std::cout << "Initialized vector1{-1,5,2} and vector2{-2,3,0,6}, expecting new vector to contain {-3,8,2,6}
	std::vector<int> vec4A{-1,5,2};
	std::vector<int> vec4B{-2,3,0,6};
	std::vector<int> vec4Out = sumPairWise(vec4A, vec4B);
	for (int i=0; i<vec4Out.size(); i++){
		std::cout << vec4Out[i] << " ";
	}
	std::cout << "\n\n";
	return 0;
}	

