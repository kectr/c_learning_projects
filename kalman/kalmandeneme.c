#include <mgl2/mgl.h>

double calculatePosition(double a, double t) {
    // Cismin konumunu hesapla
    return 0.5 * a * t * t;
}

int main() {
    mglGraph gr;
    gr.SetRanges(0, 10, 0, 100); // Grafik aralýklarýný ayarla

    mglData x(100), y(100);
    for (int i = 0; i < 100; i++) {
        x.a[i] = i * 0.1; // Zaman (t)
        y.a[i] = calculatePosition(9.8, x.a[i]); // Ývme ve zamaný kullanarak konumu hesapla
    }

    gr.Plot(x, y, "r-"); // Grafik çizimi (kýrmýzý renkte bir çizgi)
    gr.Axis();           // Eksenleri ekle

    gr.WriteFrame("graph.png"); // Grafik dosyasýný kaydet

    return 0;
}

