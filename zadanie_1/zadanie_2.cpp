#include "PiSerial.h"
#include "HelloWorlds.h"
using namespace std;

int main(){
    long long num_steps = 1000000000;   // Parametr do p?tli wyznaczania PI

    helloWorlds();
    pi_1(num_steps);

    /** PI:
        Ilo?? r??nych wynik?w : 7 r??nych wersji kodu * | {t_sekwencyjne, t_r?wnoleg?e(n=logiczne), t_r?wnoleg?e(n=fizyczne), t_r?wnoleg?e(n=fizyczne/2)} | = 7 * 4 = 28
        Dla ka?dego z 7 program?w :
            - por?wna? t_sekwencyjne vs {pozosta?e czasy}
            - okre?li? przyczyny wp?ywaj?ce na czasy przetwarzania r??ne/jednakowe z
            czasem oblicze? sekwencyjnych, uwzgl?dni? liczb? w?tk?w i procesor?w
            uczestnicz?cych w przetwarzaniu oraz spodziewany stopie? lokalno?ci dost?pu
            do danych/zmiennych,
            - okre?li? czy wyst?puje i dlaczego? uniewa?nianie kopii linii pami?ci podr?cznej
            danych procesora przechowywanych w pami?ciach podr?cznych, czy jest to
            znacz?ce dla czasu przetwarzania?

            - dla systemu Linux por?wna? czas trwania oblicze? (wall clock) oraz czas u?ycia
            procesor?w (mo?liwy do pomierzenia w systemie Linux) i wyja?ni? przyczyny
            uzyskanych warto?ci.
            - obliczy? przyspieszenie przetwarzania w wyniku zastosowania r?wnoleg?o?ci
            czyli iloraz czasu przetwarzania sekwencyjnego i czasu przetwarzania badanej
            wersji r?wnoleg?ej.
    **/
}
