#include <iostream>
#include <vector>

using namespace std;

void imprimir(const vector<int>& v, const string& label = "") {
    if (!label.empty()) cout << label << ": ";
    cout << "[ ";
    for (int x : v) cout << x << " ";
    cout << "]\n";
}

void bubbleSort(vector<int>& v) {
    int n = v.size();
    bool trocou;
    
    // loop externo que roda n-1 vezes
    for (int i = 0; i < n - 1; i++) {
        trocou = false;
        
        // O loop interno diminui a cada iteracao pq os dancarinos ja estao ordenados
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                // Troca os elementos fora de ordem
                swap(v[j], v[j + 1]);
                trocou = true;
            }
}


int main() {
    vector<int> aleatorio = {64, 25, 12, 22, 11};
    imprimir(aleatorio, "Antes ");
    bubbleSort(aleatorio);
    imprimir(aleatorio, "Depois");

    return 0;
}
