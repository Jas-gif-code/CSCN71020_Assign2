#include <stdio.h>
#include <assert.h>
#include "main.h"

// Unit test for setLength
void test_setLength() {
    int length = 99;   

    // Test valid length within range
    setLength(50, &length);
    assert(length == 50);  // Expecting length to be set to 50
    length = 99;

    // Test invalid length (negative value)
    setLength(-10, &length);
    assert(length == 99);  // Expecting length to remain 99 (no change)
    length = 99;

    // Test invalid length (above maximum limit)
    setLength(100, &length);
    assert(length == 99);  // Expecting length to remain 99 (no change)

    printf("test_setLength passed!\n");
}

// Unit test for setWidth
void test_setWidth() {
    int width = 100;

    // Test valid width within range
    setWidth(30, &width);
    assert(width == 30);  // Expecting width to be set to 30
    width = 100;

    // Test invalid width (zero)
    setWidth(0, &width);
    assert(width == 100);  // Expecting width to remain 100 (no change)
    width = 100;

    // Test invalid width (negative value)
    setWidth(-20, &width);
    assert(width == 100);  // Expecting width to remain 100 (no change)

    printf("test_setWidth passed!\n");
}
