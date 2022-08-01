# ACME_temizlik-_-irketi-_problemi-
algoritma oluşturmadan önce bilinenler
47 işçi
10 kıdemli işçi var
c firması 12 işçi istiyor 3 iterasyon sonunda c firmasında farklı 36 işçi çalışmış olacaktır
geriye 11 işçi kalacağından iterasyon son bulur ve kidemlilerin yer değiştirmesi gerekir.

Çözmem gerekenler 
kıdemli işçiler nasıl bir basamak kaydırılacak*** ÇÖZÜLDÜ
Bu işçileri her biri bir kere çalışmak üzere nasıl dağıtılacak
her işçinin çalışması için boşta kalan 11 işçi nasıl iş planına alınacak
işçilerin isimleri uzun karakterler bunlar nasıl yazdıralacak *** ÇÖZÜLDÜ


çözüm bulduklarım

kıdemli işçileri 9 firma arasında atama yapmak için 2lik sayı sistemi mantığı kullanılacak kıdemli işçiler bir basamak kaydıralacak
işçilerin adının ekrana yazdırılması enum tipi kullanılarak çözüldü

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
örnek kod
#include <stdio.h>

main() {
	
enum isciler {W_1,W_2,W_3,W_4,W_5,W_6,W_7};

enum isciler isci;

char *isciad[] = {"LW_1","LW_2","LW_3","LW_4","LW_5","LW_6","LW_7"};




enum kidemli_isci {LW_1,LW_2,LW_3,LW_4,LW_5,LW_6,LW_7};

enum kidemli_isci kidemli;

char *kidemliad[] = {"LW_1","LW_2","LW_3","LW_4","LW_5","LW_6","LW_7"};

for (kidemli = LW_1; kidemli <= LW_7; kidemli++)
   printf("%s\n", kidemliad[kidemli]);

}
