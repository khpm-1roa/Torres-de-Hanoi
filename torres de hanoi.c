void main() {
  
        int n = 13;
        Hanoi(n,1,2,3);  //1:origen  2:auxiliar 3:destino
  
}


void Hanoi(int n, int origen,  int auxiliar, int destino){
  if(n==1)
  print('mover disco de $origen a $destino');
  else{
     Hanoi(n-1, origen, destino, auxiliar);
     print('mover disco de  $origen a  $destino');
     Hanoi(n-1, auxiliar, origen, destino);
   }
}
