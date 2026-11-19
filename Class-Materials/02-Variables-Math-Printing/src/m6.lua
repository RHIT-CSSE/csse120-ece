-- m6_review: one row per TODO. Under EDU_UNIT_TESTING the source replaces
-- rand() with a fixed pair of values, so the swap row can check a real swap.
local spec = require "specops"

compiler("clang")
require_package("clang")
local m6 = spec:testCase("m6_review.c", "main")
m6:percentPassPoints(5)
m6:expect():outputContains("_TODO 1_", "75 75")
m6:expect():outputContains("_TODO 2_", "Original: 85 89", "Swapped: 89 85")
m6:expect():outputContains("_TODO 3_", "Approximate e: 2.7183", "Actual e: 2.7183")
m6:expect():outputContains("_TODO 4_", "7.00000", "0.65699")
m6:expect():outputContains("_TODO 5_",
  "6 people ordered 4 pizzas, and each pizza has 8 slices",
  "Each person gets 5 slices of pizza",
  "There will be 2 slices left over")
