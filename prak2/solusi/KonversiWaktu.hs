module KonversiWaktu where

-- KONVERSI WAKTU
-- DEFINISI TYPE
-- Tuliskan definisi tipe Jam dengan konstruktor Jm untuk jam, menit, dan detik.
-- Tambahkan deriving (Show, Read).
-- Lengkapi definisi tipe terlebih dahulu agar file dapat dimuat di GHCi.
data Jam = Jm Int Int Int
  deriving (Show, Read)

-- DEFINISI DAN SPESIFIKASI
detikKeJam :: Int -> Jam
-- detikKeJam total mengonversi detik menjadi Jam dalam siklus 24 jam.

-- REALISASI
detikKeJam total = 
  Jm (div (mod total (86400)) 3600) (div (mod total 3600) 60) (mod total 60)

-- APLIKASI
-- detikKeJam 3665

