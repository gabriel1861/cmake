#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>

int main(){
  // 输出不同级别的日志
  spdlog::info("Hello, {}!", "world");
  spdlog::info("Welcome to spdlog!");
  spdlog::error("Some error message with arg: {}", 1);

  // 只显示warn以及比warn更高级的信息
  spdlog::set_level(spdlog::level::debug);
  spdlog::warn("Easy padding in numbers like {:08d}", 12);
  spdlog::critical("Support for int: {0:d}; hex: {0:x}; oct: {0:o}; bin: {0:b}", 42);
  spdlog::info("Support for floats {:03.2f}", 1.23456);
  spdlog::info("Positional args are {1} {0}..", "too", "supported");
  spdlog::info("{:<30}", "left aligned");

  // 开启并创建本地日志
  auto my_logger = spdlog::basic_logger_mt("file_logger", "logs/basic-log.txt");
  my_logger->set_level(spdlog::level::warn);
  // 按照指定级别实时刷新日志系统
  my_logger->flush_on(spdlog::level::trace);
  my_logger->warn("Easy padding in numbers like {:08d}", 12);
  my_logger->critical("Support for int: {0:d}; hex: {0:x}; oct: {0:o}; bin: {0:b}", 42);
  my_logger->info("Support for floats {:03.2f}", 1.23456);
  my_logger->info("Positional args are {1} {0}..", "too", "supported");
  my_logger->info("{:<30}", "left aligned");

  return 0;
}