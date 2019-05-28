#include "Asset.h"



Nitrade::Asset::Asset(std::string csv)
{

	std::string word;

	// used for breaking words 
	std::stringstream stream(csv);

	// read every column data in the format
	//Name,Digits,Default Pip Cost per Lot,PipAmount,Datafile
	int colIndex = 0;
	while (std::getline(stream, word, ',')) {

		switch (colIndex)
		{
		case 0:
			word.resize(9, ' ');
			_name = word;
			break;
		case 1:
			_digits = std::stoi(word);
			break;
		case 2:
			_pipCost = std::stof(word);
			break;
		case 3:
			_pip = std::stof(word);
			break;
		case 4:
			_commission = std::stof(word);
			break;
		case 5:
			_dataPath = word;
			break;
		}

		colIndex++;
	}

}

