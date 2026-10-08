module SandiJurnal where

-- SANDI JURNAL
-- DEFINISI DAN SPESIFIKASI
isSandiValid :: Int -> Bool
-- isSandiValid sandi benar jika sandi terdiri dari tiga digit,
-- digit pertama dan terakhir sama, digit tengah berbeda,
-- dan jumlah ketiga digit habis dibagi tiga

-- REALISASI
isSandiValid sandi =
  let threeDigits = (sandi <= 999) && (sandi >= 100)
      digitOne = mod (div sandi 100) 10
      digitTwo = mod (div sandi 10) 10
      digitThree = mod sandi 10
      sumAllDigits = digitOne + digitTwo + digitThree
      oneEqThree = (digitOne == digitThree)
      twoNeqOne = (digitTwo /= digitOne)
      divisibleThree = (mod sumAllDigits 3) == 0
   in threeDigits && oneEqThree && twoNeqOne && divisibleThree

-- APLIKASI
-- isSandiValid 252
