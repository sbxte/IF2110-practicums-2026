module BalasSapaan where

-- KODE JURNAL
-- DEFINISI DAN SPESIFIKASI
sing :: String -> String
-- sing x membalas sapaan dari input string x dengan pemetaan yang telah ditentukan

-- REALISASI
sing input = case input of
  "halo" -> "hi"
  "hi" -> "halo"
  "bunda" -> "ayah"
  "ayah" -> "bunda"
  "pagi" -> "sore"
  "sore" -> "pagi"
  "siang" -> "malam"
  "malam" -> "siang"
  "kiri" -> "kanan"
  "kanan" -> "kiri"
  "atas" -> "bawah"
  "bawah" -> "atas"
  _ -> "tidak dikenali"

-- APLIKASI
-- sing "halo"
