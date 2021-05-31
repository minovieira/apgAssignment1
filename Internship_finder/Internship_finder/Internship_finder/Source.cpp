#include <iostream>
#include <fstream>
#include <string>
#include <climits>

using namespace std;
using std::cout;
using std::cin;

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

	//file implementation
	std::cout << "Enter the name of CV file you wish to create or append\n //note your filename should be your student No and end with .txt: ";
	std::string filename;
	std::cin >> filename;

	std::ofstream cvfile;
	// Creates and opens a text file
	cvfile.open(filename.c_str(), std::ios::app);


	if (cvfile.is_open()) {
		std::cout << "(Success Opening File)\n\n";
	}

	std::string cv_message;
	std::cout << "you are currently applying for this job, \ntype in your \nname: \nsurname: \nstudent_no: \nbackground: \nand other factors important for your CV application\n\n";
	std::cin.ignore(INT_MAX, '\n');
	std::getline(std::cin, cv_message);

	//user input into file

	cvfile << cv_message << std::endl;

	cvfile.close();



	//-----------------------------------------------------------

	//cvfile << "This is the cv input file\n"; // this is writing outputting data to cvfile
	 // Closes the file
	std::cout << "\nSuccesfully wrote to file\n\n";
	std::cout << "-----------------------------\n\n";
	cvfile.close();

	//reading from file
	std::cout << "Your CV HAS Been compiled for Review and is saved, \nkindly wait a few days for response we will contact you for any feedback\n\n";

	std::cout << "Here's a Review of your current compiled CV\n\n";
	std::cout << "-----------------------------\n\n";

	std::string fileText;

	std::ifstream MyReadFile(filename.c_str());

	while (getline(MyReadFile, fileText)) {

		//outputting the text from the file
		std::cout << fileText << std::endl;
	}

	//closing file
	MyReadFile.close();
	std::cout << "\n\n-----------------------------\n\n";
}
void wedesign() {

	cout << "Vacasies - 3 " << endl;
	cout << " Position - 3 We developers " << endl;
	cout << " Description - should be a full stack developer " << endl;
	cout << "						   - -                        " << endl;
	cout << "Spots available - 3 " << endl;
	cout << "Duration 3 months " << endl;

	//file implementation
	std::cout << "Enter the name of CV file you wish to create or append\n //note your filename should be your student No and end with .txt: ";
	std::string filename;
	std::cin >> filename;

	std::ofstream cvfile;
	// Creates and opens a text file
	cvfile.open(filename.c_str(), std::ios::app);


	if (cvfile.is_open()) {
		std::cout << "(Success Opening File)\n\n";
	}

	std::string cv_message;
	std::cout << "you are currently applying for this job, \ntype in your \nname: \nsurname: \nstudent_no: \nbackground: \nand other factors important for your CV application\n\n";
	std::cin.ignore(INT_MAX, '\n');
	std::getline(std::cin, cv_message);

	//user input into file

	cvfile << cv_message << std::endl;

	cvfile.close();



	//-----------------------------------------------------------

	//cvfile << "This is the cv input file\n"; // this is writing outputting data to cvfile
	 // Closes the file
	std::cout << "\nSuccesfully wrote to file\n\n";
	std::cout << "-----------------------------\n\n";
	cvfile.close();

	//reading from file
	std::cout << "Your CV HAS Been compiled for Review and is saved, \nkindly wait a few days for response we will contact you for any feedback\n\n";

	std::cout << "Here's a Review of your current compiled CV\n\n";
	std::cout << "-----------------------------\n\n";

	std::string fileText;

	std::ifstream MyReadFile(filename.c_str());

	while (getline(MyReadFile, fileText)) {

		//outputting the text from the file
		std::cout << fileText << std::endl;
	}

	//closing file
	MyReadFile.close();
	std::cout << "\n\n-----------------------------\n\n";
}
void telecom() {

	cout << "Vacasies - 3 " << endl;
	cout << " Position - 1 graphic designer, 1 Web dev " << endl;
	cout << " Description - should be skilled in Photoshop and HTML, JavaScriptt " << endl;
	cout << "						   - -                        " << endl;
	cout << "Spots available - 2 " << endl;
	cout << "Duration 3 months " << endl;

	//file implementation
	std::cout << "Enter the name of CV file you wish to create or append\n //note your filename should be your student No and end with .txt: ";
	std::string filename;
	std::cin >> filename;

	std::ofstream cvfile;
	// Creates and opens a text file
	cvfile.open(filename.c_str(), std::ios::app);


	if (cvfile.is_open()) {
		std::cout << "(Success Opening File)\n\n";
	}

	std::string cv_message;
	std::cout << "you are currently applying for this job, \ntype in your \nname: \nsurname: \nstudent_no: \nbackground: \nand other factors important for your CV application\n\n";
	std::cin.ignore(INT_MAX, '\n');
	std::getline(std::cin, cv_message);

	//user input into file

	cvfile << cv_message << std::endl;

	cvfile.close();



	//-----------------------------------------------------------

	//cvfile << "This is the cv input file\n"; // this is writing outputting data to cvfile
	 // Closes the file
	std::cout << "\nSuccesfully wrote to file\n\n";
	std::cout << "-----------------------------\n\n";
	cvfile.close();

	//reading from file
	std::cout << "Your CV HAS Been compiled for Review and is saved, \nkindly wait a few days for response we will contact you for any feedback\n\n";

	std::cout << "Here's a Review of your current compiled CV\n\n";
	std::cout << "-----------------------------\n\n";

	std::string fileText;

	std::ifstream MyReadFile(filename.c_str());

	while (getline(MyReadFile, fileText)) {

		//outputting the text from the file
		std::cout << fileText << std::endl;
	}

	//closing file
	MyReadFile.close();
	std::cout << "\n\n-----------------------------\n\n";
}
void UNDPTech() {

	cout << "Vacasies - 3 " << endl;
	cout << " Position - 1 graphic designer, 1 Web dev " << endl;
	cout << " Description - should be skilled in Photoshop and HTML, JavaScriptt " << endl;
	cout << "						   - -                        " << endl;
	cout << "Spots available - 2 " << endl;
	cout << "Duration 3 months " << endl;

	//file implementation
	std::cout << "Enter the name of CV file you wish to create or append\n //note your filename should be your student No and end with .txt: ";
	std::string filename;
	std::cin >> filename;

	std::ofstream cvfile;
	// Creates and opens a text file
	cvfile.open(filename.c_str(), std::ios::app);


	if (cvfile.is_open()) {
		std::cout << "(Success Opening File)\n\n";
	}

	std::string cv_message;
	std::cout << "you are currently applying for this job, \ntype in your \nname: \nsurname: \nstudent_no: \nbackground: \nand other factors important for your CV application\n\n";
	std::cin.ignore(INT_MAX, '\n');
	std::getline(std::cin, cv_message);

	//user input into file

	cvfile << cv_message << std::endl;

	cvfile.close();



	//-----------------------------------------------------------

	//cvfile << "This is the cv input file\n"; // this is writing outputting data to cvfile
	 // Closes the file
	std::cout << "\nSuccesfully wrote to file\n\n";
	std::cout << "-----------------------------\n\n";
	cvfile.close();

	//reading from file
	std::cout << "Your CV HAS Been compiled for Review and is saved, \nkindly wait a few days for response we will contact you for any feedback\n\n";

	std::cout << "Here's a Review of your current compiled CV\n\n";
	std::cout << "-----------------------------\n\n";

	std::string fileText;

	std::ifstream MyReadFile(filename.c_str());

	while (getline(MyReadFile, fileText)) {

		//outputting the text from the file
		std::cout << fileText << std::endl;
	}

	//closing file
	MyReadFile.close();
	std::cout << "\n\n-----------------------------\n\n";
}
void SADCTech() {

	cout << "Vacasies - 3 " << endl;
	cout << " Position - 1 graphic designer, 1 Web dev " << endl;
	cout << " Description - should be skilled in Photoshop and HTML, JavaScriptt " << endl;
	cout << "						   - -                        " << endl;
	cout << "Spots available - 2 " << endl;
	cout << "Duration 3 months " << endl;

	//file implementation
	std::cout << "Enter the name of CV file you wish to create or append\n //note your filename should be your student No and end with .txt: ";
	std::string filename;
	std::cin >> filename;

	std::ofstream cvfile;
	// Creates and opens a text file
	cvfile.open(filename.c_str(), std::ios::app);


	if (cvfile.is_open()) {
		std::cout << "(Success Opening File)\n\n";
	}

	std::string cv_message;
	std::cout << "you are currently applying for this job, \ntype in your \nname: \nsurname: \nstudent_no: \nbackground: \nand other factors important for your CV application\n\n";
	std::cin.ignore(INT_MAX, '\n');
	std::getline(std::cin, cv_message);

	//user input into file

	cvfile << cv_message << std::endl;

	cvfile.close();



	//-----------------------------------------------------------

	//cvfile << "This is the cv input file\n"; // this is writing outputting data to cvfile
	// Closes the file
	std::cout << "\nSuccesfully wrote to file\n\n";
	std::cout << "-----------------------------\n\n";
	cvfile.close();

	//reading from file
	std::cout << "Your CV HAS Been compiled for Review and is saved, \nkindly wait a few days for response we will contact you for any feedback\n\n";

	std::cout << "Here's a Review of your current compiled CV\n\n";
	std::cout << "-----------------------------\n\n";

	std::string fileText;

	std::ifstream MyReadFile(filename.c_str());

	while (getline(MyReadFile, fileText)) {

		//outputting the text from the file
		std::cout << fileText << std::endl;
	}

	//closing file
	MyReadFile.close();
	std::cout << "\n\n-----------------------------\n\n";
}
void vadoTech() {

	cout << "Vacasies - 3 " << endl;
	cout << " Position - 1 graphic designer, 1 Web dev " << endl;
	cout << " Description - should be skilled in Photoshop and HTML, JavaScriptt " << endl;
	cout << "						   - -                        " << endl;
	cout << "Spots available - 2 " << endl;
	cout << "Duration 3 months " << endl;

	//file implementation
	std::cout << "Enter the name of CV file you wish to create or append\n //note your filename should be your student No and end with .txt: ";
	std::string filename;
	std::cin >> filename;

	std::ofstream cvfile;
	// Creates and opens a text file
	cvfile.open(filename.c_str(), std::ios::app);


	if (cvfile.is_open()) {
		std::cout << "(Success Opening File)\n\n";
	}

	std::string cv_message;
	std::cout << "you are currently applying for this job, \ntype in your \nname: \nsurname: \nstudent_no: \nbackground: \nand other factors important for your CV application\n\n";
	std::cin.ignore(INT_MAX, '\n');
	std::getline(std::cin, cv_message);

	//user input into file

	cvfile << cv_message << std::endl;

	cvfile.close();

	//Dynamic allocation of memory
	int grades_no;
	int* ptr;

	cout << "Enter the number of subjects you have this semester: "<<endl;
	cin >> grades_no;

	ptr = new int[grades_no];
	cout << "Enter all your result for this semester: " << endl;
	for (int i = 0; i < grades_no; i++)
	{
		cin >> ptr[i]; 
	}
	cout<<"Your Grade for this semester are:" << endl;
	for (int i = 0; i < grades_no; i++)
	{
		cin >> ptr[i];
	}





	//-----------------------------------------------------------

	//cvfile << "This is the cv input file\n"; // this is writing outputting data to cvfile
	 // Closes the file
	std::cout << "\nSuccesfully wrote to file\n\n";
	std::cout << "-----------------------------\n\n";
	cvfile.close();

	//reading from file
	std::cout << "Your CV HAS Been compiled for Review and is saved, \nkindly wait a few days for response we will contact you for any feedback\n\n";

	std::cout << "Here's a Review of your current compiled CV\n\n";
	std::cout << "-----------------------------\n\n";

	std::string fileText;

	std::ifstream MyReadFile(filename.c_str());

	while (getline(MyReadFile, fileText)) {

		//outputting the text from the file
		std::cout << fileText << std::endl;
	}

	//closing file
	MyReadFile.close();
	std::cout << "\n\n-----------------------------\n\n";
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
		cout << "4.UNDP-tech" << endl;
		cout << "5.SADC-tech" << endl;
		cout << "6.Vado-tech" << endl;
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

class Person {

public:
	string Name, Surname, Institution;
	int Age, year;

	void Prompt() {
		cout << "Hello please type in your Name:";
		cin >> Name;

		cout << "Hello please type in your Surname:";
		cin >> Surname;

		cout << "Welcome: " << Name << " " << Surname << endl;

		cout << "Please enter your Age:";
		cin >> Age;

		cout << "What year are you:";
		cin >> year;

		cout << "Your are year " << year << endl;

	}

};

class Description {

public:
	string Proceed;


	void Options() {

		cout << "\n\nThank for choosing Intership_Finder application,\nwe look forward in finding the right Internship for you" << endl;
		cout << "Would you like to proceed click(Y/N): "; //still needs to include function for yes or no option
		cin >> Proceed;
	}


};

class Proceed_class : public Description {

public:
	void begin_Internship() {
		cout << "All the best in finding your Internship";

	}


};
int main()
{
	Person p;
	p.Prompt();

	Proceed_class proceed_class_1;
	proceed_class_1.Options();
	proceed_class_1.begin_Internship();

	optionField();

	return 0;

}



