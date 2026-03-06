#include <string>

namespace multiaddr {
struct Protocol {
    uint32_t code;
    int32_t size;
    std::string_view name;
};
} // namespace multiaddr