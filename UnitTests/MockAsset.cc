#pragma once
#include "gmock/gmock.h"  // Brings in Google Mock. - installed from nuget
#include "NitradeLib.h"

using namespace Nitrade;
using namespace std;
using namespace Utils;

class MockAsset : public IAsset {
public:

	//properties
	MOCK_METHOD0(getName, string());
	MOCK_METHOD0(getDataPath, string());



};