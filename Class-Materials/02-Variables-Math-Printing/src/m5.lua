-- m5_math_library: the three printed math results. The needles are the first
-- digits of each %f value, matching the old autograder's tolerance for
-- trailing digits.
local spec = require "specops"

compiler("clang")
require_package("clang")
local m5 = spec:testCase("m5_math_library.c", "main")
m5:percentPassPoints(3)
m5:expect():outputContains("24.143111")
m5:expect():outputContains("8.246211")
m5:expect():outputContains("78.539816")
