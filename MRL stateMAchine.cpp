#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void map(int);
void Matrix_Two_on_Two();
void Matrix_Three_On_Three();
void Merge_Sort();
void Quick_Sort(int arr[] , int , int );
int partition(int arr[] , int , int );
void swap(int& a , int& b);
void printArray(int arr[], int );
void selectionSort(int arr[], int );


class matrix
{
	private :
		int A[2][2] = {{100, 200}, {300,400}};
		int B[2][2] = {{50,60}, {70,80}};
		int C[2][2] ;
		double D[2][2];//this one is for the inversation part which the user is ganna enter the members
	//==============================
		int E[3][3] = {{10,20,30}, {40,50,60}, {70,80,90}};
		int F[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
		int G[3][3] ;
		double H[3][3];//this one is for the inversation part which the user is ganna enter the members
	public:
		void Matrix_Two_On_Two();//Matrix Two On Two is the head of the 2*2 matrix and rest will complete it . in the program we will call this function
		void adding_Two_On_Two(); 
		void subtraction_Two_On_Two();
		void multiplication_Two_On_Two();
		void inverse_Two_On_Two();
		void display_Two_On_Two();
		//===========================
		void Matrix_Three_On_Three();
		void adding_Three_On_Three(); 
		void subtraction_Three_On_Three();
		void multiplication_Three_On_Three();
		void inverse_Three_On_Three();
		void display_Three_On_Three();
};

int main()
{
	int num , choice;
	matrix obj2 , obj3 ; // obj2 stands for the 2*2 matrix and obj 3 represents 3*3 matrixes
	cout<<"\n*************************************";
	cout<<"\n Wellcome to MRL's State Machine task";
	map(0);
	cout<<"\n\n";
	cout<<"1 : 2*2 Matrix";
	cout<<"\n2 : 3*3 Matrix";
	cout<<"\n3 : Merge sort";
	cout<<"\n4 : Quick Sort";
	cout<<"\nPick one or enter 0 to exit : ";
	
	while(true)
	{
		cin>>num;
		switch(num){
		case 1:obj2.Matrix_Two_On_Two();break;
		case 2:obj3.Matrix_Three_On_Three();break;
		case 3:
		{
			map(3);
		    int arr[] = {64, 25, 12, 22, 11};
	    	int size = sizeof(arr) / sizeof(arr[0]);

    		cout << "\n\nOriginal array: ";
    		for (int i = 0; i < size; ++i) {
        		cout << arr[i] << " ";
    		}
    		cout<<endl;
    		cout<<"\n\nSize = "<<size<<endl<<endl;
			selectionSort(arr, size);
			cout<<"Sorted array : ";
			for (int i = 0; i < size; ++i)
			{
				cout<<arr[i] << " ";
			}	
			cout<<endl;
			main();
			break;	
		}
		case 4:
		{
			system("CLS");
			map(4);
			int arr[]= {7, 2, 1, 6, 8, 5};
			int size = sizeof(arr) / sizeof(arr[0]);
			cout<<"\n\nOriginal array : ";
			printArray(arr, size);
    		Quick_Sort(arr, 0, size - 1);
		    cout << "\n\nSorted array: ";
    		printArray(arr, size);
    		main();
    		break;
		}
		case 0:exit(0);
		default:
			{
				cout<<"\nTry another key or press 0 to exit !!\n";
				continue;
			}
		}
	}
	cin.ignore();
	cin.get();
	return 0;
}

void map(int num)
{
	cout<<"\n========== MAP ==========\n";
	cout<<"|";cout<<" section 1 | ";cout<<"section 2 | ";
	cout<<"\n|";cout<<"\t    |";cout<<"\t\t|";
	cout<<"\n|";if(num==1){cout<<" Active    |";cout<<"\t\t|";}
	if(num==2){cout<<"\t    |";cout<<" Active    |";}
	if(num!=1 &&num!=2){cout<<"\t    |";cout<<"\t\t|";}
	cout<<"\n|-----------|";cout<<"-----------|";
	cout<<"\n|";cout<<" section 3 | ";cout<<"section 4 | ";
	cout<<"\n|";cout<<"\t    |";cout<<"\t\t|";
	cout<<"\n|";if(num==3){cout<<" Active    |";cout<<"\t\t|";}
	if(num==4){cout<<"\t    |";cout<<" Active    |";}
	if(num!=3 &&num!=4){cout<<"\t    |";cout<<"\t\t|";}
	cout<<"\n|-----------|";cout<<"-----------|";
	
}
void matrix::Matrix_Two_On_Two()
{
	matrix obj2;
	system("CLS");
	map(1);
	cout<<endl<<endl;
	int menu1;
	cout<<"Wellcome to 2*2 matrixes"<<endl;
	cout<<"1 : Addition";
	cout<<"\n2 : Subtraction";
	cout<<"\n3 : Muktiplication";
	cout<<"\n4 : Inversion";
	cout<<"\n Enter your choice : ";	
	cout<<"Enter your choice  : ";
	cin>>menu1;
		while(true)
			{
				if(menu1 == 1)
					{
						obj2.display_Two_On_Two();
						obj2.adding_Two_On_Two();
						main();
						break;
					}			
				else if(menu1 == 2)
					{
						obj2.display_Two_On_Two();
						obj2.subtraction_Two_On_Two();
						main();
						break;
					}						
				else if(menu1 == 3)
					{
						obj2.display_Two_On_Two();
						obj2.multiplication_Two_On_Two();
						main();
						break;
					}
				else if(menu1 == 4)
					{
						obj2.inverse_Two_On_Two();
						main();
						break;
					}
		
				else
					{
						cout<<"\n\nERROR : Wrong input!!";
						cout<<"\nTry again : "<<endl;
						cout<<"\n1 : Addition";
						cout<<"\n2 : Subtraction";
						cout<<"\n3 : Muktiplication";
						cout<<"\n4 : Inversion";
						cout<<"Enter your choice : ";
						cin>>menu1;
					}	
			}
}
	
void matrix::adding_Two_On_Two()
{
		//calculating 		 
	for(int i=0 ; i<2; i++)
		for(int j=0; j<2 ; j++)
			C[i][j]= A[i][j] + B[i][j];	
	
	
	//Displaying the result		 
	cout<<"\nA + B : "<<endl;
	for(int x=0 ; x<2 ; x++)
	{
		for(int y=0 ; y<2; y++)
			cout<<" "<<"{"<<C[x][y]<<"}";
	cout<<endl;
	}
}

void matrix::subtraction_Two_On_Two()
{
	//calculate
	for(int i=0; i<2; i++)
		for(int j=0; j<2 ; j++)
			C[i][j] = A[i][j] - B[i][j];
			
						
 	//display	 
	cout<<"\nA - B :  "<<endl;	
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2 ; j++)
			cout<<" "<<"{"<<C[i][j]<<"}";	
	cout<<endl;
	}
}


