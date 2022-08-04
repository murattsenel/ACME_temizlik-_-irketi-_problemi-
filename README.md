# ACME_temizlik-_sirketi-_problemi-

ACME şirketi temizlik hizmeti vermektedir. Temizlik çalışanları her zaman aynı şirkete 
yönlendirilmemektedir yani rotasyon uygulanmaktadır. Maksimum iterasyon tamamlandığında ise 
yeni rotasyon başlatılmaktadır. Ayrıca her şirket’e bir Kıdemli İşçi atanmaktadır. Kıdemli işçiler, temizlik 
işçilerini yönlendirmekte ve çalıştırmaktadırlar. Kıdemli işçiler, işçilerin maksimum iterasyonu
(rotasyon) tamamlanana kadar ilk seçildikleri şirkette devam etmektedir. Her firmanın kendine has 
farklı işleri vardır, bu neden ile işçi ve kıdemli işçiler arasında haksızlığı önlemek için rastgele dağıtılması 
gerekmektedir.

ACME temizlik şirketi 57 temizlik işçisine sahiptir. 57 temizlik işçisinden 10 ‘u kıdemli işçilerdir. ACME, 
9 adet firmaya hizmet vermektedir. Her firma kendi talebi kadar işçi almaktadır.

• İşçiler firmalar arasında rotasyonda olmalıdır.
• İşçiler maksimum iterasyon dolana kadar aynı firma da görev yapamamaktadır.
• Kıdemli işçiler, işçilerin maksimum iterasyonu dolana kadar aynı firma da görev yapmalıdır.
• Kıdemli işçiler rastgele firmalara dağıtılmalıdı
//////////////////////////////////////////////////////////////////////////////////////////

Her rotasyonda 10 adet işçi çalışmıyor.Bunların 1'i kıdemli 9'u normal işçidir.
A firmasında 1 kıdemli 4 işçi
B firmasında 1 kıdemli 4 işçi
C firmasında 2 kıdemli 12 işçi
D firmasında 2 kıdemli 6 işçi
E firmasında 1 kıdemli 3 işçi
F firmasında 1 kıdemli 2 işçi
G firmasında 1 kıdemli 5 işçi
H firmasında 1 işçi
J firmasında 1 işçi

Çözmem gerekenler 
1.İşçilerin kendi aralarındaki maksimim iterasyon nedir.
2.Kıdemli işçilerin kendi aralarındaki maksimum iterasyon nedir.
3.İşçiler hangi sırayala nasıl yer değiştirecek
4.Boşta kalan 10 işçi nasıl yerleştirilecek
5.Tablo oluşturulurken işçi isimleri nasıl ekrana yazdırılacak.


Çözümler

1.İşçilerin maxsimum iterasyonunu bulmak için en fazla kıdemsiz işçi alan firmaya bakmamız gerekir.
  C firması her iterasyonda farklı 12 adet kıdemsiz işçi almakta  3 iterasyon sonunda 36 adet işçiyi kullanmış olacaklar
  4. iterasyon için elimizde 12 adet farklı işçi olması gerekir.bizim 11 adet işçimiz kaldiği için 3 iterasyon kıdemsiz
  işçilerin maksimum iterasyonu 3.

2.kıdemli işçileride bulmak için aynı yöntemi kullanıcaz.Maksimum 5 iterasyon olur.

3 ve 4 işçilerin sırasını her iterasyonda 12 birim arttırmamız gereklidir. 4.iterasyon sonunda 48 işçi gerekeceği
için döngüyü bir sonraki işçiden başlatmalıyız.Bu sayede hem hiçbir işçi boşta kalmamış olur.Hemde işçilerin 
hepsi her firmada eşit sayıda çalışmış olur.

5.İşçi isimlerini  sayı tipine dönüştürüp işlemler yaptım.Daha sonra pointer dizisi yardımıyla sayıya
karşılık gelen isimi ekrana yazdırdım. 

