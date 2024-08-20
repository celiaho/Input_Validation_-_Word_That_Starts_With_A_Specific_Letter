// Description: This program asks the user to enter a word that starts with a specific letter of
// your choice and ensures that the user enters a word that fulfills this requirement. It covers
// these learning outcomes:
//		validating the starting letter of a string,
//		while loops,
//		looping forever for easy testing.
// Instruction files: 
//		https://bhcc.digication.com/cit120all_master_delta/Inpout_validation_lab_word_that_starts_with_a_spec
// Title: Input Validation - Word That Starts With A Specific Letter
// Programmer: C. Ho
// Last Modified: Wed. Nov. 8, 2023 @ 4:09 PM

// PREPROCESSOR DIRECTIVE SECTION
#include <iostream>
#include <string>
using namespace std;

// FUNCTION DECLARATION SECTION, INCLUDING FUNCTION PROTOTYPES - N/A IN THIS LAB

// MAIN SECTION
int main()
{
	// SET UP SECTION
	// System function call to change text in title bar
	system("title .     \"While\" Validation Loop     by C. Ho");

	// System function call to change the color of the cmp window (background, foreground)
	system("color E1");

	// Centered banner using the WYSIWYG approach
	cout << "\n"
		<< "\tValidate the starting letter of a string,\n"
		<< "\t          while validation loop,         \n"
		<< "\tas well looping forever for easy testing \n"
		<< "\t             Optional Lab #5             \n"
		<< "\t                by C. Ho                 \n\n";

	// VARIABLE DECLARATION SECTION
	string userWord;
	const char DESIRED_STARTING_CHARACTER = 'a';
	
	// INPUT 
	// Force an intentional infinite loop.
	while (true) {
		// Prompt user to enter a word that starts with your letter of choice.
		cout << "Please enter a SINGLE WORD that starts with \'" << DESIRED_STARTING_CHARACTER << "\' (case sensitive): ";

		// Get user's word.
		cin >> userWord;
		cin.ignore(1000, '\n');

		// Validate user input *****
		while (userWord[0] != DESIRED_STARTING_CHARACTER)
		{
			// Display error message.
			cout << "     Your word \"" << userWord << "\" starts with the letter \'" << userWord[0] << "\'.\n"
				// Display detailed input hint to user.
				<< "     You need to have a word that starts with \'" << DESIRED_STARTING_CHARACTER << "\'.\n";

			// Prompt user to enter a valid word.
			cout << "     Please enter an appropriate word: ";
			cin >> userWord;
			cin.ignore(1000, '\n');
		}

		// Display confirmation message.
		cout << "\n"
			<< "Thank you for providing the string \"" << userWord << "\", which starts with the letter \'a\'.\n"
			<< "Now let's do it again!\n\n";

		cout << "     *****************\n\n";
	}

	// PROCESSING SECTION 

	// OUTPUT SECTION

	// CLEAN UP SECTION
	system("pause");	// Hold screen so user will see the final message.
	return 0;			// End program.
// MAIN ENDS
}