void matrix::multiplication_Two_On_Two()
{
	//calculating
	for(int i = 0; i<2; i++)
		for(int j=0; j<2; j++)
			for(int z=0 ; z<2 ; z++)
				C[i][j]+=A[i][z] * B[z][j];
				
	//displaying the result
	cout<<"\nResult : "<<endl;
	for(int i=0; i<2 ; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<" "<<"{"<<C[i][j]<<"}";
		}
	cout<<endl;
	}
}

void matrix::inverse_Two_On_Two()
{
	//getting the members from user 
	cout<<"Enter matrix's members : "<<endl<<endl;
	for(int i=0; i<2; i++)
		for(int j=0; j<2; j++)
		{
			cout<<"Enter member ["<<i<<"]["<<j<<"] : ";
			cin>>D[i][j];
		}
	
	// displaying the matrix before inversing
	cout<<"Before inversing : "<<endl; 
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
			cout<<" "<<"{"<<D[i][j]<<"}";
			
		cout<<endl;
	}
	
	//calculating the determinal to check if it is zero or not 	
	double determinal = (D[0][0]*D[1][1] - D[0][1]*D[1][0]);
	
	if(determinal == 0)
	{
		cout<<"Matrix is singular . Inverse does not exist."<<endl;
	}
	
	//calculate the inverse of matrix
	double inverse[2][2];
	inverse[0][0] = D[1][1] / determinal;
	inverse[0][1] = -D[0][1] / determinal;
	inverse[1][0] = -D[1][0] / determinal;
	inverse[1] [1]= D[0][0] / determinal;
	
	//Displaying the inversed matrix
	cout<<"\nAfter inversing :  "<<endl;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
			cout<<" "<<"{"<<inverse[i][j]<<"}";
		cout<<endl;
	}
}

