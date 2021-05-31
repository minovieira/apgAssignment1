#include <iostream>
using namespace std;


//Different fields



//------------------------
void enegineering() {

	cout << " Welcome to the Engineering section " << endl;
	cout << "              - -              " << endl;
	cout << "This are companies offering internships at the moment" << endl;
	cout << "select choice and press enter" << endl;

	int tech_Option;
	do
	{
		cout << "1.Rosing Mine" << endl;
		cout << "2.Minolio Mine" << endl;
		cout << "3.Cicor Mine" << endl;
		cout << "========================================== " << endl;


		cout << "Enter choice: "; cin >> tech_Option;

		switch (tech_Option)
		{
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;

		default:
			if (tech_Option != 3) {
				cout << ("Invalid choice, try again.");
			}
			break;
		}
	} while (tech_Option < 3);


	cout << " ==========================================" << endl;
}
void health_science() {

	cout << " Welcome to the Health Science section " << endl;
	cout << "              - -              " << endl;
	cout << "This are companies offering internships at the moment" << endl;
	cout << "select choice and press enter" << endl;

	int tech_Option;
	do
	{
		cout << "1.Katutura Hospital" << endl;
		cout << "2.Mino's clinic" << endl;
		cout << "3.Dental Services" << endl;
		cout << "5.Path Care" << endl;
		cout << "6.Lady Pohamba Hospital" << endl;
		cout << "7.Windhoek State Hospital" << endl;
		cout << "========================================== " << endl;


		cout << "Enter choice: "; cin >> tech_Option;

		switch (tech_Option)
		{
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		case 6:

			break;
		case 7:

			break;

		default:
			if (tech_Option != 7) {
				cout << ("Invalid choice, try again.");
			}
			break;
		}
	} while (tech_Option < 7);


	cout << " ==========================================" << endl;
}
void business_finances() {

	cout << " Welcome to the technology section " << endl;
	cout << "              - -              " << endl;
	cout << "This are companies offering internships at the moment" << endl;
	cout << "select choice and press enter" << endl;

	int tech_Option;
	do
	{
		cout << "1.Accounting Firm" << endl;
		cout << "2.PWC" << endl;
		cout << "3.Deloitte" << endl;
		cout << "5.EDB & Associates" << endl;
		cout << "6.Kisting Consult" << endl;
		cout << "========================================== " << endl;


		cout << "Enter choice: "; cin >> tech_Option;

		switch (tech_Option)
		{
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		case 6:

			break;
		default:
			if (tech_Option != 6) {
				cout << ("Invalid choice, try again.");
			}
			break;
		}
	} while (tech_Option < 7);


	cout << " ==========================================" << endl;
}
//--------------------------

