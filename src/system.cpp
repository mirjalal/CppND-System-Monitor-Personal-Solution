#include <unistd.h>
#include <cstddef>
#include <set>
#include <string>
#include <vector>

#include "process.h"
#include "processor.h"
#include "system.h"
#include "linux_parser.h"

using std::set;
using std::size_t;
using std::string;
using std::vector;

// TODO: Return the system's CPU
Processor& System::Cpu() { return cpu_; }

// TODO: Return a container composed of the system's processes
vector<Process>& System::Processes() { return processes_; }


// COMPLETED: Return the system's kernel identifier (string)
string System::Kernel() { return LinuxParser::Kernel(); }

// COMPLETED: Return the system's memory utilization
float System::MemoryUtilization() { return LinuxParser::MemoryUtilization(); }

// COMPLETED: Return the operating system name
string System::OperatingSystem() { return LinuxParser::OperatingSystem(); }

// COMPLETED: Return the number of processes actively running on the system
int System::RunningProcesses() { return LinuxParser::RunningProcesses(); }

// COMPLETED: Return the total number of processes on the system
int System::TotalProcesses() { return LinuxParser::TotalProcesses(); }

// COMPLETED: Return the number of seconds since the system started running
long int System::UpTime() { return LinuxParser::UpTime(); }
