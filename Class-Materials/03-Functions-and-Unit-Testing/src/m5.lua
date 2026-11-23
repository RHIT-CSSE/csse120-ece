-- m5: automated tests for cube_root, the function you implemented in m4.
--
-- This module is a demo, not a coding exercise. Read this file, then run it
-- from this folder with:
--   edu_unit m5.lua
--
-- edu_unit builds a small test program from this spec, calls cube_root six
-- times, and reports pass/fail for each row. Compare that with m4, where you
-- printed expected and actual values and compared them by eye.
local spec = require "specops"

spec:floatPrecision(1e-5)

compiler("clang")
require_package("clang")

local cube_root = spec:testCase("m4_test_driven_development.c", "cube_root")
cube_root:percentPassPoints(3)
cube_root:expect(27.0):equals(3.0)
cube_root:expect(64.0):equals(4.0)
cube_root:expect(125.0):equals(5.0)
cube_root:expect(216.0):equals(6.0)
cube_root:expect(74.088):equals(4.2)
cube_root:expect(75.0):equals(4.21716)
