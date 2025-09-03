/// Checks a simple case of bfloat16

// RUN: %{build} -o %t.out
// RUN: %{run} %t.out


// XFAIL: native_cpu

#include bfloat16_example.hpp

int main() {
  return runTest();
}
