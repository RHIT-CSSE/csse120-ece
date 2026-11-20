-- Day 1 setup check: the program must print the greeting and the course welcome.
-- Run from this directory with:
--   edu_unit hello.lua
local spec = require "specops"

compiler("clang")
require_package("clang")
local hello = spec:testCase("hello.c", "main")
hello:percentPassPoints(3)
hello:expect():outputContains("Hello World!")
hello:expect():outputContains("Welcome to CSSE 120")
