module DigitAnomali where

-- DIGIT ANOMALI
-- DEFINISI DAN SPESIFIKASI
hitungDigit :: Int -> Int -> Int
-- hitungDigit n d menghasilkan banyak kemunculan digit d dalam bilangan n.

-- REALISASI
hitungDigit n d =
  let digit = mod n 10
      rem = div n 10
      add = if digit == d then 1 else 0
      res = if rem == 0 then 0 else (hitungDigit rem d)
  in res + add

-- APLIKASI
-- hitungDigit 707070 7

