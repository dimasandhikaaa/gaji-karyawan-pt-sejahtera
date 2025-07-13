#include <iostream>
#include <conio.h>>
#include <string>

using namespace std;


int main()
{
    string nama[25];
    char back;
    int jumlah,jam_kerja[10], jam_lembur[10],golongan[10];
    int gaji_pokok[10], gaji_lembur[10],tunjangan_karyawan[10], pajak_pokok[10],pajak_lembur[10], total_pajak[10], gaji_bersih[10];

    cout<< "====================== DAFTAR TINGKATAN PEGAWAI ======================"<<endl;
    cout<< "=============== PT SEJAHTERA ABADI SELAMANYA =================="<<endl;
    cout<< "======================================================================"<<endl;
    cout<<endl;
    cout<< "----------------------------------------------------------------------"<<endl;
    cout<< "|             [1] GOLONGAN I   ====> MANAJER                           |"<<endl;
    cout<< "|             [2] GOLONGAN II  ====> KEPADA DIVISI                     |"<<endl;
    cout<< "|             [3] GOLONGAN III ====> ADMINISTRASI                      |"<<endl;
    cout<< "|             [4] GOLONGAN IV  ====> PEGAWAI TETAP                     |"<<endl;
    cout<< "|             [5] GOLONGAN V   ====> PEGAWAI MAGANG                    |"<<endl;
    cout<< "----------------------------------------------------------------------"<<endl;
    cout<<endl;


do{
    cout<< "Masukan Jumlah Karyawan  : ";
    cin>>jumlah;
    cout<< endl;


    for (int i=1; i<=jumlah;i++){
        cout<< "KARYAWAN KE-"<<i<<endl;
        cout<< "Masukan Nama   : ";
        cin>>nama[i];
        cout<< "Masukan Golongan : ";cin>>golongan[i];
        cout<< "Masukan Jumlah Jam Kerja : ";cin>>jam_kerja[i];

        switch(golongan[i]){
        case 1 :
            gaji_pokok[i]=9500000;
            tunjangan_karyawan[i]=1000000;
            break;
        case 2 :
            gaji_pokok[i]=5000000;
            tunjangan_karyawan[i]=500000;
            break;
        case 3 :
            gaji_pokok[i]=3500000;
            tunjangan_karyawan[i]=200000;
            break;
        case 4 :
            gaji_pokok[i]=2300000;
            tunjangan_karyawan[i]=150000;
            break;
        case 5 :
            gaji_pokok[i]=1500000;
            tunjangan_karyawan[i]=100000;
            break;
        default:
            gaji_pokok[i]=0;
            tunjangan_karyawan[i]=0;
        }
        if(jam_kerja[i]>173){
            jam_lembur[i]=jam_kerja[i]-173;
        }else {
        jam_lembur[i]=0;
        }

        gaji_lembur[i]=jam_lembur[i]*10000;
        pajak_pokok[i]=0.05*gaji_pokok[i];
        pajak_lembur[i]=0.05*gaji_lembur[i];
        total_pajak[i]=pajak_lembur[i]+pajak_pokok[i];
        gaji_bersih[i]=((gaji_pokok[i]+tunjangan_karyawan[i]+gaji_lembur[i])-total_pajak[i]);

        cout <<endl;
    }
        for(int i=1; i<=jumlah; i++){
    cout<< "----------------------------------------------------------------------"<<endl;
    cout<< "|                       KARYAWAN KE-"<<i<<"                               |"<<endl;
    cout<< "----------------------------------------------------------------------"<<endl<<endl;

    cout<< "\tNama                 : "<<nama[i]<<endl;
    cout<< "\tGaji Pokok           : "<<gaji_pokok[i]<<endl;
    cout<< "\tGaji Lembur          : "<<gaji_lembur[i]<<endl;
    cout<< "\tPajak pokok          : "<<pajak_pokok[i]<<endl;
    cout<< "\tPajak Lembur         : "<<pajak_lembur[i]<<endl;
    cout<< "\tTotal Pajak          : "<<total_pajak[i]<<endl;
    cout<< "\tGaji Bersih          : "<<gaji_bersih[i]<<endl<<endl;
    cout<< "########################################################################"<<endl;
        }
        ulang:
    cout<< "                       [Y = ya / T = tidak                             "<<endl;
    cout<< "           Apakah Anda Ingin Mengecek Ulang Gaji Kembali ? [Y/T]       = ";cin>>back;
}while (back=='Y'||back=='y');
        cout<<endl;
    cout<< "----------------------------- TERIMA KASIH -----------------------------"<<endl;
    cout<< "                       SEMOGA HARIMU MENYENANGKAN                  "<<endl;
    cout<< "========================================================================"<<endl;



    getch();
}





