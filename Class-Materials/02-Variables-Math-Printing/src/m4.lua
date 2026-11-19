-- m4_errors: each TODO section must have been uncommented, fixed, and still
-- print its marker plus the completion line.
local spec = require "specops"

compiler("clang")
require_package("clang")
local m4 = spec:testCase("m4_errors.c", "main")
m4:percentPassPoints(3)
m4:expect():outputContains("_TODO 1_", "Complete")
m4:expect():outputContains("_TODO 2_", "3 + 2 evaluates to: 5", "Complete")
m4:expect():outputContains("_TODO 3_", "Complete")
m4:expect():outputContains("_TODO 4_", "test more", "Complete")
