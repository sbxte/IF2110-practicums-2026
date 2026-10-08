module EnergiPortal where

-- ENERGI PORTAL
-- DEFINISI DAN SPESIFIKASI
jumlahAktivasi :: Int -> Int
-- jumlahAktivasi e menghasilkan banyak aktivasi sampai energi e menjadi nol.

-- REALISASI
jumlahAktivasi e = if e == 0 then 0 else (jumlahAktivasi (div e 2)) + 1

-- APLIKASI
-- jumlahAktivasi 13

