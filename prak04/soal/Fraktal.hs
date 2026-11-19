module Fraktal where

-- Sandi Fraktal
-- DEFINISI DAN SPESIFIKASI
data Sandi = Atom Char | List [Sandi] deriving (Show, Read)

dekripsi :: Sandi -> String
-- Tentunya boleh buat helper function tambahan

-- REALISASI
dekripsi sandi = undefined

-- APLIKASI
-- > dekripsi (Atom 'X')
-- "X"
-- Penjelasan: Depth 1. 'X' diulang 1 kali.
--
-- > dekripsi (List [Atom 'A', List [Atom 'B']])
-- "AABBB"
-- Penjelasan: 
-- - Masuk ke dalam `List` terluar. Depth menjadi 2.
-- - Di depth 2, terdapat `Atom 'A'`. Karakter 'A' diulang 2 kali -> "AA".
-- - Di depth 2, terdapat `List` baru. Masuk ke list tersebut, depth naik menjadi 3.
-- - Di depth 3, terdapat `Atom 'B'`. Karakter 'B' diulang 3 kali -> "BBB".
-- - Dekripsi = "AA" ++ "BBB" = "AABBB".
--
-- > dekripsi (List [Atom 'A', List [Atom 'B'], Atom 'C'])
-- "AABBBCC"

