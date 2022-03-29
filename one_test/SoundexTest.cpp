#include <string>

class Soundex {
public:
    std::string encode(const std::string& word) const {
        return zeroPad(word);
    }

private:
    std::string  zeroPad(const std::string& word) const {
        return word + "000";
    }
};

#include "gmock/gmock.h"
using ::testing::Eq;

TEST(SoundexEncoding, RetainSoleLetterOfOneLetterWord) {
    Soundex soundex;

    auto encoded = soundex.encode("A");
    ASSERT_THAT(encoded, Eq("A000"));
}