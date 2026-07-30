#include <iostream>
using namespace std ;


// 1.  reverse 

/*
void reverse (int arr[], int size){
	int start = 0;
	int end =size-1;
	while(start <end)
	{
		swap (arr[start ], arr[end]);
		start++;
		end--;	
	}
}	
int main ()
{
	int arr[10] ={1,2,3,4,5,9,11,12,6,7};
	reverse (arr,10);
	for (int x=0;x<10;x++)
	{cout << arr[x] << " ";}
	return 0;
	
}
*/

// 2.  linear search
/*
int search (int arr[], int size, int target )
{
	for (int i=0; i<size;  i++)
	{
		if (arr[i] == target);
	
		return -1;
	}
}
int main ()
{
	int arr[10] ={1,2,3,4,5,9,11,12,6,7};
	int target;
	cout << "enter element";
	cin >> target;
	
	int result = search(arr, 10, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;}
    
    */
    
//  3 Bubble sorting

/*
void bubbleSort (int arr[], int size )
{
	for (int i=0; i<size-1;  i++)
	
	{ 
	for (int j=1; j<size -i;  j++)
	{
		if ( arr[j]<arr[j-1])
		swap(arr[j], arr[j-1]);
	}
	}
	
}
int main ()
{
	int arr[10] ={1,2,3,4,5,9,11,12,6,7}; 
	bubbleSort ( arr, 10 );
	for (int x=0;x<10;x++)
	{cout << arr[x] << " ";}
	return 0;
}
 */
 
 //4  binary search
 /*
 int Binarysearch (int arr[], int target ,int start, int end )
{

	int mid= (start+end)/2;
		if (arr[mid] == target)
            return mid;

        if (target > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;

    return -1;

}
int main ()
{
	int arr[10] ={1,2,3,4,5,9,11,12};
	int target;
	cout << "enter element";
	cin >> target;
	
	int result = Binarysearch(arr, target ,1,7);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;}
 */
 
 // 5 array rotation 
 
 /*
 void rightRotate (int arr[], int size) 
 {
 	int temp =arr[size-1];
 	for(int i=size-1 ; i>0 ;i--)
 	{
 		arr[i]= arr[i-1];	
	 }
	 arr[0]=temp;
  } 
  
  void leftRotate (int arr[], int size) 
 {
 	int temp =arr[0];
 	for(int i=0 ; i>size -1 ;i++)
 	{
 		arr[i]= arr[i+1];	
	 }
	 arr[size -1]=temp;
  } 
  int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    rightRotate(arr, 5);
    cout<<"right"<< endl;
    
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    leftRotate(arr, 5);
    cout<<"left"<< endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
  
    return 0;
}
  */
  
