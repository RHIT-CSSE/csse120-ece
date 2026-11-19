-- m1_hello_world: the student's program must print the greeting and the
-- course welcome. The personalized name line varies by student, as before.
local spec = require "specops"

compiler("clang")
require_package("clang")
local m1 = spec:testCase("m1_hello_world.c", "main")
m1:percentPassPoints(3)
m1:expect():outputContains("Hello World!")
m1:expect():outputContains("Welcome to CSSE 120")
