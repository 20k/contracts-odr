#include <iostream>
#include <experimental/contract>
#include "file2.hpp"
#include "common.hpp"

void handle_contract_violation(const std::experimental::contract_violation &)
{
    printf("Detected contract violation\n");
}

int main()
{
    thing_doer();
    test(1);

    printf("Everything is totally fine\n");
    return 0;
}
