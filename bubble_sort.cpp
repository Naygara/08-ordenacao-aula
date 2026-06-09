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
    // todo: Implementar
}


int main() {
    vector<int> aleatorio = {64, 25, 12, 22, 11};
    imprimir(aleatorio, "Antes ");
    bubbleSort(aleatorio);
    imprimir(aleatorio, "Depois");

    return 0;
}