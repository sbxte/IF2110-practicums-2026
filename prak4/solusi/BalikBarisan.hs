module BalikBarisan where

-- BALIK
-- DEFINISI DAN SPESIFIKASI
balik :: [Int] -> [Int]
-- balik l menghasilkan list yang berisi elemen l dengan urutan terbalik

-- REALISASI
balikOnto :: [Int] -> [Int] -> [Int]
balikOnto x y = case x of
  [] -> y
  (a:as) -> balikOnto as (a : y)

balik l = balikOnto l []

-- APLIKASI
-- balik [1,2,3]
-- balik []

-- BALIK BARISAN
-- DEFINISI DAN SPESIFIKASI
balikBarisan :: [[Int]] -> [[Int]]
-- balikBarisan l menghasilkan list yang setiap list di dalamnya dibalik urutannya,
-- sedangkan urutan list-list itu sendiri tetap seperti semula

-- REALISASI
balikBarisan l = case l of
  [] -> []
  (x:xs) -> (balik x) : (balikBarisan xs)

-- APLIKASI
-- balikBarisan [[1,2],[3],[4,5]]
-- balikBarisan [[],[7,8,9]]
-- balikBarisan []
