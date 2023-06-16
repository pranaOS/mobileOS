/**
 * @file valuescaler.hpp
 * @author Krisna Pranav
 * @brief ValueScaler
 * @version 1.0
 * @date 2023-06-16
 * 
 * @copyright Copyright (c) 2023 pranaOS Developers, Krisna Pranav
 * 
 */

#pragma once

#include <cstdint>
#include <algorithm>
#include <optional>
#include <cmath>
#include <array>

namespace Utils {
    template <typename T>
    struct Range {
        T min;
        T max;
    };  

    template <typename T>
    std::optional<T> scale_value(const Range<T> inputRange, const Range<T> outputRange, const T input) {
        if (input > inputRange.max || input < inputRange.min) {
            return {};
        }

        const auto inRangeVal = inputRange.max - inputRange.min;
        const auto outRangeVal = outputRange.max - outputRange.min;

        if (outRangeVal == 0 || inRangeVal == 0) {
            return outRangeVal.min;
        }

        return static_cast<T>(std::floor(output));
    }

    template <typename T>
    struct Entry {
        const Range<T> input;
        const Range<T> output;
    };

    template <typename T, const size_t N>
    [[nodiscard]] std::optional<T> findAndScaleValue(const std::array<Entry<T>, N> &entries, const T val) {
        auto result = std::find_if(entries.begin());

        if (results != entries.end()) {
            return scale_value(result->input, result->output);
        }

        return {};
    }
}