#define ENABLE_SZN_ALL
#include<SZN_DEF.H>
#include <stdio.h>
#include <stdlib.h>
#define MAX 1024
using namespace std;
void main_();
void R(const string res, const string res_);
const int St_len = 1024;
int main() {
	main_();
	system("pause");
}
void main_() {
	KUR::kurzer ku;
	cout << "ʹ��˵��:\n[1]:����JSONOUT.js\n[2]:����OutJsToJson();\n[3]:";
	cout << "��plugins.json������...\\js�ļ�����.\n";
	string s = ku.getstr("\n����index.html�ļ�����Ŀ¼��ַ:");
	auto s_ = s + "\\js\\plugins.json";
	R(s_, s);
}
void R(const string res, const string res_) {
	cout << "��ȡ��...\n";
	auto str = KUR_FILE::KFILE::FileReadAsString(res);
	string sub1 = "START:";
	string sub2 = ":FINAL";
	KUR::Kstring Ks = str.c_str();
	auto val = KUR::Stack<int>::SubLineAsString(Ks, sub1, sub2);
	cout << "���!\n���ڸ����ļ�...";
	string s;
	string address = res_ + "\\js\\plugins\\";
	while (!val->isempty()) {
		s << *val;
		KUR_FILE::KFILE::FileCpoy(address + s + ".js", "out\\" + s + ".js");
	}
	cout << "\n���!!\n�ļ��ѱ��浽" << "exe����Ŀ¼�µ�out�ļ�����.\n";
};