#include "pch.h"
#include <iostream>
#include <string>
#include <regex>
#include <cmath> 
#include <ctime>
#include <vector>
#include <unordered_map>
using namespace std;

void lab_1() {
	double e = 5;
	double r = 5;
	double k = 1.24 * pow(10, -7);
	double t = 1 * pow(10, -7);
	double z = 50;
	double pp = (-1 * r) * (t / k);

	double x = (1 / r) * (1 - pow(exp(1), pp));

	cout <<"x = "<< x << endl;

	double y = z * z*asin(r / sqrt(100 - (r*r)));

	cout <<"y = "<< y << endl;
}

int fact(int variable) {
	if (variable == 1 || variable == 0) {
		return 1;
	}
	return variable * fact(variable - 1);
}

double fact(double variable) {
	if (variable == 1 || variable == 0) {
		return 1;
	}
	return variable * fact(variable - 1);
}

void lab_2() {  // 2 вариант
	double a = 18.5;
	double x = 0.4;
	bool exit = true;
	int i = 0;
	while (x <= 2)
	{
		if (x <= 1) {
			cout <<"y"<<++i<<" = "<< pow(sin(sqrt(abs(a*x))), 2)<<" | x = " <<x<<endl;
		}
		else {
			
			cout << "y" << ++i << " = " << log10(x + 1) << " | x = " << x << endl;
		}
		x += 0.2;
	}

}

void lab_3() {
	double result = 0, x, eps;
	cout << "enter x: ";
	cin >> x;
	cout << "enter eps: ";
	cin >> eps;
	double *temp = new double(pow(-1, 0)*pow(x, 0) / fact(0));
	for (int i = 0; abs(*temp) > eps; i++)
	{
		result += *temp;
		*temp = pow(-1, i)*pow(x, i) / fact(i);		
		cout << "current: " << *temp << "  -  " << "result = "; printf("%2.14f", result); cout << "  -  iteration: " << i << endl;
	}
	cout << "result: "; printf("%2.14f", result); cout << endl;
	printf("%2.14f", result); cout << endl;
}

void lab_4() {
	double* arr = new double[4];
	// cin
	for (int i = 0; i < 4; i++)
	{
		cout << "x" << i + 1 << " = ";
		cin >> arr[i];
	}

	//find min and max
	double min = arr[0];
	double max = arr[0];
	for (int i = 0; i < 3; i++)
	{
		if (min > arr[i + 1]) {
			min = arr[i + 1];
		}
		if (max < arr[i + 1]) {
			max = arr[i + 1];
		}
	}

	if (arr[0] < 0) {
		for (int i = 0; i < 4; i++)
		{
			arr[i] = arr[i] * max * max;
		}
	}
	else {
		for (int i = 0; i < 4; i++)
		{
			arr[i] = arr[i] * min * min;
		}
	}
	cout << endl;
	cout << "min = " << min << endl;
	cout << "max = " << max << endl;
	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << "x" << i + 1 << " = " << arr[i] << endl;
	}


}

