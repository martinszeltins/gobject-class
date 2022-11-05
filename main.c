#include <stdio.h>
#include "example-person.h"

int main() {
    ExamplePerson * john = example_person_new();

    printf("john your name is: %s \n", example_person_get_name(john));
}
