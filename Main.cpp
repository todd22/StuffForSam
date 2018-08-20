#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

double sheetrock(std::ofstream& fout) // $3.5 sqft
{
	unsigned int sqft = 0;
	double pricePerSqft = 2.5;
	std::cout << "-----Sheetrock-----" << std::endl;
	std::cout << "How many square feet of sheetrock need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Sheetrock-----" << std::endl;
	fout << "How many square feet of sheetrock need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double paint1Color(std::ofstream& fout) // $2 sqft  use the square footage of the whole job
{
	unsigned int sqft = 0;
	double pricePerSqft = 2;

	std::cout << "-----Paint-----" << std::endl;
	std::cout << "This section is only for when there will only be one color of paint used." << std::endl;
	std::cout << "How many square feet is the whole job?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Paint-----" << std::endl;
	fout << "This section is only for when there will only be one color of paint used." << std::endl;
	fout << "How many square feet is the whole job?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double paint3Colors(std::ofstream& fout) // $3 sqft
{
	unsigned int sqft = 0;
	double pricePerSqft = 3;

	std::cout << "-----Paint-----" << std::endl;
	std::cout << "This section is only for when there will be 2-3 colors of paint used." << std::endl;
	std::cout << "How many square feet is the whole job?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Paint-----" << std::endl;
	fout << "This section is only for when there will be 2-3 colors of paint used." << std::endl;
	fout << "How many square feet is the whole job?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double trim(std::ofstream& fout) // $2.5 lineal feet
{
	unsigned int sqft = 0;
	double pricePerSqft = 2.5;

	std::cout << "-----Trim-----" << std::endl;
	std::cout << "How many linear feet of trim need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Trim-----" << std::endl;
	fout << "How many linear feet of trim need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double crownMoulding(std::ofstream& fout) // $5 lineal feet
{
	unsigned int sqft = 0;
	double pricePerSqft = 5;

	std::cout << "-----Crown Moulding-----" << std::endl;
	std::cout << "How many linear feet of crown moulding need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Crown Moulding-----" << std::endl;
	fout << "How many linear feet of crown moulding need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double windows(std::ofstream& fout) // $300 just the number of windows
{
	unsigned int sqft = 0;
	double pricePerSqft = 300;

	std::cout << "-----Windows-----" << std::endl;
	std::cout << "How many windows need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Windows-----" << std::endl;
	fout << "How many windows need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double tileFloors(std::ofstream& fout) // $8 sqft 
{
	unsigned int sqft = 0;
	double pricePerSqft = 8;

	std::cout << "-----Tile Floors-----" << std::endl;
	std::cout << "This section is only for floors." << std::endl;
	std::cout << "How many square feet of tile need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Tile Floors-----" << std::endl;
	fout << "This section is only for floors." << std::endl;
	fout << "How many square feet of tile need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double tileWalls(std::ofstream& fout) // $15 sqft
{
	unsigned int sqft = 0;
	double pricePerSqft = 15;

	std::cout << "-----Tile Walls-----" << std::endl;
	std::cout << "This section is only for walls." << std::endl;
	std::cout << "How many square feet of tile need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Tile Walls-----" << std::endl;
	fout << "This section is only for walls." << std::endl;
	fout << "How many square feet of tile need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double laminate(std::ofstream& fout) // $3 sqft
{
	unsigned int sqft = 0;
	double pricePerSqft = 3;

	std::cout << "-----Laminate-----" << std::endl;
	std::cout << "How many square feet of laminate need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Laminate-----" << std::endl;
	fout << "How many square feet of laminate need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double hardwood(std::ofstream& fout) // $7 sqft
{
	unsigned int sqft = 0;
	double pricePerSqft = 7;

	std::cout << "-----Hardwood-----" << std::endl;
	std::cout << "How many square feet of hardwood need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Hardwood-----" << std::endl;
	fout << "How many square feet of hardwood need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double vynilPlanks(std::ofstream& fout) // $3.5 sqft
{
	unsigned int sqft = 0;
	double pricePerSqft = 3.5;

	std::cout << "-----Vynil Plank-----" << std::endl;
	std::cout << "How many square feet of vynil plank needs to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Vynil Plank-----" << std::endl;
	fout << "How many square feet of vynil plank needs to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double carpet(std::ofstream& fout) // $20 sqyd
{
	unsigned int sqft = 0;
	double pricePerSqft = 20;

	std::cout << "-----Carpet-----" << std::endl;
	std::cout << "How many square yards of carpet need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Carpet-----" << std::endl;
	fout << "How many square yards of carpet need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double countertopsLaminate(std::ofstream& fout) // $30 sqft
{
	unsigned int sqft = 0;
	double pricePerSqft = 30;

	std::cout << "-----Laminate Countertops-----" << std::endl;
	std::cout << "How many square feet of laminate countertops need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Laminate Countertops-----" << std::endl;
	fout << "How many square feet of laminate countertops need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double countertopsGranite(std::ofstream& fout) // $80 sqft
{
	unsigned int sqft = 0;
	double pricePerSqft = 80;

	std::cout << "-----Granite Countertops-----" << std::endl;
	std::cout << "How many square feet of granite countertops need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Granite Countertops-----" << std::endl;
	fout << "How many square feet of granite countertops need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double cabinetsUpper(std::ofstream& fout) // $100 lineal feet
{
	unsigned int sqft = 0;
	double pricePerSqft = 100;

	std::cout << "-----Upper Cabinets-----" << std::endl;
	std::cout << "How many lineal feet of upper cabinets need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Upper Cabinets-----" << std::endl;
	fout << "How many lineal feet of upper cabinets need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double cabinetsLower(std::ofstream& fout) // $200 lineal feet
{
	unsigned int sqft = 0;
	double pricePerSqft = 200;

	std::cout << "-----Lower Cabinets-----" << std::endl;
	std::cout << "How many lineal feet of lower cabinets need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Lower Cabinets-----" << std::endl;
	fout << "How many lineal feet of lower cabinets need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double cabinetsIsland(std::ofstream& fout) // $50 sqft
{
	unsigned int sqft = 0;
	double pricePerSqft = 50;

	std::cout << "-----Island Cabinets-----" << std::endl;
	std::cout << "How many square feet of island cabinets need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Island Cabinets-----" << std::endl;
	fout << "How many square feet of island cabinets need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double roof(std::ofstream& fout) //sqft + openings
{
	unsigned int sqft = 0;
	double pricePerSqft = 1.5;
	unsigned int openings = 0;


	std::cout << "-----Roofing-----" << std::endl;
	std::cout << "How many square feet of roofing need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "How many openings are there in the roof?" << std::endl;
	std::cin >> openings;
	std::cout << "Price: $" << (sqft * pricePerSqft) + (openings * 50) << std::endl;
	std::cout << std::endl;

	fout << "-----Roofing-----" << std::endl;
	fout << "How many square feet of roofing need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "How many openings are there in the roof?" << std::endl;
	fout << openings << std::endl;
	fout << "Price: $" << (sqft * pricePerSqft) + (openings * 50) << std::endl;
	fout << std::endl;

	return (sqft * pricePerSqft) + (openings * 50);
}
double sidingGeneral(std::ofstream& fout) //sqft
{
	unsigned int sqft = 0;
	double pricePerSqft = 2.25;

	std::cout << "-----Siding-----" << std::endl;
	std::cout << "How many square feet of siding need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Siding-----" << std::endl;
	fout << "How many square feet of siding need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
//double sidingCementBoard(std::ofstream& fout); //sqft
//double sidingPlywood(std::ofstream& fout); //sqft
//double sidingVynil(std::ofstream& fout); //sqft
double exteriorTrim(std::ofstream& fout) //lineal feet
{
	unsigned int sqft = 0;
	double pricePerSqft = 3.5;

	std::cout << "-----Exterior Trim-----" << std::endl;
	std::cout << "How many lineal feet of exterior tirm need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Exterior Trim-----" << std::endl;
	fout << "How many lineal feet of exterior tirm need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double fixtures(std::ofstream& fout) //number of fixtures
{
	unsigned int sqft = 0;
	double pricePerSqft = 50;

	std::cout << "-----Fixtures-----" << std::endl;
	std::cout << "How many fixtures need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Fixtures-----" << std::endl;
	fout << "How many fixtures need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double switchesAndOutlets(std::ofstream& fout) //number of thingy's or sets of outlets
{
	unsigned int sqft = 0;
	double pricePerSqft = 5;

	std::cout << "-----Switches/Outlets-----" << std::endl;
	std::cout << "How many switches or outlets need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Switches/Outlets-----" << std::endl;
	fout << "How many switches or outlets need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double appliancesElectric(std::ofstream& fout) //#of appliances
{
	unsigned int sqft = 0;
	double pricePerSqft = 450;

	std::cout << "-----Electric Appliances-----" << std::endl;
	std::cout << "How many electric appliances need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Electric Appliances-----" << std::endl;
	fout << "How many electric appliances need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double appliancesGas(std::ofstream& fout) //# of appliances
{
	unsigned int sqft = 0;
	double pricePerSqft = 550;

	std::cout << "-----Gas Appliances-----" << std::endl;
	std::cout << "How many gas appliances need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Gas Appliances-----" << std::endl;
	fout << "How many gas appliances need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double appliancesWater(std::ofstream& fout) //# of appliances
{
	unsigned int sqft = 0;
	double pricePerSqft = 500;

	std::cout << "-----Water Appliances-----" << std::endl;
	std::cout << "How many water apliances need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Water Appliances-----" << std::endl;
	fout << "How many water apliances need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double toilets(std::ofstream& fout) //# of toilets
{
	unsigned int sqft = 0;
	double pricePerSqft = 200;

	std::cout << "-----Toilets-----" << std::endl;
	std::cout << "How many toilets need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Toilets-----" << std::endl;
	fout << "How many toilets need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double bathroomSinks(std::ofstream& fout) //# of sinks
{
	unsigned int sqft = 0;
	double pricePerSqft = 75;

	std::cout << "-----Bathroom Sinks-----" << std::endl;
	std::cout << "How many bathroom sinks need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Bathroom Sinks-----" << std::endl;
	fout << "How many bathroom sinks need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double kitchenSinks(std::ofstream& fout) //# of sinks
{
	unsigned int sqft = 0;
	double pricePerSqft = 200;

	std::cout << "-----Kitchen Sinks-----" << std::endl;
	std::cout << "How many kitchen sinks need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Kitchen Sinks-----" << std::endl;
	fout << "How many kitchen sinks need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double bathroomFaucets(std::ofstream& fout) //# of faucets
{
	unsigned int sqft = 0;
	double pricePerSqft = 75;

	std::cout << "-----Bathroom Faucets-----" << std::endl;
	std::cout << "How many bathroom faucets need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Bathroom Faucets-----" << std::endl;
	fout << "How many bathroom faucets need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double kitchenFaucets(std::ofstream& fout) //# of faucets
{
	unsigned int sqft = 0;
	double pricePerSqft = 150;

	std::cout << "-----Kitchen Faucets-----" << std::endl;
	std::cout << "How many kitchen faucets need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Kitchen Faucets-----" << std::endl;
	fout << "How many kitchen faucets need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double doorknobs(std::ofstream& fout) //# of doorknobs
{
	unsigned int sqft = 0;
	double pricePerSqft = 25;

	std::cout << "-----Doorknobs-----" << std::endl;
	std::cout << "How many doorknobs need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Doorknobs-----" << std::endl;
	fout << "How many doorknobs need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double gutters(std::ofstream& fout) //lineal feet w/ downspouts
{
	unsigned int sqft = 0;
	double pricePerSqft = 7;

	std::cout << "-----Gutters-----" << std::endl;
	std::cout << "How many lineal feet of gutters need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Gutters-----" << std::endl;
	fout << "How many lineal feet of gutters need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double sheerPlywood(std::ofstream& fout) //sqft
{
	unsigned int sqft = 0;
	double pricePerSqft = 1.5;

	std::cout << "-----Sheer Plywood-----" << std::endl;
	std::cout << "How many square feet of sheer plywood need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Sheer Plywood-----" << std::endl;
	fout << "How many square feet of sheer plywood need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double moistureBarrierExteriorWalls(std::ofstream& fout)
{
	unsigned int sqft = 0;
	double pricePerSqft = 0.25;

	std::cout << "-----Exterior Walls Moisture Barrier-----" << std::endl;
	std::cout << "How many square feet of exterior moisture barrier need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Exterior Walls Moisture Barrier-----" << std::endl;
	fout << "How many square feet of exterior moisture barrier need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double moistureBarrierRoofs(std::ofstream& fout)
{
	unsigned int sqft = 0;
	double pricePerSqft = 0.25;

	std::cout << "-----Roof Moisture Barrier-----" << std::endl;
	std::cout << "How many square feet of roof moisture barrier need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Roof Moisture Barrier-----" << std::endl;
	fout << "How many square feet of roof moisture barrier need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double iceBlock(std::ofstream& fout)
{
	unsigned int sqft = 0;
	double pricePerSqft = 1.5;

	std::cout << "-----Ice Block-----" << std::endl;
	std::cout << "How many lineal feet of ice block need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Ice Block-----" << std::endl;
	fout << "How many lineal feet of ice block need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double interiorSwingingDoors(std::ofstream& fout)
{
	unsigned int sqft = 0;
	double pricePerSqft = 135;

	std::cout << "-----Swinging Doors-----" << std::endl;
	std::cout << "How many swinging doors need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Swinging Doors-----" << std::endl;
	fout << "How many swinging doors need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double interiorBifoldDoors(std::ofstream& fout)
{
	unsigned int sqft = 0;
	double pricePerSqft = 250;

	std::cout << "-----Bifold Doors-----" << std::endl;
	std::cout << "How many bifold doors need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Bifold Doors-----" << std::endl;
	fout << "How many bifold doors need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double interiorBypassDoors(std::ofstream& fout)
{
	unsigned int sqft = 0;
	double pricePerSqft = 250;

	std::cout << "-----Bypass Doors-----" << std::endl;
	std::cout << "How many bypass doors need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Bypass Doors-----" << std::endl;
	fout << "How many bypass doors need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double shelfAndPole(std::ofstream& fout)
{
	unsigned int sqft = 0;
	double pricePerSqft = 7;

	std::cout << "-----Shelf and Pole-----" << std::endl;
	std::cout << "How many lineal feet of shelf and pole need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Shelf and Pole-----" << std::endl;
	fout << "How many lineal feet of shelf and pole need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double exteriorMetalDoors(std::ofstream& fout)
{
	unsigned int sqft = 0;
	double pricePerSqft = 400;

	std::cout << "-----Exterior Metal Doors-----" << std::endl;
	std::cout << "How many exterior metal doors need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Exterior Metal Doors-----" << std::endl;
	fout << "How many exterior metal doors need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double exteriorFrenchDoors(std::ofstream& fout)
{
	unsigned int sqft = 0;
	double pricePerSqft = 900;

	std::cout << "-----Exterior French Doors-----" << std::endl;
	std::cout << "How many exterior french doors need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Exterior French Doors-----" << std::endl;
	fout << "How many exterior french doors need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double slidingGlassDoor(std::ofstream& fout)
{
	unsigned int sqft = 0;
	double pricePerSqft = 700;

	std::cout << "-----Sliding Glass Doors-----" << std::endl;
	std::cout << "How many sliding glass doors need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Sliding Glass Doors-----" << std::endl;
	fout << "How many sliding glass doors need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}
double frontDoor(std::ofstream& fout)
{
	unsigned int sqft = 0;
	double pricePerSqft = 1000;

	std::cout << "-----Front Doors-----" << std::endl;
	std::cout << "How many front doors need to be done?" << std::endl;
	std::cin >> sqft;
	std::cout << "Price: $" << sqft * pricePerSqft << std::endl;
	std::cout << std::endl;

	fout << "-----Front Doors-----" << std::endl;
	fout << "How many front doors need to be done?" << std::endl;
	fout << sqft << std::endl;
	fout << "Price: $" << sqft * pricePerSqft << std::endl;
	fout << std::endl;

	return sqft * pricePerSqft;
}


double extras(std::ofstream& fout)
{
	bool moreStuff = true;
	char more = 'n';
	double total = 0;
	double addedCost = 0;
	std::string addedItem;
	while (moreStuff)
	{
		std::cout << "Do you have anything to add to the bid? (y/n)" << std::endl;
		std::cin >> more;

		fout << "Do you have anything to add to the bid? (y/n)" << std::endl;
		fout << more << std::endl;

		if (more == 'n' || more == 'N')
		{
			moreStuff = false;
			break;
		}
		getline(std::cin, addedItem);//clears the \n out of the buffer

		std::cout << "What is it?" << std::endl;
		getline(std::cin, addedItem);
		fout << addedItem << std::endl;

		std::cout << "How much does it cost? Only put the number. No dollar signs." << std::endl;
		std::cin >> addedCost;

		fout << "How much does it cost? Only put the number. No dollar signs." << std::endl;
		fout << addedCost << std::endl;

		total += addedCost;
		std::cin.get();
	}
	std::cout << std::endl << std::endl;
	fout << std::endl << std::endl;

	return total;
}


int main()
{
	std::ofstream fout;
	std::string name;

	std::cout << "Please enter the amounts to be priced of each of the following items. Do not use decimals. Just round to the nearest whole number." << std::endl;
	std::cout << "If there is none of one category to be done just enter 0." << std::endl << "Do not use commas" << std::endl << std::endl;
	std::cout << "What would you like to name this project?" << std::endl;
	std::getline(std::cin, name);
	fout.open(name.c_str());
	std::cout << std::endl;
	std::cout << "==========" << name << "==========" << std::endl << std::endl;
	fout << "==========" << name << "==========" << std::endl << std::endl;




	unsigned int total;

	double shrock = sheetrock(fout);
	double paint1 = paint1Color(fout);
	double paint3 = paint3Colors(fout);
	double trm = trim(fout);
	double crown = crownMoulding(fout);
	double windws = windows(fout);
	double tileF = tileFloors(fout);
	double tileW = tileWalls(fout);
	double lmnate = laminate(fout);
	double hdwood = hardwood(fout);
	double vynil = vynilPlanks(fout);
	double cpt = carpet(fout);
	double lamCounter = countertopsLaminate(fout);
	double granCounter = countertopsGranite(fout);
	double upCab = cabinetsUpper(fout);
	double lowCab = cabinetsLower(fout);
	double islandCab = cabinetsIsland(fout);
	double rf = roof(fout);
	double side = sidingGeneral(fout);
	double extTrim = exteriorTrim(fout);
	double fix = fixtures(fout);
	double plugs = switchesAndOutlets(fout);
	double appElec = appliancesElectric(fout);
	double appGas = appliancesGas(fout);
	double appWat = appliancesWater(fout);
	double tlts = toilets(fout);
	double bthSnk = bathroomSinks(fout);
	double ktchSnk = kitchenSinks(fout);
	double bthFcts = bathroomFaucets(fout);
	double ktchFcts = kitchenFaucets(fout);
	double dknobs = doorknobs(fout);
	double gutt = gutters(fout);
	double sheerPly = sheerPlywood(fout);
	double moistWalls = moistureBarrierExteriorWalls(fout);
	double moistRoof = moistureBarrierRoofs(fout);
	double iceBlk = iceBlock(fout);
	double swingDoor = interiorSwingingDoors(fout);
	double biDoor = interiorBifoldDoors(fout);
	double byDoor = interiorBypassDoors(fout);
	double shelfPole = shelfAndPole(fout);
	double extMetDoor = exteriorMetalDoors(fout);
	double extFrDoor = exteriorFrenchDoors(fout);
	double slideDoor = slidingGlassDoor(fout);
	double fntDoor = frontDoor(fout);
	double extra = extras(fout);

	total =
		shrock +
		paint1 +
		paint3 +
		trm +
		crown +
		windws +
		tileF +
		tileW +
		lmnate +
		hdwood +
		vynil +
		cpt +
		lamCounter +
		granCounter +
		upCab +
		lowCab +
		islandCab +
		rf +
		side +
		extTrim +
		fix +
		plugs +
		appElec +
		appGas +
		appWat +
		tlts +
		bthSnk +
		ktchSnk +
		bthFcts +
		ktchFcts +
		dknobs +
		gutt +
		sheerPly +
		moistWalls +
		moistRoof +
		iceBlk +
		swingDoor +
		biDoor +
		byDoor +
		shelfPole +
		extMetDoor +
		extFrDoor +
		slideDoor +
		fntDoor +
		extra;

	std::cout << std::endl;
	std::cout << "==========Results==========" << std::endl;
	std::cout << "The estimated cost for your remodel is $" << total << "." << std::endl;

	fout << "==========Results==========" << std::endl;
	fout << "The estimated cost for your remodel is $" << total << "." << std::endl;

	std::cin.get();
	std::cin.get();
	return 0;
}


/*int main()
{
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			std::cout << count << " ";
			count++;
		}
		std::cout << std::endl;
	}



	std::cin.get();
	return 0;
}*/