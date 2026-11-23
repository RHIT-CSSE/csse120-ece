-- Unit tests for Problem 2 of Homework 1 (Platonic solids).
--
-- One case per function in p2_platonic_solids.c, which sits beside
-- this spec. Paths in a spec resolve against the spec's own directory, so the
-- same spec runs here and in a packaged autograder, where the submission's
-- files are staged beside it.
--
-- Every function must return the documented value and print nothing, as the
-- assignment requires. Area and volume are doubles, checked with the same
-- 1e-5 absolute tolerance the old Unity suite used.
local spec = require "specops"

compiler("clang")
require_package("clang")

spec:floatPrecision(1e-5)

-- platonic_name was unscored before (weight 0), so it stays unscored here.
local name = spec:testCase("p2_platonic_solids.c", "platonic_name")
name:expect(3, 3):equals("tetrahedron"):outputEquals("")
name:expect(4, 3):equals("cube"):outputEquals("")
name:expect(3, 4):equals("octahedron"):outputEquals("")
name:expect(5, 3):equals("dodecahedron"):outputEquals("")
name:expect(3, 5):equals("icosahedron"):outputEquals("")

local vertices = spec:testCase("p2_platonic_solids.c", "platonic_vertices")
vertices:percentPassPoints(3)
vertices:expect(3, 3):equals(4):outputEquals("")
vertices:expect(4, 3):equals(8):outputEquals("")
vertices:expect(3, 4):equals(6):outputEquals("")
vertices:expect(5, 3):equals(20):outputEquals("")
vertices:expect(3, 5):equals(12):outputEquals("")

local edges = spec:testCase("p2_platonic_solids.c", "platonic_edges")
edges:percentPassPoints(3)
edges:expect(3, 3):equals(6):outputEquals("")
edges:expect(4, 3):equals(12):outputEquals("")
edges:expect(3, 4):equals(12):outputEquals("")
edges:expect(5, 3):equals(30):outputEquals("")
edges:expect(3, 5):equals(30):outputEquals("")

local faces = spec:testCase("p2_platonic_solids.c", "platonic_faces")
faces:percentPassPoints(3)
faces:expect(3, 3):equals(4):outputEquals("")
faces:expect(4, 3):equals(6):outputEquals("")
faces:expect(3, 4):equals(8):outputEquals("")
faces:expect(5, 3):equals(12):outputEquals("")
faces:expect(3, 5):equals(20):outputEquals("")

local area = spec:testCase("p2_platonic_solids.c", "platonic_area")
area:percentPassPoints(4)
area:expect(3, 3, 2.0):equals(4 * math.sqrt(3)):outputEquals("")
area:expect(4, 3, 2.0):equals(24.0):outputEquals("")
area:expect(3, 4, 2.0):equals(8 * math.sqrt(3)):outputEquals("")
area:expect(5, 3, 2.0):equals(12 * math.sqrt(25 + 10 * math.sqrt(5))):outputEquals("")
area:expect(3, 5, 2.0):equals(20 * math.sqrt(3)):outputEquals("")

local phi = (1 + math.sqrt(5)) / 2
local xi = math.sqrt(3 - phi)

local volume = spec:testCase("p2_platonic_solids.c", "platonic_volume")
volume:percentPassPoints(4)
volume:expect(3, 3, 2.0, 1 / math.sqrt(6)):equals(math.sqrt(8) / 3):outputEquals("")
volume:expect(4, 3, 2.0, 1.0):equals(8.0):outputEquals("")
volume:expect(3, 4, 2.0, math.sqrt(2 / 3)):equals(math.sqrt(128) / 3):outputEquals("")
volume:expect(5, 3, 2.0, phi ^ 2 / xi):equals(20 * phi ^ 3 / xi ^ 2):outputEquals("")
volume:expect(3, 5, 2.0, phi ^ 2 / math.sqrt(3)):equals(20 * phi ^ 2 / 3):outputEquals("")
