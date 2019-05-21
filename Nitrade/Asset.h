#pragma once
#include <iostream>
namespace Nitrade {

	class IAsset
	{
	public:
		IAsset() = default;
		virtual ~IAsset() = default;

		//properties
		virtual std::string getName() const  = 0;
		virtual std::string getDataPath() const = 0;
		virtual float getPip() const = 0;
		virtual float getPoint() const = 0;
		virtual float getPipCost() const = 0;
		virtual float getCommission() const = 0;


	};

	class Asset 
		: public IAsset
	{
	private:
		float _pip{ 0.0 };
		float _pipCost{ 0.0 };
		int _digits{ 0 };
		float _commission{ 0.0 };
		std::string _name{ (9, ' ') };
		std::string _dataPath{""};

		

	public:
		Asset(std::string csv);
		Asset() = default;		
		virtual ~Asset() = default;

		//properties
		std::string getName() const { return _name; }
		std::string getDataPath() const { return _dataPath; }
		float getPip() const { return _pip; }
		float getPoint() const { return (float)pow(1, -_digits); }
		float getPipCost() const { return _pipCost; }
		float getCommission() const { return _commission;  }


	};

}