void lab_5() {
	int N, M;
	cout << "enter N: ";
	cin >> N;
	int **arr = new int*[N + 1];
	cout << "enter M: ";
	cin >> M;

	
	//create arr
	for (int i = 0; i < N + 1; i++)
	{
		arr[i] = new int[M];
		
	}
	// set arr
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << "enter element arr[" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}
	

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	int* B = new int[M];

	cout << "\n" << "enter new vector: " << endl;
	for (int i = 0; i < M; i++)
	{
		cout << "enter element B[" << i << "]";
		cin >> B[i];
	}
	system("pause");
	system("cls");

	for (int i = 0; i < M; i++)
	{
		arr[N][i] = B[i];
	}

	for (int l = 0; l < N; l++)
	{
		for (int i = 0; i < N; i++)
		{
			//cout << arr[i][0] << " > " << arr[i + 1][0] << " ?"<<endl;
			if (arr[i][0] < arr[i + 1][0])
			{
				for (int j = 0; j < M; j++)
				{
					//cout << arr[i][j] << " = " << arr[i + 1][j] << endl;
					int temp = arr[i][j];
					arr[i][j] = arr[i + 1][j];
					arr[i + 1][j] = temp;
				}

			}
		}
		

	}
	
	/*cout << "sorted array: " << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	system("pause");
	system("cls");
	int position = N;
	for (int i = 0; i < N; i++)
	{
		if (B[0] < arr[i][0]) {
			position = i;
		}
	}
	
	for (int l = position; l < N; l++)
	{
		for (int i = N; i >= position; i--)
		{
			
				for (int j = 0; j < M; j++)
				{
					arr[i][j] = arr[i - 1][j];

				}

			
		}


	}
	cout << "position" << position << endl;
	//show
	for (int i = 0; i < N + 1; i++)
	{
		for (int j = 0; j < M; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	//set vector
	for (int i = 0; i < M; i++)
	{
		arr[position + (position = N ?  1 :  0)][i] = B[i];
	}
	*/
	cout << "result" << endl;

	for (int i = 0; i < N + 1; i++)
	{
		for (int j = 0; j < M; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

}

void lab_6() {
	double result = 1;
	for (double i = 1; i < 11; i++)
	{
		cout << "#" << i << " - " << (double)((double)2 + (double)(1.0 / fact(i))) << endl;
		result *= (double)((double)2 + (double)(1.0 / fact(i)));
		cout << "result: " << result << endl;
	}
	cout << endl << "result: " << result << endl;
	
}

void lab_7() {
	int *b = new int[10]{ 1,-2,3,4,5,6,7,8,9,10 }, *a = new int[10]{ 1,2,3,4,5,6,7,-8,9,10 }, *c = new int[10]{ 1,2,3,4,5,-6,7,8,9,10 };
	int val = -1;
	for (int i = 0; i < 10; i++)
	{
		if (c[i] < 0) {
			val = i;
			break;
		}
	}
	if (val == -1) {
		cout << "array 'c' don't have any values less than 0" << endl;
	}
	else {
		bool exit = true;
		for (int i = 0; i < val; i++)
		{
			if (a[i] < 0 || b[i] < 0) {
				if (i < val) {
					cout << "no" << endl;
					exit = false;
					break;
				}
			}
		}
		if (exit) {
			cout << "yes" << endl;
		}
	}
}

void lab_8() {
	int **arr = new int*[5]; 
	for (int i = 0; i < 5; i++)
	{
		arr[i] = new int[6];
		for (int j = 0; j < 6; j++)
		{
			cout << "enter arr[" << i << "][" << j << "] ";
			cin>>arr[i][j];
		}
	}

	int max_val[5];
	for (int i = 0; i < 5; i++)
	{
		max_val[i] = arr[i][0];
		for (int j = 0; j < 6; j++)
		{
			if (max_val[i] < arr[i][j]) {
				max_val[i] = arr[i][j];
			}
		}
	}
	cout << "\nold matrix:" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << arr[i][j] << ", ";
		}
		cout << endl;
	}
	cout << "max vals: \n";
	for (int i = 0; i < 5; i++)
	{
		cout << max_val[i] << ",\t";
	}


	cout << "\n\n result:" << endl;



	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			if (max_val[j] > max_val[j + 1]) {
					int *t = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = t;
				

			}
		}
	}*/
	for (int i = 1; i < 5; i++)
	{
		int temp = max_val[i];
		int *t = arr[i];
		int j = i - 1;
		while (j >= 0 && temp < max_val[j]) {

			max_val[j + 1] = max_val[j];
			arr[j + 1] = arr[j];

			j--;
		}
		j++;
		max_val[j] = temp;
		arr[j] = t;
	}


	//exit
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << arr[i][j] << ",\t";
		}
		cout << endl;
	}
}

