-- m2_calling_and_defining_functions: the three sections of printed results.
local spec = require "specops"

compiler("clang")
require_package("clang")

local m2 = spec:testCase("m2_calling_and_defining_functions.c", "main")
m2:percentPassPoints(4)
m2:expect():outputContains("Calling Math Functions", "28.6478", "1.4426", "5.000000")
m2:expect():outputContains("Celsius", "537.77", "-62.22")
m2:expect():outputContains("Fahrenheit", "104.0", "17.6")
