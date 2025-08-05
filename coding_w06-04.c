#include <stdio.h>
#include <math.h> 

int main(){
    double x=20.0; // กำหนดค่าเริ่มต้นให้กับตัวแปร x
    double a=10.0; // กำหนดค่าเริ่มต้นให้กับตัวแปร a      
    int y=2,z=3; // กำหนดค่าเริ่มต้นให้กับตัวแปร y และ z   
    double total=100.0; // กำหนดค่าเริ่มต้นให้กับตัวแปร total   
    double price=15.0,quantity=3.0,discount=5.0; // กำหนดค่าเริ่มต้นให้กับตัวแปร price, quantity และ discount 
    double rate=10.0; // กำหนดค่าเริ่มต้นให้กับตัวแปร rate
    double score=50.0; // กำหนดค่าเริ่มต้นให้กับตัวแปร score       
    int mistake=2; // กำหนดค่าเริ่มต้นให้กับตัวแปร mistake     
    double penalty=2.5; // กำหนดค่าเริ่มต้นให้กับตัวแปร penalty
    x-=4.0; // ลบค่า 4.0 ออกจาก x
    x*=6.5; // คูณ x ด้วย 6.5
    x=fmod(x,(y+z*a)); // หารเอาเศษของ x ด้วย (y + z * a)
    x/=(2.0*x); // หาร x ด้วย (2.0 * x) 
    total+=(price*quantity-discount); // คำนวณ total โดยนำ price คูณกับ quantity แล้วลบด้วย discount
    x*=(1+rate/100.0); // คูณ x ด้วย (1 + rate / 100.0)
    score-=(mistake*penalty); // ลบค่า (mistake * penalty) ออกจาก score

    printf("x=%.4f\n",x); // แสดงผลลัพธ์ของ x
    printf("total=%.2f\n", total); // แสดงผลลัพธ์ของ total
    printf("score=%.2f\n", score); // แสดงผลลัพธ์ของ score

    return 0;
}
