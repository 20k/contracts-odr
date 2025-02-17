#include <cstdio>
#include <experimental/contract>
#include "common.hpp"

void handle_contract_violation(const std::experimental::contract_violation &)
{
    printf("Detected contract violation\n");
}

int main()
{
    test(1);

    printf("Everything is totally fine\n");
    return 0;
}
