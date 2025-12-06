#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <array>
#include <cstdlib>
#include <memory>
#include <string>

std::string run_app() {
  std::array<char, 128> buffer{};
  std::string result;

  std::unique_ptr<FILE, decltype(&pclose)> pipe(popen("./cpp-cli", "r"),
                                                pclose);
  if (!pipe)
    return {};

  while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr)
    result += buffer.data();
  return result;
}

TEST_CASE("Program prints correct output") {
  REQUIRE(run_app() == "Hello world\n");
}
