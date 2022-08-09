# ACME_temizlik-_sirketi-_problemi-

ACME sirketi temizlik hizmeti vermektedir. Temizlik calisanlari her zaman ayni sirkete 
yonlendirilmemektedir yani rotasyon uygulanmaktadir. Maksimum iterasyon tamamlandiginda ise  
yeni rotasyon baslatilmaktadir. Ayrica her sirket’e bir Kidemli Isci atanmaktadir. Kidemli isciler, temizlik 
iscilerini yonlendirmekte ve calistirmaktadirlar. Kidemli isciler, iscilerin maksimum iterasyonu
(rotasyon) tamamlanana kadar ilk secildikleri sirkette devam etmektedir. Her firmanin kendine has 
farkli isleri vardir, bu neden ile isci ve kidemli isciler arasinda haksizligi onlemek icin rastgele dagitilmasi 
gerekmektedir.

ACME temizlik sirketi 57 temizlik iscisine sahiptir. 57 temizlik iscisinden 10 ‘u kidemli iscilerdir. ACME, 
9 adet firmaya hizmet vermektedir. Her firma kendi talebi kadar isci almaktadir.

• Isciler firmalar arasinda rotasyonda olmalidir.
• Isciler maksimum iterasyon dolana kadar ayni firma da gorev yapamamaktadir.
• Kidemli isciler, iscilerin maksimum iterasyonu dolana kadar ayni firma da gorev yapmalidir.
• Kidemli isciler rastgele firmalara dagitilmalidi
//////////////////////////////////////////////////////////////////////////////////////////

Her rotasyonda 10 adet isci calismiyor.Bunlarin 1'i kidemli 9'u normal iscidir.
A firmasinda 1 kidemli 4 isci
B firmasinda 1 kidemli 4 isci
C firmasinda 2 kidemli 12 isci 
D firmasinda 2 kidemli 6 isci
E firmasinda 1 kidemli 3 isci
F firmasinda 1 kidemli 2 isci
G firmasinda 1 kidemli 5 isci
H firmasinda 1 isci
J firmasinda 1 isci

cozmem gerekenler 
1.Iscilerin kendi aralarindaki maksimum iterasyonu nedir?
2.Kidemli iscilerin kendi aralarindaki maksimum iterasyonu nedir?
3.Isciler hangi sirayla nasil yer degistirecek?
4.Bosta kalan 10 isci nasil yerlestirilecek?
5.Tablo olusturulurken isci isimleri nasil ekrana yazdirilacak?
6.Kodu yanlis yazdim.Isciler rasgele dagitalacak.
7.Rand() fonksiyonu ile dagitim yapilacak ancak bu fonksiyon 
belli bir aralikta aynı sayısı cok kes uretiyor.Her sayidan 
bir adet uretmesi lazim.
8.Isciler uretilen isci dizisinde 2 onceki rotasyondan farkli şirketlerde bulunmali
9.Butun isterler hazir ancak cok fazla kod ve gereksiz islem oldugu icin yavas calısır veya yazdirmiyor.


cozumler

1.Iscilerin maksimum iterasyonunu bulmak icin en fazla kidemsiz isci alan firmaya bakmamiz gerekir.
  C firmasi her iterasyonda farkli 12 adet kidemsiz isci almakta  3 iterasyon sonunda 36 adet isciyi kullanmis olacaklar
  4. iterasyon icin elimizde 12 adet farkli isci olmasi gerekir.bizim 11 adet iscimiz kaldigi icin 3 iterasyon kidemsiz
  iscilerin maksimum iterasyonu .

2.Kidemli iscileride bulmak icin ayni yontemi kullanicaz.Maksimum 5 iterasyon olur.

3. ve 4. Iscilerin sirasini her iterasyonda 12 birim arttirmamiz gereklidir. 4.iterasyon sonunda 48 isci gerekecegi
icin donguyu bir sonraki isciden baslatmaliyiz.Bu sayede hem hicbir isci bosta kalmamis olur.Hemde iscilerin 
hepsi her firmada esit sayida calismis olur.

5.Isci isimlerini  sayi tipine donusturup islemler yaptim.Daha sonra pointer dizisi yardimiyla sayiya
karsilik gelen isimi ekrana yazdirdim. 
6.Rand() fonksiyonu ile rasgele sayi uretebildim.
7.Rand() fonksiyonundan uretilen her deger icin onceki degerler ile karsilastirma yaptim
deger ayni ise sayiyi degistirdim.
8.Iscilerin rotasyondaki calısmalarini 2 adet dizi icinde sakladim.
bu sekilde her maksimum iterasyon dolana kadar hangi iscinin nerde calistigi kontrol ediliyor.
9.Gereksiz islemi onlemek icin kontrolu yapılan sirketlere giris kosulu koydum.
calisma performansi 2 kat artti.

