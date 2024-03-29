#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector < int > &vector_ref);
void get_vector(vector < int > &vector_ref);

int main() {

	vector < int > vector_1(5);
	vector < int > vector_2(7);

	cout << vector_1.size() << endl;
	cout << vector_2.size() << endl;

	cout << "input vector_1: " << endl;
	get_vector(vector_1);
	cout << "input vector_2: " << endl;
	get_vector(vector_2);

	cout << "vector_1: " << endl;
	print_vector(vector_1);

	cout << "vector_2: " << endl;
	print_vector(vector_2);

	cout << (vector_1 == vector_2) << endl;

	//create vector_3 with vector one as an initializer
	vector < int > vector_3(vector_1);
	cout << vector_3.size() << endl;
	cout << "vector_3: " << endl;
	print_vector(vector_3);

	vector < int > vector_4(10);
	vector_4 = {1,2,3,4,5,6,7,8,9,0};
	cout << vector_4.size() << endl;
	vector_4 = {1,2,3,4};
	cout << vector_4.size() << endl;
	cout << "vector_4: " << endl;
	print_vector(vector_4);

	try
	{
		cout << vector_4.at(5) << endl;
	}
	catch (out_of_range &ex)
	{
		cout << "An exception occurred: " << ex.what() << endl;
	}



	return 0;
}

void print_vector(vector < int > &vector_ref)
{
	for(int i=0; (unsigned)i < vector_ref.size(); i++)
	{
		cout << vector_ref[i] << endl;
	}
}

void get_vector(vector < int > &vector_ref)
{
	for(int i=0; (unsigned)i < vector_ref.size(); i++)
	{
		//cin >> vector_ref[i];
		vector_ref[i] = i;
	}
}
