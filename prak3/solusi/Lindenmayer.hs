module Lindenmayer where

-- BAKTERI LINDENMAYER
-- DEFINISI DAN SPESIFIKASI
populasiBakteri :: Int -> Char -> Int
-- populasiBakteri n c menghasilkan total populasi pada generasi ke-n,
-- dimulai dari satu bakteri c, dengan 0 <= n <= 20.

-- REALISASI
populasiBakteri 0 _ = 1
populasiBakteri n 'A' = 2 * (populasiBakteri (n - 1) 'B')
populasiBakteri n 'B' = 
  let a = (populasiBakteri (n - 1) 'A')
      b = (populasiBakteri (n - 1) 'B')
      c = (populasiBakteri (n - 1) 'C')
  in a + b + c
populasiBakteri n 'C' = 
  let x = (populasiBakteri (n - 1) 'X')
      c = (populasiBakteri (n - 1) 'C')
  in x + c
populasiBakteri _ _ = 1

-- APLIKASI
-- populasiBakteri 2 'A'

