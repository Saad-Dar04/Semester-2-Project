//#include<iostream>
//#include<fstream>
//using namespace std;
//
//// function prototype
//int read_total_student(ifstream&);
//char** create_2D_array(int);
//char* create_1D_array(int);
//int* create_1D_int_array(int);
//void copy_data_from_file(ifstream& , char** , char** , int* , char* , int);
//void copy_contents(char*, char[]);
//int word_count_func(char[]);
//int section(char);
//void add_student(char** &, char** &, int* &, char* &, int[], int);
//char** regrow_2D_char(char**, int[], int , char[]);
//bool space_available(int[], int, int);
//int* regrow_1D_int(int*, int[], int, int);
//char* regrow_1D_char(char*, int*, int, char);
//bool student_exist_check(char**, char[], int[], int , int&);
//void remove_student(char**&, char**&, int*&, char*&, int[], int, int);
//char** shrink_2D_char(char**, int[], int, int);
//int* shrink_1D_int(int*, int[], int, int);
//char* shrink_1D_char(char*, int[], int, int);
//void change_details(char**, char**, int*, char*, int[], int, int);
//char* change_details_2D_char(char**, int, char[]);
//void display_section(char**, char**, int*, char*, int[], int);
//void transfer_remove_student(char**&, char**&, int*&, char*&, int[], int, int , char[]  , char[]  , int & , char & );
//void transfer_add_student   (char**&, char** &, int* &, char* &, int[], int , int , char[] , char[] , int& , char&);
//void lastfunc(int[] , int);
//
//int main() {
//
//	int total_students_section[3]{};
//	char** name_section_A = nullptr;
//	char** roll_number_A = nullptr;
//	int* age_A = nullptr;
//	char* gender_A = nullptr;
//
//	char** name_section_B = nullptr;
//	char** roll_number_B = nullptr;
//	int* age_B = nullptr;
//	char* gender_B = nullptr;
//	
//	char** name_section_C = nullptr;
//	char** roll_number_C = nullptr;
//	int* age_C = nullptr;
//	char* gender_C= nullptr;
//
//	int max_students = 10;
//	
//	char option = '\0';
//	int section_number = 0;
//	bool flag = false;
//
//
//	ifstream fin1;
//	ifstream fin2;
//	ifstream fin3;
//	fin1.open("A.txt", ios::in);
//	fin2.open("B.txt", ios::in);
//	fin3.open("C.txt", ios::in);
//	if (!fin1.is_open() || !fin2.is_open() || !fin3.is_open()) {
//		cout << "error opening file." << endl;
//		cout << "closing program............." << endl;
//		exit(1);
//	}
//	else {
//		cout << "file opened" << endl;
//	}
//	// reading all the data from the 3 files and storing them inside an array
//
//	// for section A
//	for (int i = 0; i < 3; i++) {
//		
//		if (i == 0) {
//			cout << "SECTION A" << endl;
//			total_students_section[i] = read_total_student(fin1);
//			// creating array to store the names
//			name_section_A = create_2D_array(total_students_section[i]);
//			roll_number_A = create_2D_array(total_students_section[i]);
//			age_A = create_1D_int_array(total_students_section[i]);
//			gender_A = create_1D_array(total_students_section[i]);
//			copy_data_from_file(fin1, name_section_A, roll_number_A, age_A, gender_A, total_students_section[i]);
//			for (int j = 0 ; j < total_students_section[i]; j++) {
//				cout << name_section_A[j] << " " << roll_number_A[j] << " \t\t " << age_A[j] << " \t\t " << gender_A[j] << endl;
//			}
//			cout << endl << endl;
//			fin1.close();
//		}
//
//	else if (i == 1) {
//			cout << "SECTION B" << endl;
//			total_students_section[i] = read_total_student(fin2);
//			name_section_B = create_2D_array(total_students_section[i]);
//			roll_number_B = create_2D_array(total_students_section[i]);
//			age_B = create_1D_int_array(total_students_section[i]);
//			gender_B = create_1D_array(total_students_section[i]);
//			copy_data_from_file(fin2, name_section_B, roll_number_B, age_B, gender_B, total_students_section[i]);
//			for (int j = 0; j < total_students_section[i]; j++) {
//				cout << name_section_B[j] << " " << roll_number_B[j] << " \t\t " << age_B[j] << " \t\t " << gender_B[j] << endl;
//			}
//			cout << endl << endl;
//			fin2.close();
//		}
//
//		else {
//			cout << "SECTION C" << endl;
//			total_students_section[i] = read_total_student(fin3);
//			name_section_C = create_2D_array(total_students_section[i]);
//			roll_number_C = create_2D_array(total_students_section[i]);
//			age_C = create_1D_int_array(total_students_section[i]);
//			gender_C = create_1D_array(total_students_section[i]);
//			copy_data_from_file(fin3, name_section_C, roll_number_C, age_C, gender_C, total_students_section[i]);
//			for (int j = 0 ; j < total_students_section[i]; j++) {
//				cout << name_section_C[j] << " " << roll_number_C[j] << " \t\t " << age_C[j] << " \t\t " << gender_C[j] << endl;
//			}
//			cout << endl << endl;
//			fin3.close();
//		}
//	}
//	
//	int opening_option = 0;
//
//	while (1) {
//
//		cout << "\t\t\t\t MAIN MENU" << endl << endl;
//		cout << "\t\t PRESS 1 \t\t\t  ADD STUDENT" << endl;
//		cout << "\t\t PRESS 2 \t\t\t  REMOVE STUDENT" << endl;
//		cout << "\t\t PRESS 3 \t\t\t  REMOVE RECORDS" << endl;
//		cout << "\t\t PRESS 4 \t\t\t  TRANSFER STUDENT " << endl;
//		cout << "\t\t PRESS 5 \t\t\t  CHECK SEATS" << endl;
//		cout << "\t\t PRESS 6 \t\t\t  CLOSE PROGRAM" << endl;
//		cout << endl << endl << endl;
//
//		cin >> opening_option;
//
//		if (opening_option == 1) {
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ADD STUDENT LOGIC >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//			flag = false;
//			// function to enroll a student in a section
//			cout << "select the section you want to enroll the student in(A,B,C): ";
//			cin >> option;
//			section_number = section(option);
//			// calling function to check whether space is availabe in said section or not.
//			flag = space_available(total_students_section, section_number, max_students);
//			if (flag == false) {
//				cout << "check another section" << endl;
//			}
//			else {
//				// to enroll the student in that section we need to
//				/*1. regrow the array with size+1
//				2. copy the contents into the new array
//				3. copy the new content
//				4. delete the previous array
//				5. return the pointer*/
//
//				if (section_number == 0) {
//					add_student(name_section_A, roll_number_A, age_A, gender_A, total_students_section, section_number);
//					for (int i = 0; i < (total_students_section[section_number]); i++) {
//						cout << name_section_A[i] << "  " << roll_number_A[i] << "  " << age_A[i] << "  " << gender_A[i] << "  " << endl;
//					}
//				}
//				else if (section_number == 1) {
//					add_student(name_section_B, roll_number_B, age_B, gender_B, total_students_section, section_number);
//					for (int i = 0; i < (total_students_section[section_number]); i++) {
//						cout << name_section_B[i] << "  " << roll_number_B[i] << "  " << age_B[i] << "  " << gender_B[i] << "  " << endl;
//					}
//				}
//
//				else if (section_number == 2) {
//					add_student(name_section_C, roll_number_C, age_C, gender_C, total_students_section, section_number);
//					for (int i = 0; i < (total_students_section[section_number]); i++) {
//						cout << name_section_C[i] << "  " << roll_number_C[i] << "  " << age_C[i] << "  " << gender_C[i] << "  " << endl;
//					}
//				}
//
//			}
//		}
//
//		else if (opening_option == 2) {
//			//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//			//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//			//														REMOVING A STUDENT
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//			//								 instructions on how to do it
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//			/*enter the section that you want to remove the student from
//			enter name of the student
//			if name not found ask to enter name again
//			if found , find out the index of the number
//			shrink all the arrays by one
//			copy content other than the index that is too be removed
//			decrement the student count of that section
//			we are changing the pointer holding capacity so we would pass by & operator
//			and shrink is done easy..*/
//
//			option = 0;
//			section_number = 0;
//			char remove_name[20]{};
//			bool name_exists = false;
//			int name_index = 0;
//
//			cout << "Enter the section that you would like to remove the student from: ";
//			cin >> option;
//			cout << "Enter the name of the student that you would like to have removed: ";
//			cin.ignore();
//			cin.getline(remove_name, 19);
//
//			section_number = section(option);
//
//			if (section_number == 0) {
//
//				// check whether the name exists in the list or not
//				name_exists = student_exist_check(name_section_A, remove_name, total_students_section, section_number, name_index);
//				if (name_exists == false) {
//					cout << "the name doesn't exist in this section." << endl;
//				}
//				else {
//					// now i will delete this index..
//
//					remove_student(name_section_A, roll_number_A, age_A, gender_A, total_students_section, section_number, name_index);
//
//					for (int i = 0; i < total_students_section[section_number]; i++) {
//						cout << name_section_A[i] << "  " << roll_number_A[i] << "  " << age_A[i] << "  " << gender_A[i] << "  " << endl;
//					}
//				}
//
//			}
//
//			else if (section_number == 1) {
//
//				name_exists = student_exist_check(name_section_B, remove_name, total_students_section, section_number, name_index);
//
//				if (name_exists == false) {
//					cout << "the name doesn't exist in this seciton. " << endl;
//				}
//
//				else {
//					remove_student(name_section_B, roll_number_B, age_B, gender_B, total_students_section, section_number, name_index);
//					for (int i = 0; i < total_students_section[section_number]; i++) {
//						cout << name_section_B[i] << "  " << roll_number_B[i] << "  " << age_B[i] << "  " << gender_B[i] << "  " << endl;
//					}
//				}
//			}
//
//
//			else if (section_number == 2) {
//
//				name_exists = student_exist_check(name_section_C, remove_name, total_students_section, section_number, name_index);
//
//				if (name_exists == false) {
//					cout << "the name doesn't exist int this section. " << endl;
//				}
//				else {
//					remove_student(name_section_C, roll_number_C, age_C, gender_C, total_students_section, section_number, name_index);
//					for (int i = 0; i < total_students_section[section_number]; i++) {
//						cout << name_section_C[i] << "  " << roll_number_C[i] << "  " << age_C[i] << "  " << gender_C[i] << "  " << endl;
//					}
//				}
//			}
//		}
//
//		else if (opening_option == 3) {
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//			//					updating the information code...
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//
//			option = 0;
//			section_number = 0;
//			char change_details_name[20]{};
//			name_exists = false;
//			name_index = 0;
//
//
//			cout << "Enter the section that you would like to change the information for: ";
//			cin >> option;
//			cout << "Enter the name of the student whose info you would like to have updated : ";
//			cin.ignore();
//			cin.getline(change_details_name, 19);
//
//			section_number = section(option);
//
//			if (section_number == 0) {
//
//				// check whether the name exists in the list or not
//				name_exists = student_exist_check(name_section_A, change_details_name, total_students_section, section_number, name_index);
//				if (name_exists == false) {
//					cout << "the name doesn't exist in this section." << endl;
//				}
//				else {
//					change_details(name_section_A, roll_number_A, age_A, gender_A, total_students_section, section_number, name_index);
//					for (int i = 0; i < total_students_section[section_number]; i++) {
//						cout << name_section_A[i] << "  " << roll_number_A[i] << "  " << age_A[i] << "  " << gender_A[i] << "  " << endl;
//					}
//				}
//
//			}
//
//			else if (section_number == 1) {
//
//				name_exists = student_exist_check(name_section_B, change_details_name, total_students_section, section_number, name_index);
//
//				if (name_exists == false) {
//					cout << "the name doesn't exist in this seciton. " << endl;
//				}
//
//				else {
//
//				}
//			}
//
//
//			else if (section_number == 2) {
//
//				name_exists = student_exist_check(name_section_C, change_details_name, total_students_section, section_number, name_index);
//
//				if (name_exists == false) {
//					cout << "the name doesn't exist int this section. " << endl;
//				}
//				else {
//
//				}
//			}
//		}
//
//		else if (opening_option == 4) {
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//			//							Transferring student from one section to another
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//
//			/*how will i counter this problem..
//				1. section that you want to transfer the student from
//				2. section to which you want to transfer the student too
//				3. checking capacity whether the other section has capacity to have more students
//				4. if it has capacity , get the name of the student entered and remove him from the previous section , same code
//				5. pick up that info and update the section to which it is being transferred..*/
//
//			flag = false;
//			bool student_removed = false;
//			char from_section = '\0';
//			char to_section = '\0';
//			int from_section_number = 0;
//			int to_section_number = 0;
//			name_index = 0;
//			char transfer_student_name[20]{};
//			char transfer_student_roll_number[20]{};
//			int transfer_student_age = 0;
//			char transfer_student_gender = 0;
//
//
//			cout << "from section: ";
//			cin >> from_section;
//			cout << "to section : ";
//			cin >> to_section;
//			// checking whether the section to whcih we are trying to transfer that enough capacity to store students or not.
//			from_section_number = section(from_section);
//			to_section_number = section(to_section);
//			// calling function to check whether space is availabe in said section or not.
//			flag = space_available(total_students_section, to_section_number, max_students);
//
//			if (flag == false) {
//				cout << "check another section" << endl;
//				cout << "Space is not available in section " << to_section << " check another one." << endl;
//			}
//
//			else {
//
//
//				cout << "space is available in section " << to_section << endl;
//
//				cin.ignore();
//				cout << "enter the name of the student that you would like to have transferred : ";
//				cin.getline(transfer_student_name, 19);
//
//				// checking whether this student exists in the section that you have asked to remove the student from
//
//				// removing the student from the section..
//				if (from_section_number == 0) {
//
//					// check whether the name exists in the list or not
//					name_exists = student_exist_check(name_section_A, transfer_student_name, total_students_section, section_number, name_index);
//					if (name_exists == false) {
//						cout << "the name doesn't exist in this section." << endl;
//					}
//					else {
//						// now i will delete this index..
//
//						transfer_remove_student(name_section_A, roll_number_A, age_A, gender_A, total_students_section, from_section_number, name_index, transfer_student_name, transfer_student_roll_number, transfer_student_age, transfer_student_gender);
//						display_section(name_section_A, roll_number_A, age_A, gender_A, total_students_section, from_section_number);
//						student_removed = true;
//					}
//
//				}
//
//				else if (from_section_number == 1) {
//
//					name_exists = student_exist_check(name_section_B, transfer_student_name, total_students_section, section_number, name_index);
//
//					if (name_exists == false) {
//						cout << "the name doesn't exist in this seciton. " << endl;
//					}
//
//					else {
//
//						transfer_remove_student(name_section_B, roll_number_B, age_B, gender_B, total_students_section, from_section_number, name_index, transfer_student_name, transfer_student_roll_number, transfer_student_age, transfer_student_gender);
//						display_section(name_section_B, roll_number_B, age_B, gender_B, total_students_section, from_section_number);
//						student_removed = true;
//					}
//				}
//
//
//				else if (from_section_number == 2) {
//
//					name_exists = student_exist_check(name_section_C, transfer_student_name, total_students_section, section_number, name_index);
//
//					if (name_exists == false) {
//						cout << "the name doesn't exist int this section. " << endl;
//					}
//					else {
//
//						transfer_remove_student(name_section_C, roll_number_C, age_C, gender_C, total_students_section, from_section_number, name_index, transfer_student_name, transfer_student_roll_number, transfer_student_age, transfer_student_gender);
//						display_section(name_section_C, roll_number_C, age_C, gender_C, total_students_section, from_section_number);
//						student_removed = true;
//					}
//				}
//
//				cout << "reached now doosri ki baari :D" << endl;
//
//				// adding student to the section..
//				if (to_section_number == 0 && flag == true) {
//					// calling function add the student
//					transfer_add_student(name_section_A, roll_number_A, age_A, gender_A, total_students_section, to_section_number, name_index, transfer_student_name, transfer_student_roll_number, transfer_student_age, transfer_student_gender);
//					display_section(name_section_A, roll_number_A, age_A, gender_A, total_students_section, to_section_number);
//					student_removed = false;
//				}
//
//				else if (to_section_number == 1 && flag == true) {
//
//					transfer_add_student(name_section_B, roll_number_B, age_A, gender_B, total_students_section, to_section_number, name_index, transfer_student_name, transfer_student_roll_number, transfer_student_age, transfer_student_gender);
//					display_section(name_section_B, roll_number_B, age_B, gender_B, total_students_section, to_section_number);
//					student_removed = false;
//				}
//
//				else if (to_section_number == 2 && flag == true) {
//
//					transfer_add_student(name_section_C, roll_number_C, age_C, gender_C, total_students_section, to_section_number, name_index, transfer_student_name, transfer_student_roll_number, transfer_student_age, transfer_student_gender);
//					display_section(name_section_C, roll_number_C, age_C, gender_C, total_students_section, to_section_number);
//					student_removed = false;
//				}
//
//			}
//		}
//
//		else if (opening_option == 5) {
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//			//							capacity to enroll more students and no students..
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//			// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//
//			lastfunc(total_students_section, max_students);
//		}
//
//		else if (opening_option == 6) {
//			return 0;
//		}
//
//	}
//
//
//	return 0;
//}
//
//// function definition
//
//int read_total_student(ifstream& fin) {
//	int temp = 0; 
//	fin >> temp;
//	return temp;
//}
//
//char** create_2D_array(int num) {
//	char** ptr = new char* [num] {};
//	return ptr;
//}
//
//char* create_1D_array(int num) {
//	char* ptr = new char[num] {};
//	return ptr;
//}
//
//int* create_1D_int_array(int num) {
//	int* ptr = new int[num] {};
//
//	return ptr;
//}
//
//void copy_data_from_file(ifstream& fin, char** name, char** roll_number, int* age, char* gender, int total_students) {
//
//	char name_variable[20]{};
//	char roll_number_variable[20]{};
//	int age_variable = 0;
//	char gender_variable = '\0';
//	int word_count_variable = 0;
//	fin.ignore();
//
//	for (int i = 0; i < total_students; i++) {
//		
//		fin.getline(name_variable, 19);
//		//cout << name_variable << endl;
//		fin.getline(roll_number_variable, 19);
//		//cout << roll_number_variable << endl;
//		fin >> age_variable;
//		//cout << age_variable << endl;
//		fin.ignore();
//		fin >> gender_variable;
//		//cout << gender_variable << endl;
//		fin.ignore();
//
//		// storing the name inside the char** by allocating space according to the word count.
//		word_count_variable = word_count_func(name_variable);
//		name[i] = create_1D_array(word_count_variable + 1);
//		copy_contents(name[i] , name_variable);
//		// doing the same for roll number
//		word_count_variable = word_count_func(roll_number_variable);
//		roll_number[i] = create_1D_array(word_count_variable + 1);
//		copy_contents(roll_number[i], roll_number_variable);
//
//		age[i] = age_variable;
//
//		gender[i] = gender_variable;
//
//		//cout << name[i] << " " << roll_number[i] << " " << age[i] << " " << gender[i] << endl;
//
//	}
//
//}
//
//int word_count_func(char string[]) {
//	
//	int words = 0;
//	
//	for (int i = 0; string[i] != '\0'; i++) {
//		words++;
//	}
//
//	return words;
//}
//
//void copy_contents(char* destination, char source[]) {
//
//
//	for (int i = 0; i < source[i] != '\0'; i++) {
//		destination[i] = source[i];
//	}
//}
//
//int section(char option) {
//
//	if (option == 'A' || option == 'a') {
//		return 0;
//	}
//
//	else if (option == 'B' || option == 'b') {
//		return 1;
//	}
//
//	else if(option == 'C' || option =='c') {
//		return 2;
//	}
//
//}
//
//
//void add_student(char** & name_section, char** & roll_number, int* & age, char* & gender, int total_students_section[], int section_number) {
//
//	char name_variable[20]{};
//	char roll_number_variable[20]{};
//	int age_variable = 0;
//	char gender_variable = '\0';
//
//	// taking input from the user
//	cin.ignore();
//	cout << "Enter the name of the student: ";
//	cin.getline(name_variable , 19);
//	cout << "Enter the Roll number: ";
//	cin.getline(roll_number_variable, 19);
//	cout << "Enter the age: ";
//	cin >> age_variable; 
//	cin.ignore();
//	cout << "Enter the gender: ";
//	cin >> gender_variable;
//	cin.ignore();
//
//	/*cout << name_variable << endl;
//	cout << roll_number_variable << endl;
//	cout << age_variable << endl;
//	cout << gender_variable << endl;*/
//
//	// regorwing the 2D char array
//	name_section = regrow_2D_char(name_section , total_students_section , section_number , name_variable);
//	roll_number = regrow_2D_char(roll_number, total_students_section, section_number, roll_number_variable);
//
//	// regrow the 1D int array
//	age = regrow_1D_int(age, total_students_section, section_number, age_variable);
//
//	// regorw the 1D char array
//	gender = regrow_1D_char(gender, total_students_section, section_number, gender_variable);
//
//
//	//cout << total_students_section[section_number] << endl;
//	// incrementing the number of students in this section
//	total_students_section[section_number]++;
//	//cout << total_students_section[section_number] << endl;
//
//	/*for (int i = 0; i < total_students_section[section_number]; i++) {
//		cout << name_section[i] << "  " << roll_number[i] << "  " << age[i] << "  " << gender[i] << endl;
//	}*/
//
//
//}
//
//char** regrow_2D_char(char**  name_section, int total_students_section[], int section_number, char name_variable[])
//{
//
//	int word_count = 0;
//	char** ptr = nullptr;
//	int word_count_variable = 0;
//
//	// creating 2D array+1 to hold an extra pointer
//	ptr = create_2D_array(total_students_section[section_number] + 1);
//	// creating column/locations for the pointers to hold in the info
//	for (int i = 0; i < total_students_section[section_number]; i++) {
//		
//		word_count_variable = word_count_func(name_section[i]);
//		ptr[i] = create_1D_array(word_count_variable + 1);
//		copy_contents(ptr[i], name_section[i]);
//	
//	}
//	
//
//	// for the last one
//	word_count_variable = word_count_func(name_variable);
//	ptr[total_students_section[section_number]] = create_1D_array(word_count_variable + 1);
//	copy_contents(ptr[total_students_section[section_number] ], name_variable);
//
//	// deleting the previous array
//	for (int i = 0; i < total_students_section[section_number]; i++) {
//	delete[] name_section[i];
//	}
//	delete[] name_section;
//
//	/*for (int i = 0; i < (total_students_section[section_number]+1); i++) {
//		cout << ptr[i] << endl;
//	}*/
//
//	return ptr;
//
//
//}
//
//bool space_available(int total_students_section[], int section_number, int max_students)
//{
//	if (total_students_section[section_number] < max_students) {
//		cout << "space is available" << endl;
//		return true;
//	}
//
//	else {
//		cout << "space is not avaiable" << endl;
//		return false;
//	}
//
//}
//
//
//int* regrow_1D_int(int* age, int total_students_section[], int section_number, int age_variable) {
//
//	// creating old_array+1 new array to store the values
//	int* ptr = create_1D_int_array(total_students_section[section_number] + 1);
//
//	// copying the content of the previous array into the new regrown array
//	for (int i = 0; i < total_students_section[section_number]; i++) {
//		ptr[i] = age[i];
//	}
//
//	// copying the last variable 
//	ptr[total_students_section[section_number]] = age_variable;
//
//	// deleting the previous 1D array
//	delete[] age;
//
//	return ptr;
//}
//
//char* regrow_1D_char(char* gender, int* total_students_section, int section_number, char gender_variable) {
//
//	char* ptr = create_1D_array(total_students_section[section_number] + 1);
//
//	for (int i = 0; i < total_students_section[section_number]; i++){
//		
//		ptr[i] = gender[i]; 
//	}
//
//	ptr[total_students_section[section_number] ] = gender_variable;
//
//	delete[] gender;
//
//	return ptr;
//}
//
//bool student_exist_check(char** name, char remove_name[], int total_student_section[], int section_number , int & name_index) {
//
//	bool check_flag = 0;
//	int alphabets = 0;
//	int count = 0;
//
//	alphabets = word_count_func(remove_name);
//
//	for (int i = 0; i < total_student_section[section_number]; i++) {
//
//		for (int j = 0; remove_name[j] != '\0'; j++) {
//
//			if (name[i][j] != remove_name[j]) {
//				check_flag = false;
//				break;
//			}
//			else if (name[i][j] == remove_name[j]) {
//				count++;
//				if (alphabets == count) {
//					check_flag = true;
//					name_index = i;
//					return 1;
//				}
//			}
//
//
//		}
//
//	}
//
//	if (check_flag == false) {
//		return 0;
//	}
//
//}
//
//void remove_student(char**& name, char**& roll_number, int*& age, char*& gender, int total_student_section[], int section_number, int name_index)
//{
//
//	// shrinking the 2D char array
//	name = shrink_2D_char(name, total_student_section, section_number, name_index);
//	roll_number = shrink_2D_char(roll_number, total_student_section, section_number, name_index);
//
//	// shrinking the 1D int array
//	age = shrink_1D_int(age, total_student_section, section_number, name_index);
//
//	// shrinking the 1D char array
//	gender = shrink_1D_char(gender, total_student_section, section_number, name_index);
//
//	// reducing the number of students of this section
//	total_student_section[section_number]--;
//
//
//	/*for (int i = 0; i < total_student_section[section_number]; i++) {
//		cout << name[i] << "  " << roll_number[i] << "  " << age[i] << "  " << gender[i] << "  " << endl;
//	}*/
//
//}
//
//
//char** shrink_2D_char(char** name, int total_student_section[], int section_number,int name_index) {
//
//
//	bool name_index_encountered = false;
//	int word_count_variable = 0; 
//	// creating a 2D array to hold pointer orignal-1
//	char** ptr = new char*[total_student_section[section_number] - 1];
//
//	// creating the columns according to the names but skipping the name_index
//	for (int i = 0; i < total_student_section[section_number]; i++) {
//		if (i == name_index) {
//			//cout << "index encountered:" << endl;
//			name_index_encountered = true;
//		}
//
//		if (name_index_encountered == false) {
//			word_count_variable = word_count_func(name[i]);
//			ptr[i] = create_1D_array(word_count_variable + 1);
//			copy_contents(ptr[i], name[i]);
//			//cout << "before index encounter" << endl;
//		}
//
//		else if ( name_index_encountered == true && i!=name_index){
//			word_count_variable = word_count_func(name[i]);
//			ptr[i - 1] = create_1D_array(word_count_variable + 1);
//			copy_contents(ptr[i - 1], name[i]);
//			//cout << "after index encounter" << endl;
//		}
//	}
//
//	// deleteing the previous dynamically allocated memory
//	for (int i = 0; i < total_student_section[section_number]; i++) {
//		delete[] name[i];
//	}
//	delete[] name;
//
//	/*for (int i = 0; i < total_student_section[section_number] - 1; i++) {
//		cout << ptr[i] << endl;
//	}*/
//
//	return ptr;
//}
//
//int* shrink_1D_int(int* age, int total_student_section[], int section_number, int name_index)
//{
//
//	bool name_index_encountered = false;
//
//	// dynamically allocating space of -1  , aka shrink
//	int* ptr = create_1D_int_array(total_student_section[section_number] - 1);
//
//	// copying the contents into the new array, other than the index to be removed
//	for (int i = 0; i < total_student_section[section_number]; i++) {
//
//		if (i == name_index) {
//			name_index_encountered = true;
//		}
//
//		if (name_index_encountered == false && i != name_index) {
//			ptr[i] = age[i];
//		}
//
//		else if (name_index_encountered == true && i != name_index) {
//			ptr[i - 1] = age[i]; 
//		}
//	}
//
//
//	// deleting the previous dynamically allocated memroy
//	delete[] age;
//
//	return ptr;
//}
//
//char* shrink_1D_char(char* gender, int total_student_section[], int section_number, int name_index)
//{
//	bool name_index_encounterd = false;
//
//	// dynamically allocating space of -1 , aka shrink
//	char* ptr = new char[total_student_section[section_number] - 1];
//
//
//	// copying the contents into the new array , other than the index to be removed
//	for (int i = 0; i < total_student_section[section_number]; i++) {
//
//		if (i == name_index) {
//			name_index_encounterd = true;
//		}
//
//		if (name_index_encounterd == false && i != name_index) {
//			ptr[i] = gender[i];
//		}
//
//		else if (name_index_encounterd == true && i != name_index) {
//			ptr[i - 1] = gender[i];
//		}
//
//	}
//
//	// deleting the dynamically allocated memory
//	delete[] gender;
//
//	return ptr;
//}
//
//void change_details(char** name, char** roll_number, int* age, char* gender, int total_student_section[], int section_number, int student_index)
//{
//
//	char new_name[20]{};
//	char new_roll_number[100]{};
//	int new_age = 0;
//	char new_gender = '\0';
//
//	cout << "Enter the updated information " << endl;
//	cout << "Name : ";
//	cin.getline(new_name, 19);
//	cout << "Roll Number: ";
//	cin.getline(new_roll_number, 99);
//	cout << "Age: ";
//	cin >> new_age;
//	cin.ignore();
//	cout << "Gender : ";
//	cin >> new_gender;
//	cin.ignore();
//
//	// return the updated single pointer , that holds the new info.. , for 2D char array
//	name[student_index] = change_details_2D_char(name, student_index, new_name);
//	roll_number[student_index] = change_details_2D_char(roll_number, student_index, new_roll_number);
//
//	// updating the int array
//	age[student_index] = new_age;
//
//	// updating the char array
//	gender[student_index] = new_gender;
//
//	cout << "after update: ";
//	cout << name[student_index] << "   " << roll_number[student_index] << "   " << age[student_index] << "  " << gender[student_index] << endl;
//
//}
//
//char* change_details_2D_char(char** name, int student_index, char new_name[])
//{
//	
//	int word_count = 0;
//
//	// creating an 1D array that would replace our previous array
//	word_count = word_count_func(new_name);
//	char* ptr = create_1D_array(word_count + 1);
//	copy_contents(ptr, new_name);
//
//	// deleting the previous array
//	delete[] name[student_index];
//
//	return ptr;
//}
//
//void display_section(char** name, char** roll_number, int* age, char* gender, int total_student_section[], int section_number)
//{
//	if (section_number == 0) {
//		cout << "\t\t\t Section A " << endl;
//	}
//
//	else if (section_number == 1) {
//		cout << "\t\t\t Section B " << endl;
//	}
//
//	else if (section_number == 2) {
//		cout << "\t\t\t Section C " << endl;
//	}
//
//	for (int i = 0; i < total_student_section[section_number]; i++) {
//		cout << name[i] << "    " << roll_number[i] << "     " << age[i] << "      " << gender[i] << "     " << endl;
//	}
//}
//
//void transfer_remove_student(char**& name, char**& roll_number, int*& age, char*& gender, int total_student_section[], int section_number, int name_index, char transfer_student_name[], char transfer_student_roll_number[], int& transfer_student_age, char& transfer_student_gender)
//{
//	// copying all the credentials of the student that is being removed
//	copy_contents(transfer_student_name, name[name_index]);
//	copy_contents(transfer_student_roll_number, roll_number[name_index]);
//	transfer_student_age = age[name_index];
//	transfer_student_gender = gender[name_index];
//
//	// shrinking the 2D char array
//	name = shrink_2D_char(name, total_student_section, section_number, name_index);
//	roll_number = shrink_2D_char(roll_number, total_student_section, section_number, name_index);
//
//	// shrinking the 1D int array
//	age = shrink_1D_int(age, total_student_section, section_number, name_index);
//
//	// shrinking the 1D char array
//	gender = shrink_1D_char(gender, total_student_section, section_number, name_index);
//
//	// reducing the number of students of this section
//	total_student_section[section_number]--;
//
//	cout << "transfer student info collected: " << endl;
//	cout << transfer_student_name << "    " << transfer_student_roll_number << "     " << transfer_student_age << "      " << transfer_student_gender << endl;
//
//}
//
//void transfer_add_student(char**& name, char**& roll_number, int*& age, char*& gender, int total_student_section[], int section_number, int name_index, char transfer_student_name[], char transfer_student_roll_number[], int& transfer_student_age, char& transfer_student_gender)
//{
//	
//
//	char name_variable[20]{};
//	char roll_number_variable[20]{};
//	int age_variable = 0;
//	char gender_variable = '\0';
//
//	
//	copy_contents(name_variable, transfer_student_name);
//	copy_contents(roll_number_variable, transfer_student_roll_number);
//	age_variable = transfer_student_age; 
//	gender_variable = transfer_student_gender;
//
//
//	cout << name_variable << endl;
//	cout << roll_number_variable << endl;
//	cout << age_variable << endl;
//	cout << gender_variable << endl;
//
//	// regorwing the 2D char array
//	
//	name = regrow_2D_char(name, total_student_section, section_number, name_variable);
//	
//	roll_number = regrow_2D_char(roll_number, total_student_section, section_number, roll_number_variable);
//	
//
//	// regrow the 1D int array
//	
//	age = regrow_1D_int(age, total_student_section, section_number, age_variable);
//
//	// regorw the 1D char array
//	gender = regrow_1D_char(gender, total_student_section, section_number, gender_variable);
//
//
//	//cout << total_students_section[section_number] << endl;
//	// incrementing the number of students in this section
//	total_student_section[section_number]++;
//	//cout << total_students_section[section_number] << endl;
//
//
//}
//
//void lastfunc(int total_student_section[], int max_students)
//{
//
//	for (int i = 0; i < 3; i++) {
//
//		if (i == 0) {
//
//			cout << "SECTOIN A : ";
//
//			if (total_student_section[i] < max_students) {
//
//				cout << "remaining capacity: " << max_students - total_student_section[i] << endl;
//			}
//			else {
//				cout << "no capacity" << endl;
//			}
//
//		}
//
//		else if (i == 1) {
//			cout << "SECTION B : ";
//
//			if (total_student_section[i] < max_students) {
//
//				cout << "remaining capacity: " << max_students - total_student_section[i] << endl;
//			}
//			else {
//				cout << "no capacity" << endl;
//			}
//
//		}
//
//		else {
//
//			cout << "SECTION C : ";
//
//			if (total_student_section[i] < max_students) {
//
//				cout << "remaining capacity: " << max_students - total_student_section[i] << endl;
//			}
//			else {
//				cout << "no capacity" << endl;
//			}
//
//			
//
//		}
//	}
//
//
//}
