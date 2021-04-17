#include <stdio.h>

typedef struct{
    char name[100];//상품의 이름 
    int gram;//무게
    int price;//상품의 가격
    int star; //별점
    int num_star;//별점의 총 갯수

}product;



int readFile(product *p);// 파일을 읽어온다. 
void savedata(product *p,int count);//입력된 값들을 파일에 저장한다. 
int readProduct(product p);// 하나의 제품을 출력
void searchname(product *p,int count);// 제품이름 검색 
int listProduct(product *p,int count); // 전체 등록된 제품 리스트 출력
void delProduct(product *p);//해당 번호의 상품을 삭제한다. 
void addProduct(product *p);//상품을 추가한다.
void updateProduct(product *p);//상품을 업데이트 한다.

void searchstar(product *p,int count);
void searchprice(product *p,int count); 
