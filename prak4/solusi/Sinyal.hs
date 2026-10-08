module Sinyal where

-- SINYAL ANOMALI
-- DEFINISI DAN SPESIFIKASI
cariAnomali :: [Int] -> [Int]
-- Fungsi rekursif cariAnomali menerima sederet frekuensi dan mengembalikan list baru yang hanya berisi angka-angka Anomali, dengan mempertahankan urutan kemunculan. Angka disebut anomali JIKA DAN HANYA JIKA angka tersebut lebih besar (>) dari jumlah dua angka yang berada tepat setelahnya. Jika sisa angka di belakangnya kurang dari dua buah, maka angka tersebut pasti bukan Anomali.

-- REALISASI
cariAnomali l = case l of
  [] -> []
  [x] -> []
  [x, y] -> []
  (a : (b : (c : ls))) ->
    let next = cariAnomali (b : (c : ls))
    in if a > b + c then (a : next) else next


-- APLIKASI
-- cariAnomali [10, 2, 3, 8, 1, 1, 5]
-- [10, 8]
-- - 10 > (2 + 3) = 5 (Anomali)
-- - 2 tidak > (3 + 8) = 11
-- - 3 tidak > (8 + 1) = 9
-- - 8 > (1 + 1) = 2 (Anomali)
-- - 1 tidak > (1 + 5) = 6
-- - Sisa elemen diabaikan karena tidak punya cukup 2 angka setelahnya.

