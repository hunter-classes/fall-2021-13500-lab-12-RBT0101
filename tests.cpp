#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <vector>
#include "funcs.h"

TEST_CASE("Testing Task A"){
	std::vector<int> v1A = makeVector(-6);
	std::vector<int> v1B = makeVector(0);
	std::vector<int> v1C = makeVector(10);
	std::vector<int> v1COut = {0,1,2,3,4,5,6,7,8,9};
	CHECK(v1A.size() == 0);
	CHECK(v1B.size() == 0);
	CHECK(v1C == v1COut);
}

TEST_CASE("Testing Task B"){
	std::vector<int> v2A{-1,-3,-4,1,2,5};
	std::vector<int> v2B{0,0,2,4,100,-11023,12031};
	std::vector<int> v2C{-1,-2,-3,-4,-5};
	
	//Output from method
	std::vector<int> v2AOut = goodVibes(v2A);
	std::vector<int> v2BOut = goodVibes(v2B);
	std::vector<int> v2COut = goodVibes(v2C);
	
	//Expected output
	std::vector<int> v2AE{1,2,5};
	std::vector<int> v2BE{2,4,100,12031};
	std::vector<int> v2CE{};
	
	CHECK (v2AOut == v2AE);
	CHECK (v2BOut == v2BE);
	CHECK (v2COut == v2CE);
}

TEST_CASE("Testing Task C"){
	std::vector<int> v3A{1,2,3};
	std::vector<int> v3B{0,0,-5,6};
	std::vector<int> v3C{-1,-2};
	std::vector<int> v3D{5};
	
	gogeta(v3A, v3B);
	gogeta(v3C, v3D);
	
	std::vector<int> v3AE = {1,2,3,0,0,-5,6};
	std::vector<int> v3BE = {};
	std::vector<int> v3CE = {-1,-2,5};
	std::vector<int> v3DE = {};
	
	CHECK (v3A == v3AE);
	CHECK (v3B == v3BE);
	CHECK (v3C == v3CE);
	CHECK (v3D == v3DE);
}

TEST_CASE("Testing Task D"){
	std::vector<int> v4A{1,-6,-2};
	std::vector<int> v4B{0,3,1,5};
	std::vector<int> v4C{-1,0,-1,1,2};
	std::vector<int> v4D{5,1,-5,3};
	
	std::vector<int> v4ABOut = sumPairWise(v4A, v4B);
	std::vector<int> v4CDOut = sumPairWise(v4C, v4D);
	
	std::vector<int> v4ABE{1,-3,-1,5};
	std::vector<int> v4CDE{4,1,-6,4,2};
	
	CHECK(v4ABOut == v4ABE);
	CHECK(v4CDOut == v4CDE);
}



