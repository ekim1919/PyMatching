#include "events.h"

#include <gtest/gtest.h>

#include "fixed_length_vector.h"

TEST(Events, TentativeEvent) {
    pm::TentativeEvent te{};
    te.tentative_event_type = pm::SHRINKING;
}
