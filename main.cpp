#include <iostream>
using namespace std;
int main() {
double VB, VL, AL;
cout << "informe qual foi seu salário bruto no mês: ";
cin >> VB;
if (VB<=1900){
  cout << "O valor líquido que você vai receber é de: "<< VB; 
}
if (VB>=1900 && VB <=2826.65) {
  VL = VB-VB*0.075;
  cout << "O valor líquido que você vai receber é de: "<< VL; 
}
if (VB>=2826.66 && VB <=3751.05) {
  VL = VB-VB*0.15;
  cout << "O valor líquido que você vai receber é de: "<< VL; 
}
if (VB>=3751.06 && VB <=4664.68) {
  VL = VB-VB*0.225;
  cout << "O valor líquido que você vai receber é de: "<< VL; 
}
if (VB>4664.69) {
  VL = VB-VB*0.275;
  cout << "O valor líquido que você vai receber é de: "<< VL; 
}
AL=VB-VL;
cout <<"\n\n" <<"Ou Seja: "<< "\n"<< "Recebendo o salário bruto de R$"<< VB << " você pagará R$" << AL<< " de imposto e ficará com o valor líquido em mãos de R$" << VL << "\n";
return 0;
}