void matrix::display_Two_On_Two()
{
		//Displaying the matrixes we have
	cout<<"Matrix A : "<<endl;
	for(int i=0 ; i<2; i++)
		{
		for(int j=0; j<2; j++)
			cout<<" "<<"{"<<A[i][j]<<"}";
		cout<<endl;
		}
	
	cout<<"\nMatrix B "<<endl;
	for(int i=0 ; i<2; i++)
		{
		for(int j=0; j<2; j++)
			cout<<" "<<"{"<<B[i][j]<<"}";
		cout<<endl;
		}
}
//2*2 matrix is done
//=========================================

void matrix::Matrix_Three_On_Three()
{
	matrix obj3;//creating an object of matrix class
	int menu2;
	system("CLS");
	map(2);
	cout<<endl<<endl;
			cout<<"Wellcome to 3*3 matrixes"<<endl<<endl;
			//------------------------------------------------------------------
			cout<<"1 : Addition";
			cout<<"\n2 : Subtraction";
			cout<<"\n3 : Muktiplication";
			cout<<"\n4 : Inversion";
			cout<<"\n Enter your choice : ";
			cin>>menu2;
			
			while(true)
			{
				if(menu2 == 1)
					{
						obj3.display_Three_On_Three();
						obj3.adding_Three_On_Three();
						main();
						break;
					}
				else if(menu2 == 2)
					{
						obj3.display_Three_On_Three();
						obj3.subtraction_Three_On_Three();
						main();
						break;
					}
				else if(menu2 == 3)
					{
						obj3.display_Three_On_Three();
						obj3.multiplication_Three_On_Three();
						main();
						break;
					}
				else if(menu2 == 4)
					{
						obj3.inverse_Three_On_Three();
						main();
						break;
					}
				else
					{
						cout<<"\n\nERROR : Wrong input!!";
						cout<<"\nTry again : "<<endl;
						cout<<"\n1 : Addition";
						cout<<"\n2 : Subtraction";
						cout<<"\n3 : Muktiplication";
						cout<<"\n4 : Inversion";
						cout<<"Enter your choice : ";
						cin>>menu2;
					}	
			}
}
				
				
void matrix::adding_Three_On_Three()
{
		//calculating 	 
	for(int i=0 ; i<3; i++)
		for(int j=0; j<3 ; j++)
			G[i][j]= E[i][j] + F[i][j];	
	
	//Displaying the result 		
	cout<<"A + B  : "<<endl;
	for(int x=0 ; x<3 ; x++)
	{
		for(int y=0 ; y<3; y++)
			cout<<" "<<"{"<<G[x][y]<<"}";
	cout<<endl;
	}	
}				
				
void matrix::subtraction_Three_On_Three()
{
	//calculate
	for(int i=0; i<3; i++)
		for(int j=0; j<3 ; j++)
			G[i][j] = E[i][j] - F[i][j];
			
						
	//display
	cout<<"Result : "<<endl;	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3 ; j++)
			cout<<" "<<"{"<<G[i][j]<<"}";	
	cout<<endl;
	}
}			
				
				
void matrix::multiplication_Three_On_Three()
{
	//calculating
	for(int i = 0; i<3; i++)
		for(int j=0; j<3; j++)
			for(int z=0 ; z<3; z++)
				G[i][j]+=E[i][z] * F[j][z];
				
	//displaying the result
	cout<<"Result : "<<endl;
	for(int i=0; i<3 ; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<" "<<"{"<<G[i][j]<<"}";
		}
	
	cout<<endl;
	}
}				

