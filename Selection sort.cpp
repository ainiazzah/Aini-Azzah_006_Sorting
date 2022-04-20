// Aini Azzah - 006
// Selection sort minimum methode

#include<iostream>
using namespace std;

//program menukar nilai minimum dengan elemen awal pada array
void tukar (int &index_pertama, int &min)
{  
   int temp;
   temp = index_pertama;
   index_pertama = min;
   min = temp;
}


//Program mengurutkan menggunakan selection sort
void selectionSort (int *array, int jumlah)
{
   int index_pertama, index_kedua, min;
   for (index_pertama=0; index_pertama<jumlah-1; index_pertama++)
   {
      min = index_pertama;   //mendeklarasikan nilai minimum pada index pertama
      //looping untuk mencari kemudian menentukan nilai yang lebih kecil dari index selanjutnya
      for (index_kedua = index_pertama+1; index_kedua < jumlah; index_kedua++)
      {
      	if (array[index_kedua] < array[min])	//menelusuri urutan angka, dengan mencari nilai minimum disepanjang elemen array
            min = index_kedua;					//menetapkan nilai terkecil menjadi nilai minimum pada variabel min
	  }
        //menempatkan urutan angka yang tepat dengan menukar index pertama dengan nilai yang paling kecil (minimum)
        tukar (array[index_pertama], array[min]);
   }
}


//Program menampilakan hasil urutan selection sort
void Hasil (int *array, int jumlah)
{
   for (int i = 0; i<jumlah; i++)
      cout << "[" << array[i] << "]" " ";
   cout << endl;
}


int main() {
	//inisialisasi variabel panjang elemen array
   int jumlah;
  //input nilai panjang elemen pada array
   cout << "Masukkan jumlah elemen : ";   cin >> jumlah;
   
   
   //inisialisasi variabel array
   int array[jumlah]; 
    //input angka acak/random pada tiap elemen array          
   cout << "Masukkan angka :" << endl;
   for (int i = 0; i<jumlah; i++)
   {
      cin >> array[i];
   }
   system("cls");
   
   
   //Menampilkan inputan angka acak di dalam array
   cout << "Array sebelum di Sorting\t: ";
   Hasil (array, jumlah);
   
   //Program sorting menggunakan selection sort
   selectionSort(array, jumlah);
   
   //Menampilkan angka yang telah diurutkan / sorting
   cout << "Hasil array setelah di Sorting\t: ";
   Hasil (array, jumlah);
}
