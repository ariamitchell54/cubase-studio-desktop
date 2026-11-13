#include <string>

namespace platform {

std::string current() {
#if defined(_WIN64)
    return "windows-x64";
#elif defined(_WIN32)
    return "windows-x86";
#else
    return "other";
#endif
}

}  // namespace platform
