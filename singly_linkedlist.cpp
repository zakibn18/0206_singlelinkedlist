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
        nodeBaru->next = START;
        START = nodeBaru;
        return;
      }

      node *previous = START;
      node *current = START;

      while ((current != NULL) && (nim >= current->noMhs))
      {
        if (nim == current->noMhs){
        cout << "\nDuplikasi noMhs tidak dijalankan\n";
        return;
        }
        previous = current;
        current = current->next;
      }
      nodeBaru->next = current;
      previous->next = nodeBaru;
    }

    bool listEmpty()
    {
      return (START == NULL);
    }
};

int main()
{
  
}