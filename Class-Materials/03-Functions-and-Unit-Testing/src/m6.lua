-- m6_test_driven_development: the three student-written unit-test sections,
-- plus the two functions they implement.
local spec = require "specops"

compiler("clang")
require_package("clang")

local tests = spec:testCase("m6_test_driven_development.c", "main")
tests:percentPassPoints(3)
tests:expect():outputContains("Testing the   sum_of_digits   function:", "Test 3 expected:", "Testing the   digits_in_cube   function:")
tests:expect():outputContains("Testing the   digits_in_cube   function:", "Test 3 expected:", "Testing the   digits_in_power   function:")
tests:expect():outputContains("Testing the   digits_in_power   function:", "Test 3 expected:")

local cube = spec:testCase("m6_test_driven_development.c", "digits_in_cube")
cube:percentPassPoints(1.5)
cube:expect(3):equals(9)
cube:expect(142):equals(37)
cube:expect(5):equals(8)
cube:expect(4):equals(10)
cube:expect(6):equals(9)
cube:expect(12):equals(18)

local power = spec:testCase("m6_test_driven_development.c", "digits_in_power")
power:percentPassPoints(1.5)
power:expect(3, 3):equals(9)
power:expect(2, 4):equals(7)
power:expect(2, 5):equals(5)
power:expect(12, 3):equals(18)
power:expect(233, 3):equals(35)
power:expect(2, 10):equals(7)
power:expect(3, 7):equals(18)
