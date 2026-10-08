module AturanMcBucket where

-- ATURAN MCBUCKET
-- DEFINISI DAN SPESIFIKASI
buatEnkripsi :: [(Int -> Bool, Int -> Int)] -> (Int -> Int)
-- buatEnkripsi aturan menghasilkan sebuah FUNGSI enkripsi. 
-- Fungsi enkripsi tersebut akan memproses sebuah integer melalui 
-- serangkaian modifikasi berdasarkan aturan yang diberikan secara berurutan.
-- Jika aturan kosong atau tidak ada predikat yang terpenuhi, nilai tetap sama.

-- REALISASI
buatEnkripsi aturan = case aturan of
  [] -> (\x -> x)
  ((p,e):as) ->
    (\x ->
      let nx = if p x then (e x) else x
          ne = buatEnkripsi as
      in ne nx)

