module Pesta where

-- Pesta Eksklusif
-- DEFINISI DAN SPESIFIKASI
tamuEksklusif :: [Int] -> [Int] -> [Int]
-- tamuEksklusif menerima dua Himpunan ID tamu (berupa list of integer), lalu mengembalikan Himpunan baru yang berisi gabungan dari Tamu Eksklusif Mebel dan Tamu Eksklusif Pacific. Tamu Eksklusif adalah tamu yang hanya diundang oleh salah satu dari mereka saja, dan tidak diundang oleh keduanya (Symmetric Difference dari kedua himpunan). Urutannya adalah tamu eksklusif Mebel sesuai daftar Mebel, lalu tamu eksklusif Pacific sesuai daftar Pacific.

-- remove from list
remL :: [Int] -> Int -> [Int]
remL l x = case l of
  [] -> []
  (a:as) ->
    let n = remL as x
    in if a == x then n else a:n

-- Half sym diff
hsd :: [Int] -> [Int] -> [Int]
hsd x y = case (x, y) of
  ([], b) -> b
  ((a:as), b) -> 
    let n = hsd as b
    in remL n a

-- REALISASI
tamuEksklusif mebel pacific = (hsd pacific mebel) ++ (hsd mebel pacific)
  
        

-- APLIKASI
-- > tamuEksklusif [1, 2, 3] [3, 4, 5]
-- [1, 2, 4, 5]
-- > tamuEksklusif [9, 8] [9, 8]
-- []

