module PosisiAnomali where

-- POSISI ANOMALI
-- DEFINISI TYPE
-- Tuliskan definisi tipe Point dengan konstruktor Pt dan dua komponen Int.
-- Tambahkan deriving (Show, Read).
-- Lengkapi definisi tipe terlebih dahulu agar file dapat dimuat di GHCi.
data Point = Pt Int Int
  deriving (Show, Read)

-- DEFINISI DAN SPESIFIKASI
posisiTitik :: Point -> Int
-- posisiTitik p menghasilkan kode posisi titik p sesuai aturan pada soal.

-- REALISASI
posisiTitik (Pt x y) =
  if x == 0 && y == 0 then 0
  else if x > 0 && y > 0 then 1
  else if x < 0 && y > 0 then 2
  else if x < 0 && y < 0 then 3
  else if x > 0 && y < 0 then 4
  else if y == 0 then 5
  else 6

-- APLIKASI
-- posisiTitik (Pt 5 5)

