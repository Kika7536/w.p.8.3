#include<iostream>
#include<string>


using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	cout << "������� 3. ������� ���������� ����." << endl;
	cout << "---------------------------------------------" << endl << endl;

	string str;
	bool word;
	int word_count = 0;
	char last_char = ' ';

	cout << "Enter string:" << endl;
	getline(cin, str);


	for (int i = 0; i < str.length(); i++) {
		word = str[i] == ' ' ? false : true;

		if (!word) { 
			last_char = str[i]; continue; 
		}
		else if (word) {
			if (last_char == ' ') {
				word_count++;
				last_char = str[i];
			}
			else {
				last_char = str[i];
			}
		}

	}

	cout << "Result: " << word_count << endl;

	//main();

	//��, ��. �� ���� ������ ���������� ��� ��������� ����������� ������� ������ ��� � ��������� �������� ���������������

}