void lab_9() {

	int c;
	cout << "enter count:";
	cin >> c;

	int *arr = new int[c];
	cout << "fill tha array" << endl;
	for (int i = 0; i < c; i++)
	{
		cout << "arr[" << i << "]: ";
		cin >> arr[i];
	}
	int n;
	cout << "enter break point:";
	cin >> n;
	if (n >= c) {
		cout << "runtime error";
	}
	else {
		int *arr1 = new int[n];
		int *arr2 = new int[c - n];
		int m = 0;
		for (int i = 0; i < n; i++)
		{
			arr1[i] = arr[i];
		}
		for (int i = n; i < c; i++)
		{
			arr[m++] = arr[i];
		}

		cout << "temp results: " << endl;
		for (int i = 0; i < n; i++)
		{
			cout << "arr1[" << i << "] = " << arr1[i] << endl;;
		}
		for (int i = 0; i < c - n; i++)
		{
			cout << "arr2[" << i << "] = " << arr2[i]<<endl;
		}






		int *result = new int[c];
		for (int i = 0; i < (c/2) + 1; i++)
		{
			if (i < n) {
				result[(2 * i) - 1] = arr1[i];
			}
			if (i < c-n)
			{
				result[2 * i] = arr2[i];
			}
			
			
		}

		cout << endl;

		for (int i = 0; i < c; i++)
		{
			cout << result[i] << ", ";
		}

	}


}

void BucketSort() {
	int compare = 0, copy = 0;
	int N = 100000, bucket = 30, j;
	double *arr = new double[N];
	double max = NULL, min = NULL, devider;
	vector<double> *B = new vector<double>[bucket];
	cout << "array: ";
	//fill
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand();
		cout << arr[i] << ", ";
		if (arr[i] > max || max == NULL) {
			max = arr[i];
		}
		if (arr[i] < min || min == NULL) {
			min = arr[i];
		}
	}
	cout << endl;
	devider = ceil((max + 1) / bucket);
	bool ex = true;
	int l;
	for (int i = 0; i < N; i++)
	{
		l = 0;
		ex = true;
		j = floor(arr[i] / devider);
		
		for (vector<double>::iterator it = B[j].begin(); it != B[j].end(); ++it)
		{
			compare++;
			if (arr[i] < *it) {
				copy++;
				B[j].insert(B[j].begin() + l, arr[i]);
				ex = false;
				break;
			}
			l++;
		}
		if (ex) {
			B[j].push_back(arr[i]);
			copy++;
		}
		
		//B[j].push_back(arr[i]);
	}

	//sorting
	//display
	
	//display
	/*cout << "\n\nB:\n";
	for (int i = 0; i < bucket; i++)
	{
		cout << "B[" << i << "] = ";

		for (vector<double>::iterator it = B[i].begin(); it != B[i].end(); ++it)
		{
			cout << *it << ", ";
		}
		cout << endl;
	}
	*/
	int m = 0;
	for (int i = 0; i < bucket; i++)
	{
		for (vector<double>::iterator it = B[i].begin(); it != B[i].end(); ++it) {
			
				arr[m++] = *it;
				copy++;
			

		}
	}

	//show arr
	cout << "array: \n";
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
	cout << "copy: " << copy << "\ncompare: " << compare << endl;
}

void bobleSort() {
	
	double size = 1000, compare = 0, copy = 0;
	double *arr = new double[size];
	bool swapped;

	cout << "array: ";
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
		//cout << arr[i] << ", ";
	}   //cout << endl;
	int leave = 0;
	int tempLeave = 0;
	for (int i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (int j = 0; j < size - leave - 1; j++)
		{
			compare++;
			if (arr[j] > arr[j + 1])
			{
				copy++;
				double temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				swapped = true;
				tempLeave = size - 1 - j;
			}
		}
		if (!swapped) { break; }
		leave = tempLeave;
	}

	/*for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}   cout << endl;*/
	delete[] arr;
	cout << "copy: ";   
	printf("%20.0f", copy);
	cout << "\ncompare: ";
	printf("%20.0f", compare);
	cout << endl;
}

int a = 0, b = 0;

double* createArray(int size) {
	double *arr = new double[size];
	bool swapped;

	cout << "array: ";
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand();
		cout << arr[i] << ", ";
	}
	return arr;
}

void Heap(double *arr, int i, int n) {
	int max = i;
	while (true)
	{
		int child = 2 * (i + 1) - 1; // left child
		a++;
		if (child < n && arr[child] > arr[max])
		{
			max = child;
		}
		child++; //right one
		a++;
		if (child < n && arr[child] > arr[max])
		{
			max = child;
		}
		a++;
		if (max == i) {
			break;
		}else{
			b++;
			swap(arr[max], arr[i]);
			i = max;
		}
	}
}

