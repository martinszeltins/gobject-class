#include <stdio.h>
#include "example-person.h"

int main() {
    ExamplePerson * john = example_person_new();

    printf("\n---------- Example Person App ----------\n");
    printf("Created a new person \"john\" \n");
    printf("john your name is: \"%s\" \n", example_person_get_name(john));
    
    printf("changing the name of john to: \"Jony Ive\"... \n");
    example_person_set_name(john, "Jony Ive");
    printf("john your name is: \"%s\" \n", example_person_get_name(john));
}
