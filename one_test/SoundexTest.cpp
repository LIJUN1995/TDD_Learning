#include <string>

class Soundex
{
public:
    std::string encode(const std::string& word) const {
        return word;
    }
};

#include "gmock/gmock.h"

TEST(SoundexEncoding, RetainSoleLetterOfOneLetterWord) {
    Soundex soundex;

    auto encoded = soundex.encode("A");

    ASSERT_THAT(encoded, testing::Eq("A"));
}