void NUST() {

	cout << "Vacasies - 3 " << endl;
	cout << " Position - 3 We developers " << endl;
	cout << " Description - should be a full stack developer " << endl;
	cout << "						   - -                        " << endl;
	cout << "Spots available - 3 " << endl;
	cout << "Duration 3 months " << endl;
}
void WildlifeResort() {
	cout << "  " << endl;
	cout << " ==========================================" << endl;
	cout << "Available information " << endl;
	cout << "Vacasies - 3 " << endl;
	cout << " Position - 1 graphic designer, 2 Web dev " << endl;
	cout << " Description - should be skilled in Photoshop and HTML, JavaScriptt " << endl;
	cout << "------------------------------"<<endl;
		cout << "Spots available -  " << endl;
	cout << "Duration 3 months " << endl;
	cout << "  " << endl;
	cout << " ==========================================" << endl;
}
void TheCatch() {

	cout << "Vacasies - 3 " << endl;
	cout << " Position - 1 graphic designer, 1 Web dev " << endl;
	cout << " Description - should be skilled in Photoshop and HTML, JavaScriptt " << endl;
	cout << "						   - -                        " << endl;
	cout << "Spots available - 2 " << endl;
	cout << "Duration 3 months " << endl;
}
void NBC() {

	cout << "Vacasies - 3 " << endl;
	cout << " Position - 1 graphic designer, 1 Web dev " << endl;
	cout << " Description - should be skilled in Photoshop and HTML, JavaScriptt " << endl;
	cout << "						   - -                        " << endl;
	cout << "Spots available - 2 " << endl;
	cout << "Duration 3 months " << endl;
}
void SADCPF() {

	cout << "Vacasies - 3 " << endl;
	cout << " Position - 1 graphic designer, 1 Web dev " << endl;
	cout << " Description - should be skilled in Photoshop and HTML, JavaScriptt " << endl;
	cout << "						   - -                        " << endl;
	cout << "Spots available - 2 " << endl;
	cout << "Duration 3 months " << endl;
}
void UN() {

	cout << "Vacasies - 3 " << endl;
	cout << " Position - 1 graphic designer, 1 Web dev " << endl;
	cout << " Description - should be skilled in Photoshop and HTML, JavaScriptt " << endl;
	cout << "						   - -                        " << endl;
	cout << "Spots available - 2 " << endl;
	cout << "Duration 3 months " << endl;
}
void social_science() {

	cout << " Welcome to the Social Scince section " << endl;
	cout << "              - -              " << endl;
	cout << "This are companies offering internships at the moment" << endl;
	cout << "select choice and press enter" << endl;

	int Social_Option;
	do
	{
		cout << "1.NUST" << endl;
		cout << "2.Wildlife Resort" << endl;
		cout << "3.The Catch" << endl;
		cout << "4.NBC" << endl;
		cout << "5.SADCPF" << endl;
		cout << "6.UN" << endl;
		cout << "========================================== " << endl;


		cout << "Enter choice: "; cin >> Social_Option;

		switch (Social_Option)
		{
		case 1:
			NUST();
			break;
		case 2:
			WildlifeResort();
			break;
		case 3:
			TheCatch();
			break;
		case 4:
			NBC();
			break;
		case 5:
			SADCPF();
			break;
		case 6:
			UN();
			break;

		default:
			if (Social_Option != 6) {
				cout << ("Invalid choice, try again.");
			}
			break;
		}
	} while (Social_Option < 6);


	cout << " ==========================================" << endl;
}
//---------------------------
void mtc() {
	cout << "  " << endl;
	cout << " ==========================================" << endl;
	cout << "Available information " << endl;
	cout << "Vacasies - 3 " << endl;
	cout << " Position - 1 graphic designer, 2 Web dev " << endl;
	cout << " Description - should be skilled in Photoshop and HTML, JavaScriptt " << endl;
	cout << "-----------------------------------------------"<<endl;
		cout << "Spots available -  " << endl;
	cout << "Duration 3 months " << endl;
	cout << "  " << endl;
	cout << " ==========================================" << endl;
}
void wedesign() {

	cout << "Vacasies - 3 " << endl;
	cout << " Position - 3 We developers " << endl;
	cout << " Description - should be a full stack developer " << endl;
	cout << "						   - -                        " << endl;
	cout << "Spots available - 3 " << endl;
	cout << "Duration 3 months " << endl;
}
void telecom() {

	cout << "Vacasies - 3 " << endl;
	cout << " Position - 1 graphic designer, 1 Web dev " << endl;
	cout << " Description - should be skilled in Photoshop and HTML, JavaScriptt " << endl;
	cout << "						   - -                        " << endl;
	cout << "Spots available - 2 " << endl;
	cout << "Duration 3 months " << endl;
}
void UNDPTech() {

	cout << "Vacasies - 3 " << endl;
	cout << " Position - 1 graphic designer, 1 Web dev " << endl;
	cout << " Description - should be skilled in Photoshop and HTML, JavaScriptt " << endl;
	cout << "						   - -                        " << endl;
	cout << "Spots available - 2 " << endl;
	cout << "Duration 3 months " << endl;
}
void SADCTech() {

	cout << "Vacasies - 3 " << endl;
	cout << " Position - 1 graphic designer, 1 Web dev " << endl;
	cout << " Description - should be skilled in Photoshop and HTML, JavaScriptt " << endl;
	cout << "						   - -                        " << endl;
	cout << "Spots available - 2 " << endl;
	cout << "Duration 3 months " << endl;
}
void vadoTech() {

	cout << "Vacasies - 3 " << endl;
	cout << " Position - 1 graphic designer, 1 Web dev " << endl;
	cout << " Description - should be skilled in Photoshop and HTML, JavaScriptt " << endl;
	cout << "						   - -                        " << endl;
	cout << "Spots available - 2 " << endl;
	cout << "Duration 3 months " << endl;
}
void technology() {

	cout << "  " << endl;
	cout << " ==========================================" << endl;
	cout << " Welcome to the technology section " << endl;
	cout << "              - -              " << endl;
	cout << "This are companies offering internships at the moment" << endl;
	cout << "select choice and press enter" << endl;
	int tech_Option;
	do
	{
		cout << "1.MTC" << endl;
		cout << "2.Wedesign" << endl;
		cout << "3.Telecom" << endl;
		cout << "5.UNDP-tech" << endl;
		cout << "6.SADC-tech" << endl;
		cout << "7.Vado-tech" << endl;
		cout << "========================================== " << endl;


		cout << "Enter choice: "; cin >> tech_Option;

		switch (tech_Option)
		{
		case 1:
			cout << "You selected MTC" << endl;
			mtc();
			break;
		case 2:
			wedesign();
			break;
		case 3:
			telecom();
			break;
		case 4:
			UNDPTech();
			break;
		case 5:
			SADCTech();
			break;
		case 6:
			vadoTech();
			break;

		default:
			if (tech_Option != 6) {
				cout << ("Invalid choice, try again.");
			}
			break;
		}
	} while (tech_Option < 6);


	cout << " ==========================================" << endl;
}
//..............................
void optionField() {


	cout << " ==========================================" << endl;
	cout << " Welcome to the Intership Finder " << endl;
	cout << " ------------------------------------------" << endl;
	cout << " Select desired field option and press enter " << endl;
	cout << "              - -              " << endl;

	//the choice to be made
	int option;
	do
	{
		cout << "1.Social Science" << endl;
		cout << "2.Technology" << endl;
		cout << "3.Enegineering" << endl;
		cout << "4.Health science" << endl;
		cout << "5.Business/Finances" << endl;
		cout << "========================================== " << endl;


		cout << "Enter choice: "; cin >> option;

		switch (option)
		{
		case 1:

			break;
		case 2:
			cout << "You selected Technology" << endl;
			technology();
			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		default:
			if (option != 5) {
				cout << ("Invalid choice, try again.");
			}
			break;
		}
	} while (option != 5);

}
int main()
{

	optionField();
	return 0;

}