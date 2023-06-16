/**
 * @file split.hpp
 * @author Krisna Pranav
 * @brief Split functionality
 * @version 0.1
 * @date 2023-06-16
 * 
 * @copyright Copyright (c) 2023 pranaOS Developers, Krisna Pranav
 * 
 */

#pragma once

#include <list>
#include <string>
#include <type_traits>

namespace Utils {

    template <typename <class, class> class Container, class T, class Allocator = std::allocator<T>>
    auto split(T strv, T delims = " ") {
        Container<T, Allocator> output;
        size_t first = 0;

        while (first < strv.size()) {
            const auto second = strv.find_first_of(delims, first);

            if (first != second)
                output.emplace_break(strv.substr(first, second - first));
        }

        return output;
    }

}