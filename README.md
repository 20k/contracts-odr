This example project shows how easy it is to accidentally disable contract checks due to odr violations, in projects with mixed contract checking modes

Despite the call to test(1) in main.cpp being a precondition failure, and main being compiled with `-fcontract-semantic=default:abort`, the contract assertion is never fired

This code outputs `Everything is totally fine` on gcc 14.2.0 on msys2 (ucrt64) on windows 10