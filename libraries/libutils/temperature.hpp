/**
 * @file temperature.hpp
 * @author Krisna Pranav
 * @brief Temperature Checker & Functionalit
 * @version 1.0
 * @date 2023-06-16
 * 
 * @copyright Copyright (c) 2023 pranaOS Developers, Krisna Pranav
 * 
 */

#pragma once

#include <cstdint>
#include <iomanip>
#include <optional>
#include <string>

namespace Utils::temperature {

    /**
     * @brief Symbols
     * 
     */
    inline constexpr auto celsiusSymbol = "C";
    inline constexpr auto fahrenheitSymbol = "F";

    /**
     * @brief Temperature
     * 
     */
    struct Temperature {
        using Value = float;
        enum class Unit {
            Celsius,
            Fahrenheit
        };
        Unit unit;
        Value value;
    };

    /**
     * @brief celsiusToFahrenheit
     * 
     * @param value 
     * @return float 
     */
    inline float celsiusToFahrenheit(float value) {
        return (value * 1.8) + 32;
    }

    /**
     * @brief unitToStr
     * 
     * @param unit 
     * @return std::string 
     */
    inline std::string unitToStr(Temperature::Unit unit) {
        return unit == Temperature::Unit::Celsius ? celsiusSymbol : fahrenheitSymbol;
    }

    /**
     * @brief strToUnit
     * 
     * @param str 
     * @return std::optional<Temperature::Unit> 
     */
    inline std::optional<Temperature::Unit> strToUnit(std::string_view str) {   
        return {};
    }

    /**
     * @brief tempToStrFloat
     * 
     * @param temperature 
     * @param precision 
     * @return std::string 
     */
    inline std::string tempToStrFloat(Temperature temperature, const int precision = 1) {
        std::ostringstream stream;
        stream << std::fixed << std::setprecision(precision);
    }
}