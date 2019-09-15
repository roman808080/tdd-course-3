/*
Write a function to convert from normal numbers to Roman Numerals.

The Romans wrote numbers using letters - I, V, X, L, C, D, M. (converter http://www.novaroma.org/via_romana/numbers.html)

There is no need to be able to convert numbers larger than about 3000. (The Romans themselves didn't tend to go any higher)

Wikipedia says: Modern Roman numerals ... are written by expressing each digit separately starting with the left most digit and skipping any digit with a value of zero.

To see this in practice, consider the example of 1990.
In Roman numerals 1990 is MCMXC:
1000=M 900=CM 90=XC

2008 is written as MMVIII:
2000=MM 8=VIII

1998 is written as MCMXCVIII.
*/

#include <gtest/gtest.h>

static std::map<unsigned int, std::string> arabicRomanMap {std::make_pair<unsigned int, std::string>(1, "I"),
                                                           std::make_pair<unsigned int, std::string>(5, "V"),
                                                           std::make_pair<unsigned int, std::string>(10, "X"),
                                                           std::make_pair<unsigned int, std::string>(50, "L"),
                                                           std::make_pair<unsigned int, std::string>(100, "C"),
                                                           std::make_pair<unsigned int, std::string>(500, "D"),
                                                           std::make_pair<unsigned int, std::string>(1000, "M")};

std::string convertToRomanFromArabic(const unsigned int arabicNumber)
{
    return arabicRomanMap[arabicNumber];
}

TEST(RomanNumbers, ConvertSimpleNumbers)
{
    for (const auto& arabicRomanPair: arabicRomanMap)
    {
        EXPECT_EQ(arabicRomanPair.second, convertToRomanFromArabic(arabicRomanPair.first));
    }
}
