#include <assert.h>
#include <stdio.h>

// Declare the functions to be tested
int getPerimeter(int* length, int* width);
int getArea(int* length, int* width);

// Unit test for getPerimeter
void test_getPerimeter() {
    int length = 5;
    int width = 3;
    int expectedPerimeter = length + length + width; 
    int result = getPerimeter(&length, &width);
    assert(result == expectedPerimeter);  // Check if result matches the expected perimeter
    printf("test_getPerimeter passed!\n");
}

// Unit test for getArea
void test_getArea() {
    int length = 5;
    int width = 3;
    int expectedArea = length * width;  // Area = length * width
    int result = getArea(&length, &width);
    assert(result == expectedArea);  // Check if result matches the expected area
    printf("test_getArea passed!\n");
}


