module Padding where

-- UTILITY FUNCTIONS
-- Fungsi pembantu yang dapat digunakan untuk mengerjakan fungsi yang perlu direalisasikan
konso :: Int -> [Int] -> [Int]
konso e l = [e] ++ l

konsdot :: [Int] -> Int -> [Int]
konsdot l e = l ++ [e]

konsoL :: [Int] -> [[Int]] -> [[Int]]
konsoL e l = [e] ++ l

konsdotL :: [[Int]] -> [Int] -> [[Int]]
konsdotL l e = l ++ [e]

-- BARIS NOL
-- DEFINISI DAN SPESIFIKASI
barisNol :: Int -> [Int]
-- barisNol n adalah baris berisi n buah elemen bernilai 0
-- Prasyarat: n >= 0

-- REALISASI
barisNol n = if n == 0 then [] else (0 : barisNol (n - 1))

-- APLIKASI
-- barisNol 4
-- barisNol 0

-- PAD BARIS
-- DEFINISI DAN SPESIFIKASI
padBaris :: [Int] -> [Int]
-- padBaris b adalah baris b dengan tambahan sebuah elemen bernilai 0
-- di ujung paling kiri dan sebuah elemen bernilai 0 di ujung paling kanan

-- REALISASI
padR :: [a] -> a -> [a]
padR l p = case l of
  [] -> [p]
  (x:xs) -> x : (padR xs p)

pad :: [a] -> a -> [a]
pad l p = p : (padR l p)

padBaris b = pad b 0

-- APLIKASI
-- padBaris [1,2]

-- PAD SEMUA BARIS
-- DEFINISI DAN SPESIFIKASI
padSemuaBaris :: [[Int]] -> [[Int]]
-- padSemuaBaris m adalah list of list m yang setiap barisnya telah diberi sebuah
-- elemen bernilai 0 di ujung paling kiri dan sebuah elemen bernilai 0 di ujung paling kanan

-- REALISASI
padSemuaBaris m = case m of
  [] -> []
  (x:xs) -> (padBaris x) : (padSemuaBaris xs)

-- APLIKASI
-- padSemuaBaris [[1,2],[3,4]]
-- padSemuaBaris [[5]]

-- PADDING
-- DEFINISI DAN SPESIFIKASI
padding :: Int -> [[Int]] -> [[Int]]
-- padding l m menghasilkan list of list m yang setiap barisnya terdiri dari l elemen,
-- yang diberi satu lapis padding bernilai 0 mengelilingi keempat sisinya
-- (padding dengan 0 pada sisi atas, bawah, kiri, dan kanan)
-- Prasyarat: m tidak kosong dan setiap barisnya sama panjang

-- REALISASI

-- pad top bottom
padding l m = pad (padSemuaBaris m) (barisNol (l + 2))

-- APLIKASI
-- padding 2 [[1,2],[3,4]]
-- padding 1 [[5]]
-- padding 3 [[1,2,3]]