void heapSort() {
	int Size = 100000;
	double* arr = createArray(Size);
	//////////////////////////////////////////////
	for (int i = Size/2; i >= 0; i--)
	{
		Heap(arr, i, Size);
	}

	for (int i = Size - 1; i >= 1; i--)
	{
		swap(arr[0], arr[i]);
		b++;
		Heap(arr, 0, i);
	}
	//cout << "\n\narray: ";
	//for (int i = 0; i < Size; i++)
	//{
	//	cout << arr[i] << ", ";
	//}
	cout << endl;
	cout << "copy: " << a << "\ncompare: " << b << endl;
}

void lab_10() {
	std::unordered_map<string, string> book;
	std::unordered_map<string, string>::iterator it;
	string search;
	cout<<"enter key: ";
	getline(cin, search);

	book.insert(make_pair("123 doe 1995", "witcher"));
	book.insert(make_pair("john doe 1995", "witcher"));
	book.insert(make_pair("villy vonka 1865", "chokolate factory"));
	book.insert(make_pair("robert downy 2018", "venom"));
	book.insert(make_pair("Sten Li", "spider-man"));

	for (std::unordered_map<string, string>::iterator it = book.begin(); it != book.end(); ++it)
	{
		cmatch mass;
		regex regular(search);
		if (regex_match(it->second, regular)) {
			cout << "author: " << it->first << " book: " << it->second << endl;
		}
	}
}

void dolbaeb() {
	srand(time(NULL));
	int *arr, size;
	cout << "enter size: ";
	cin >> size;
	arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand();
		cout << arr[i] << ", ";
	}cout << endl;

	for (int i = 0; i < size/2; i++)
	{
		cout << arr[i]<<", ";
		cout << arr[(size / 2) + i]<<", ";
	}
	if (size % 2 == 1)
	{
		cout << arr[size - 1];
	}
}

template<typename T>
class MyLinkedList {
private: class Node {
		public: Node *next, *prev;
				T *variable;
		};

		 Node *current, *start;
		 int size;

		 //constructors
public: MyLinkedList<T>(T a){
			current = new Node;
			current->variable = new T(a);
			current->next = NULL;
			current->prev = NULL;
			start = current;
			size = 1;
		}
		MyLinkedList<T>() {
			current = new Node;
			current->variable = NULL;
			current->next = NULL;
			current->prev = NULL;
			start = current;
			size = 0;
		}

		//main block
		void pushBack(T newVar) {
			if (current->variable == NULL) {
				current->variable = new T(newVar);
			}
			else {
				Node *tempNode = new Node;
				current->next = tempNode;
				tempNode->variable = new T(newVar);
				tempNode->prev = current;
				tempNode->next = NULL;
				current = tempNode;
			}
			size++;
		}

		void popFront() {
			if (size != 0) {
				delete start->variable;
				Node *temp = start;
				start = start->next;
				delete temp;
				size--;
			}
			else {
				cout << "no elements available" << endl;
			}
		}

		void swap(int a, int b) {
			if (a > size || a < 0 || b > size || b < 0) {
				cout << "RunTimeError" << endl;
			}
			else {
				Node *temp1 = start;
				Node *temp2 = start;
				for (int i = 0; i < a; i++)
				{
					temp1 = temp1->next;
				}
				for (int i = 0; i < b; i++)
				{
					temp2 = temp2->next;
				}
				T *c = temp1->variable;
				temp1->variable = temp2->variable;
				temp2->variable = c;
			}
		}

		void display() {
			Node *temp = start;
			int i = 1;
			while (temp->next != NULL)
			{
				cout << i++ << ": " << *temp->variable << endl;
				temp = temp->next;
			}
			if(temp->variable != NULL)
			cout << i++ << ": " << *temp->variable << endl;
		}

		void deleteAll() {
			while (size != 1)
			{
				delete current->variable;
				Node *temp = current;
				current = current->prev;
				current->next = NULL;
				delete temp;
				size--;
			}
			current->next = NULL;
			delete current->variable;
			current->variable = NULL;
			size--;
		}
};

int main()
{
	srand(time(0));
	MyLinkedList<string> *a = new MyLinkedList<string>;
	a->pushBack("8");
	a->pushBack("9");
	a->pushBack("9");
	a->pushBack("10");
	//a->popFront();
	a->swap(1, 3);
	a->deleteAll();
	a->display();

	return 0;
}



