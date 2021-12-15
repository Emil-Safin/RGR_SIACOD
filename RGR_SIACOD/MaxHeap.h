#pragma once
#ifndef MAXHEAP_H
#define MAXHEAP_H

#include <iostream>
#include <vector>

void swap(int* a, int* b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
void heapify(std::vector<int>& hT, int i)
{
    int size = hT.size();
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < size  && hT[l] > hT[largest])
        largest = l;
    if (r < size  && hT[r] > hT[largest])
        largest = r;

    if (largest != i)
    {
        swap(&hT[i], &hT[largest]);
        heapify(hT, largest);
    }
}
void insert(std::vector<int>& hT, int newNum)
{
    int size = hT.size();
    if (size == 0)
    {
        hT.push_back(newNum);
    }
    else
    {
        hT.push_back(newNum);
        for (int i = size / 2 ; i >= 0; i--)
        {
            heapify(hT, i);
        }
    }
}
void deleteNode(std::vector<int>& hT, int num)
{
    int size = hT.size();
    int i;
    for (i = 0; i < size; i++)
    {
        if (num == hT[i])
            break;
    }
    swap(&hT[i], &hT[size-1]);
    hT.pop_back();
    for (int i = size/ 2; i >= 0; i--)
    {
        heapify(hT, i);
    }
}

bool search(std::vector<int>& hT, int num){
    int size = hT.size();
    for (int i = 0; i < size; i++)
    {
        if (num == hT[i]) 
            return 1;        
    }
    return 0;
}
//void printArray(std::vector<int>& hT)
//{
//    int c = 1;
//    for (int i = 0; i < hT.size(); ++i) {
//        std::cout << hT[i] << " ";
//        if ((i + 1) % c == 0) {
//            std::cout << "\n";
//            c = c * 2;
//        }
//    }
//}

#endif
