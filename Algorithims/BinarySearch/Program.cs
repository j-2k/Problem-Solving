//Binary Search Algorithim
//https://www.geeksforgeeks.org/binary-search/
using System;


Console.WriteLine("Hello, World! Welcome to Binary Search!");

//Binary search needs the array/search container to be SORTED ALREADY
int[] array1 = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}; //10 elements | index range 0 to 9
int[] array2 = { 2, 3, 4, 10, 40 };
// Search a1 = target/key = 23
// Search a2 = target/key = 10

int target = 23;
Console.WriteLine("Target Element = " + target);

//Change this from array1 or 2 and change the definition of key to test different values
BinarySearch(array1,target);

void BinarySearch(int[] arr, int key)
{
    //left start at index 0 right starts at index 9 now;
    int left = 0, right = arr.Length - 1;
    bool isFound = false;
    Console.WriteLine("Starting Search...");

    while (left <= right)
    {
        int midIndex = left + (right - left) / 2;
        Console.WriteLine("Current Element = " + arr[midIndex] + " | Current Index = " + midIndex);//16

        if(key == arr[midIndex])
        {//key found in middle 
            Console.WriteLine("Found Element IN array = " + arr[midIndex] + " | @ Index position = " + midIndex);
            isFound = true;
            break;
        }

        if(key > arr[midIndex])// 23 > 16 : move right
        {//ignore left half
            Console.WriteLine("Ignore left half");
            left = midIndex + 1;
        }
        else
        {//ignore right half
            Console.WriteLine("Ignore right half");
            right = midIndex - 1;
        }
    }

    if(!isFound)
    {
        Console.WriteLine("No solution?");
    }
}
 