void matrix::inverse_Three_On_Three()
{
	int E[3][3] = {{10,20,30}, {40,50,60}, {70,80,90}};
		int F[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
		int G[3][3] ;
		double H[3][3];//this one is for the inversation part which the user is ganna enter the members
	
int A[3][3] = {{10,20,30}, {40,50,60}, {70,80,90}};
		int B[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
		int C[3][3] ;
		double D[3][3];//this one is for the inversation part which the user is ganna enter the members
			
	//getting the members from user 
	cout<<"Enter matrix's members : "<<endl<<endl;
	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++)
		{
			cout<<"Enter member ["<<i<<"]["<<j<<"] : ";
			cin>>H[i][j];
		}
	
	system("CLS");
	// displaying the matrix before inversing
	cout<<"Before inversing : "<<endl; 
	for(int i=0; i<3; i++)
	{
		
		for(int j=0; j<3; j++)
			cout<<" "<<"{"<<H[i][j]<<"}";
			
		cout<<endl;
	}
	//calculating the determinal to check if it is zero or not 
	//determinant = a(ei - fh) - b(di - fg) + c(dh - eg)
	double determinal =  H[0][0] * (H[1][1] * H[2][2] - H[1][2] * H[2][1]) -
        H[0][1] * (H[1][0] * H[2][2] - H[1][2] * H[2][0]) +
        H[0][2] * (H[1][0] * H[2][1] - H[1][1] * H[2][0]);
	if(determinal == 0)
	{
		cout<<"Matrix is singular . Inverse does not exist."<<endl;
	}
	double detReciprocal = 1.0 / determinal;
	//calculate the inverse of matrix
	double inverse[3][3];
	inverse[0][0] = (H[1][1] * H[2][2] - H[1][2] * H[2][1]) * detReciprocal;
	inverse[0][1] = (H[0][2] * H[2][1] - H[0][1] * H[2][2]) * detReciprocal;
	inverse[0][2] = (H[0][1] * H[1][2] - H[0][2] * H[1][1]) * detReciprocal;
	inverse[1][0] = (H[1][2] * H[2][0] - H[1][0] * H[2][2]) * detReciprocal;
	inverse[1][1] = (H[0][0] * H[2][2] - H[0][2] * H[2][0]) * detReciprocal;
	inverse[1][2] = (H[0][2] * H[1][0] - H[0][0] * H[1][2]) * detReciprocal;
	inverse[2][0] = (H[1][0] * H[2][1] - H[1][1] * H[2][0]) * detReciprocal;
	inverse[2][1] = (H[0][1] * H[2][0] - H[0][0] * H[2][1]) * detReciprocal;
	inverse[2][2] = (H[0][0] * H[1][1] - H[0][1] * H[1][0]) * detReciprocal;
	
	//Displaying the inversed matrix
	cout<<"\nAfter inversing :  "<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
			cout<<" "<<"{"<<inverse[i][j]<<"}";
		cout<<endl;
	}
}			

void matrix::display_Three_On_Three()
{
		int E[3][3] = {{10,20,30}, {40,50,60}, {70,80,90}};
		int F[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	cout<<"Matrix A : "<<endl;
	for(int i=0 ; i<3; i++)
		{
		for(int j=0; j<2; j++)
			cout<<" "<<"{"<<E[i][j]<<"}";
		cout<<endl;
		}
	
	cout<<"\nMatrix B "<<endl;
	for(int i=0 ; i<3; i++)
		{
		for(int j=0; j<3; j++)
			cout<<" "<<"{"<<F[i][j]<<"}";
		cout<<endl<<endl;
		}
}
		
void Merge_Sort()
{
	system("CLS");
	map(3);
}

void Quick_Sort(int arr[] , int low , int high)
{
	if (low < high) {
    int pivotIndex = partition(arr, low, high);

    // Recursively sort the elements before and after the pivot
    Quick_Sort(arr, low, pivotIndex - 1);
    Quick_Sort(arr, pivotIndex + 1, high);
    }
}

// Function to partition the array and return the pivot index
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the last element as the pivot
    int i = low - 1;        // Index of the smaller element

    for (int j = low; j <= high - 1; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++;  // Increment the index of the smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


//selection sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum element with the first element of the unsorted part
        swap(arr[i], arr[minIndex]);
    }
}
