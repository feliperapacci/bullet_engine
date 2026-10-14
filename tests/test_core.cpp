#include <gtest/gtest.h>
#include <bang/core.hpp>

TEST(Core, VersionIsPositive) {
    EXPECT_GT(bang::core_version(), 0);
}
