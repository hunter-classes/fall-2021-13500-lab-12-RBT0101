#include <iostream>
#include <vector>
#include "funcs.h"

std::vector<int> makeVector(int n){
	std::vector<int> newVector;
	for (int i=0; i<n; i++){
		newVector.push_back(i);
	}
	
	return newVector;
}

std::vector<int> goodVibes(const std::vector<int> &v){
	std::vector<int> positiveVectorNum;
	for (int i=0; i<v.size(); i++){
		if (v[i] > 0) positiveVectorNum.push_back(v[i]);
	}
	
	return positiveVectorNum;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
	for (int i=0; i<vegeta.size(); i++){
		goku.push_back(vegeta[i]);
	}
	
	vegeta.clear();
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
	std::vector<int> pairWiseVector;
	int i = 0;
	int v1Size = v1.size();
	int v2Size = v2.size();
	while ((i<v1Size) || (i<v2Size)){
		if (i<v1Size && i<v2Size) pairWiseVector.push_back(v1[i]+v2[i]);
		else if (i<v1Size) pairWiseVector.push_back(v1[i]);
		else pairWiseVector.push_back(v2[i]);
		i++;
	}
	
	return pairWiseVector;
}
