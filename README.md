# ACME_temizlik-_-irketi-_problemi-
algoritma oluşturmadan önce bilinenler
47 işçi
10 kıdemli işçi var
c firması 12 işçi istiyor 3 iterasyon sonunda c firmasında farklı 36 işçi çalışmış olacaktır
geriye 11 işçi kalacağından iterasyon son bulur ve kidemlilerin yer değiştirmesi gerekir.

Çözmem gerekenler 
kıdemli işçiler nasıl bir basamak kaydırılacak*** ÇÖZÜLDÜ
Bu işçileri her biri bir kere çalışmak üzere nasıl dağıtılacak
her işçinin çalışması için boşta kalan 11 işçi nasıl iş planına alınacak***ÇÖZÜLDÜ
işçilerin isimleri uzun karakterler bunlar nasıl yazdıralacak *** ÇÖZÜLDÜ
işçileri doğru biçimde şirketlere yerleştirmek için her şirket adına dizi açılacak***çözüldü




çözüm bulduklarım

kıdemli işçileri 9 firma arasında atama yapmak için 2lik sayı sistemi mantığı kullanılacak kıdemli işçiler bir basamak kaydıralacak
işçilerin adının ekrana yazdırılması enum tipi kullanılarak çözüldü
işçileri uygun biçimde tek bir şirket dizisine yerleştirebildim
kod çok uzun olmaya başladı kodları funcsiyon haline getirince geri dönüş değeri alamıyorum.



DENENECEKLER

İşçileri tablo yapmadan önce her şirket için bir dizi oluşturacak ve işçiler bu dizilere istenilen kurallarda yerleştirilecek. Çözüldü.




/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
örnek kod
#include <stdio.h>

main() {
	
enum isciler {W_1,W_2,W_3,W_4,W_5,W_6,W_7,W_8,W_9,W_10,W_11,W_12,W_13,W_14,W_15,W_16,W_17,W_18,W_19,W_20,W_21,W_22,W_23,W_24,W_25,W_26,W_27,W_28,W_29,W_30,W_31,W_32,W_33,W_34,W_35,W_36,W_37,W_38,W_39,W_40,W_41,W_42,W_43,W_44,W_45,W_46,W_47};

enum isciler isci;

char *isciad[] = {"W_1","W_2","W_3","W_4","W_5","W_6","W_7","W_8","W_9","W_10","W_11","W_12","W_13","W_14","W_15","W_16","W_17","W_18","W_19","W_20","W_21","W_22","W_23","W_24","W_25","W_26","W_27","W_28","W_29","W_30","W_31","W_32","W_33","W_34","W_35","W_36","W_37","W_38","W_39","W_40","W_41","W_42","W_43","W_44","W_45","W_46","W_47"};

for (isci = W_1; isci <= W_47; isci++)
   printf("%s\n", isciad[isci]);



enum kidemli_isci {LW_1,LW_2,LW_3,LW_4,LW_5,LW_6,LW_7,LW_8,LW_9,LW_10};

enum kidemli_isci kidemli;

char *kidemliad[] = {"LW_1","LW_2","LW_3","LW_4","LW_5","LW_6","LW_7","LW_8","LW_9","LW_10"};
/*
for (kidemli = LW_1; kidemli <= LW_10; kidemli++)
   printf("%s\n", kidemliad[kidemli]);
*/
}
