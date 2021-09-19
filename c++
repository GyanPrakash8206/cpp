// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"Enter a number : ";
//     cin>>a;
//     cout<<"The number entered is : "<<a;
//      return 0;
// }
// `````````````````````````````````````````````````````````````````````````````
// #include <iostream>
// using namespace std;
// int arr[10];
// void inputElement(int arr[])
// {
//     cout<<"Enter 10 elements of array : "<<endl;
//     for (int i = 0; i < 10; i++)
//     {
//        cin>>arr[i];
//     }
// }
// void showElement(int arr[])
// {
//     cout<<"The elements are : "<<endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cout<<arr[i]<<" ";
//     } 
// }
// int main()
// {
//     inputElement(arr);
//     showElement(arr);
//     return 0;
// }
// -------------------------------------------------------------------------
// #include <iostream>
// using namespace std;
// int main() 
// {
//     char ch;
//     cout<<"Enter the character : ";
//     cin>>ch;
//     cout<<"Entered char is : "<<ch;
//     return 0;
// }
// ---------------------------------------------------------------------------
// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout<<"Enter a character : ";
//     cin.get(ch);
//     cout<<"------------------------------------------"<<endl;
//     cout<<"The entered character is : ";
//     cout.put(ch);
//     return 0;
// }
// ------------------------------------------------------------
// #include <iostream>
// using namespace std;
// int main()
// {
//     char line[30];
//     cout<<"Enter the message : ";
//     cin.getline(line, 20);
//     cout.write(line,5);
//     cout<<endl;
//     cout.write(line,10);
//     cout<<endl;
//     cout.write(line,15);
//     cout<<endl;
//     cout.write(line,20);
//     cout<<endl;
//     return 0;
// }
// --------------------------------------------------------
// #include<iostream>
// using namespace std;
// void selectionSort(int a[], int n) 
// {
//     int i, j, min, temp;
//     for (i = 0; i < n - 1; i++)
//     {
//         min = i;
//         for (j = i + 1; j < n; j++)
//         if (a[j] < a[min])
//         min = j;
//         temp = a[i];
//         a[i] = a[min];
//         a[min] = temp;
//     }
// }
// int main() {
//    int a[] = { 22, 91, 35, 78, 10, 8, 75, 99, 1, 67, -4, 0, 544, 999, 81, 84, 61, 41, 31, 86 };
//    int n = sizeof(a)/ sizeof(a[0]);
//    int i;
//    cout<<"Given array is:"<<endl;
//    for (i = 0; i < n; i++)
//    cout<< a[i] <<" ";
//    cout<<endl;
//    selectionSort(a, n);
//    printf("\nSorted array is: \n");
//    for (i = 0; i < n; i++)
//    cout<< a[i] <<" ";
//    return 0;
// }
// -------------------------------------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// void linearSearch(vector<int> &arr, int target)
// {
//     int ans = -1;
//     for (int i = 0; i <= arr.size() - 1; i++)
//     {
//         if (arr[i] == target)
//         {
//             ans = 1;
//             cout << "Element found  " <<"\n";
//             break;
//         }
//     }
//     if (ans == -1)
//     {
//         cout << "Element Not found" << "\n";
//     }
// }

// int main()
// {
//     vector<int> arr = {1, 0, 2, -4, 5, 45, 35, 90, 15, 95, 78, 25, 58, 436, 175};
//     int target = 30;
//     linearSearch(arr, target);
//     return 0;
// }
// ---------------------------------------------------------------------------

// #include <iostream>
// #include <string>
// using namespace std;

// void PrintLengthOfString(string str)
// {
//     int i = 0;
//     while(str[i]){
//         i++;
//     }
//     cout << "Length of string is: " << i << endl;
// }

// int main()
// {
//     string str;
//     cout << "Enter a string" << endl;
//     getline(cin, str);
//     PrintLengthOfString(str);
// }

// -------------------------------------------------------------------------------

// #include <iostream>	
// #include <string>
// using namespace std;
	
// void concat(string str1, string str2)
// {
// 	string result = str1 + str2;
// 	cout << "The concatenated string is: " << result << endl;
// }
	
// int main()
// {
// 	string str1, str2;
// 	cout << "Enter string 1:" << endl;
// 	getline(cin, str1);
// 	cout << "Enter string 2:" << endl;
// 	getline(cin, str2);
// 	concat(str1, str2);
// }


// --------------------------------------------------------------------
// #include <iostream>
// using namespace std;
// class Student
// {
// 	public:
// 	string name;
// 	int roll_no;
// };
// int main()
// {
// 	Student obj;
// 	obj.name="Albert";
// 	obj.roll_no= 1;
// 	cout<<obj.name<<"\n";
// 	cout<<obj.roll_no;
// 	return 0;
// }
// *****************************************************************
//************************ ***************************************Triangle with class and function****************************************
// #include<iostream>
// using namespace std;
// class Triangle

// {
// 	public:
// 	float area;
// 	float perimeter;
// };
// void area( )
// {
// 	Triangle obj;
	
// 	obj.area=0.5*4*5;
// 	cout<<"Area of given triangle is: "<< obj.area<<endl;
// }
// void perimeter()
// {
// 	Triangle obj1;
// 	obj1.perimeter=3+4+5;
// 	cout<<"The perimeter of the given triangle is : "<<obj1.perimeter<<endl;
// }	
// int main()
// {
// 	area();
// 	perimeter();
// 	return 0;
// }	
