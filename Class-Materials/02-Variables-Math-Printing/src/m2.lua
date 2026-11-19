-- m2_variables_and_expressions: the projectile-motion result.
local spec = require "specops"

compiler("clang")
require_package("clang")
local m2 = spec:testCase("m2_variables_and_expressions.c", "main")
m2:percentPassPoints(3)
m2:expect():outputContains("The distance traveled (in meters) is 324.8")
