#pragma once
#include "gmock/gmock.h"  // Brings in Google Mock. - installed from nuget
#include "NitradeLib.h"

using namespace Nitrade;
using namespace std;
using namespace Utils;

class MockStrategySet : public IStrategySet {

	MOCK_METHOD1(run, void(IPriceData* dataSet));
	MOCK_METHOD2(createFrom, void(IStrategyDefinition* strategyDefintion, IAsset* assetName));
	MOCK_METHOD2(init, void(ITradeManager* tradeManager, IAssetData* assetData));

};