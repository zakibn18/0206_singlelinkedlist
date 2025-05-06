#include <iostream>
#include <string.h>
using namespace std;

class node
{
  public:
    int noMhs;
    node *next;
};

class linkedList
{
  node *START;

  public:
    linkedList()
    {
      START = NULL;
    }

    void addNode()
    {
      int nim;
      cout << "\nMasukkan Nomor Mahasiswa : ";
      cin >> nim;

      node *nodeBaru = new node;
      nodeBaru->noMhs = nim;

      if (START == NULL || nim <= START-> noMhs)
      {
        if ((START != NULL) && (nim == START->noMhs))
        {
          cout << "\nDuplikasi noMhs tidak dijalankan\n";
          return;
        }
      }
    }
};

int main()
{
  
}