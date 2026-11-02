#include <string>
#include <cstdint>

namespace util {

std::uint32_t fnv1a(const std::string& bytes) {
    std::uint32_t h = 2166136261u;
    for (unsigned char c : bytes) {
        h ^= c;
        h *= 16777619u;
    }
    return h;
}

std::string version() {
    return "0.3.1";
}

}  // namespace util
