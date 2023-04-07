//1.Algoritma sangat penting untuk menyelesaikan masalah karena algoritma memberikan cara yang terstruktur, efisien, dan efektif dalam memecahkan masalah tertentu. 
//Dengan menggunakan algoritma, masalah dapat dipecahkan menjadi serangkaian langkah atau instruksi logis yang mudah diikuti dan dipahami oleh mesin dan manusia. 
//Selain itu, algoritma juga dapat membantu meningkatkan kinerja sistem atau program dengan mengurangi waktu dan sumber daya yang diperlukan untuk menyelesaikan tugas tertentu. 
//Dengan menggunakan algoritma yang tepat, suatu masalah dapat diselesaikan dengan cara yang lebih efisien dan lebih cepat, sehingga menghemat waktu dan biaya yang dibutuhkan.

//2.Array: Array adalah struktur data sederhana yang terdiri dari sejumlah elemen dengan jenis data yang sama. 
//Setiap elemen array memiliki indeks yang unik, yang digunakan untuk mengakses elemen tersebut. 
//Operasi umum pada array adalah mengisi nilai pada elemen array, membaca nilai dari elemen array, dan memperbarui nilai elemen array.
//Linked List: Linked list adalah struktur data yang terdiri dari serangkaian simpul yang terhubung satu sama lain. 
//Setiap simpul memiliki dua bagian, yaitu data dan referensi ke simpul berikutnya dalam linked list. 
//Operasi umum pada linked list adalah menambahkan simpul ke awal atau akhir linked list, menghapus simpul dari linked list, dan mengakses nilai data pada simpul tertentu.

//3.Ada beberapa faktor yang dapat mempengaruhi efisiensi waktu eksekusi suatu program, antara lain:
//Kompleksitas algoritma: menggunakan algoritma yang lebih sederhana dan efisien dapat mempercepat waktu eksekusi program.
//Ukuran data input: Semakin besar ukuran data input, semakin lama waktu yang dibutuhkan program untuk memprosesnya.
//Kualitas kode: Kualitas kode yang buruk, seperti penggunaan variabel yang tidak efisien atau penggunaan loop yang tidak diperlukan, dapat memperlambat waktu eksekusi program. 
//Sistem operasi dan hardware: sistem operasi yang lebih cepat atau hardware yang lebih kuat dapat membantu meningkatkan efisiensi waktu eksekusi program
//Bahasa pemrograman: Memilih bahasa pemrograman yang tepat untuk tugas yang diinginkan dapat membantu meningkatkan efisiensi waktu eksekusi program.

//4.Untuk mengurutkan data yang ukurannya besar, algoritma yang paling efisien adalah Merge Sort. karena algoritma Merge Sort memiliki kompleksitas waktu O(n log n), yang artinya waktu yang dibutuhkan untuk mengurutkan data tumbuh secara proporsional dengan logaritma dari jumlah data. 
//Oleh karena itu, algoritma Merge Sort lebih cepat dan lebih efisien dibandingkan dengan algoritma pengurutan lainnya seperti Bubble Sort atau Selection Sort yang memiliki kompleksitas waktu yang lebih tinggi untuk data yang ukurannya besar

//5.algoritma loglinier adalah merge sort dan quick sort sedangkan algoritma quadratic adalah insertion sort, bubble sort dan selection sort

#include <iostream>
using namespace std;

// Maksimal jumlah data
const int MAX_DATA = 76;

// Deklarasi array vina dengan ukuran maksimum MAX_DATA
int vina[MAX_DATA];

// Fungsi merge untuk menggabungkan dua array menjadi satu
void merge(int low, int mid, int high) {
    int i, vr, k;
    int temp[MAX_DATA];

    i = low;
    vr = mid + 1;
    k = low;

    // Menggabungkan kedua array
    while (i <= mid && vr <= high) {
        if (vina[i] <= vina[vr]) {
            temp[k] = vina[i];
            i++;
        }
        else {
            temp[k] = vina[vr];
            vr++;
        }
        k++;
    }
    // Menyalin sisa elemen array pertama
    while (vr <= high) {
        temp[k] = vina[vr];
        vr++;
        k++;
    }

    // Menyalin sisa elemen array kedua
    while (i <= mid) {
        temp[k] = vina[i];
        i++;
        k++;
    }

    // Menyalin elemen yang sudah digabungkan ke dalam array vina
    for (k = low; k <= high; k++) {
        vina[k] = temp[k];
    }
}

// Fungsi merge sort untuk mengurutkan array vina secara rekursif
void mergeSort(int low, int high) {
    // Base case, jika array hanya terdiri dari satu elemen, keluar dari fungsi
    if (low >= high) {
        return;
    }
    // Mencari titik tengah dari array
    int mid = (low + high) / 2;

    // Panggil mergeSort untuk setiap bagian array
    mergeSort(low, mid);
    mergeSort(mid + 1, high);

    // Gabungkan kedua array menjadi satu
    merge(low, mid, high);
}

