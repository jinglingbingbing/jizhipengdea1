// network.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include "del.h"
#include "read.h"
#include "dijkstra.h"
#include <iostream>
#include <fstream>
#define MAX 999

using std::cin;
using std::cout;
using std::endl;


int main()
{
	int node = 9;
	int **a = read(node);
	dijkstra(node, a);

	for (int i = 0; i < node; i++) {//释放分配给a的空间
	delete[] a[i];
	}
	delete[] a;
}

