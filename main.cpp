#include <iostream>
#include "HuffmanTree.h"
#include "Compress.h"
using namespace std;
int main() {
    cout<<"==== Huffman Compress & Extract ===="<<endl;
    cout<<"filename: ";
    char filename[SIZE];
    cin>>filename;
    Compress(filename);
    return 0;
}
