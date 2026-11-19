-- m3_data_types: the closing joke, printed as the last output.
local spec = require "specops"

compiler("clang")
require_package("clang")
local m3 = spec:testCase("m3_data_types.c", "main")
m3:percentPassPoints(3)
m3:expect():outputContains("What is a ghost's favorite data type?")
m3:expect():outputContains("   A BOOlean!")
