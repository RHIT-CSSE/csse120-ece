-- m4_test_driven_development: the student-written print-based unit tests.
-- Only the Test N labels and format are checked; the values are the student's
-- choice. As in the old autograder, the cube rows are anchored at the cube
-- header; a cube test that is missing could in principle be matched by a
-- matching label in the cube_root section.
local spec = require "specops"

compiler("clang")
require_package("clang")

local m4 = spec:testCase("m4_test_driven_development.c", "main")
m4:percentPassPoints(4)
m4:expect():outputContains("Testing the   cube   function:", "Test 1 expected:", "actual:")
m4:expect():outputContains("Testing the   cube   function:", "Test 2 expected:", "actual:")
m4:expect():outputContains("Testing the   cube   function:", "Test 3 expected:", "actual:")
m4:expect():outputContains("Testing the   cube_root   function:", "Test 1 expected:", "actual:")
m4:expect():outputContains("Testing the   cube_root   function:", "Test 2 expected:", "actual:")
m4:expect():outputContains("Testing the   cube_root   function:", "Test 3 expected:", "actual:")
