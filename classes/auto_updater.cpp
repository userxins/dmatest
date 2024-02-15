#include "auto_updater.hpp"

namespace updater {
#ifndef _UC

    bool file_good(const std::string& name) {
        // You might still want to check if a file exists for other purposes
        std::ifstream f(name.c_str());
        return f.good();
    }

    // Adjust or remove depending on how you decide to manage configuration data
    bool read() {
        // If you're reading from a different source or format, adjust this method.
        return false;
    }

    void save() {
        // If you're saving to a different source or format, adjust this method.
    }
#endif
}
