-- m3_unit_testing: the four print-based unit tests. Test 4 is the student's;
-- the spec checks its label and format, not the values chosen.
local spec = require "specops"

compiler("clang")
require_package("clang")

local m3 = spec:testCase("m3_unit_testing.c", "main")
m3:percentPassPoints(3)
m3:expect():outputContains("Test 1 expected:", "       actual:  ")
m3:expect():outputContains("Test 2 expected:", "       actual:  ")
m3:expect():outputContains("Test 3 expected:", "       actual:  ")
m3:expect():outputContains("Test 4 expected:", "       actual:  ")
