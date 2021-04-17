#include <stdio.h>

#include "manager.h"
int main(){
#ifdef DEBUG
	printf("This is debugging mode\n");
#endif  
	
        product p[100];
        int index=readFile(p);
        int count=index;
	int menu,num;
	char ch;
	while(1){

		printf("1.add");
		printf("\n2.update");
		printf("\n3.read");
		printf("\n4.delete");
		printf("\n5.save file");
		printf("\n6.search");
		printf("\n0.종료");
		printf("\n원하는 메뉴는?");
		scanf("%d",&menu);
		scanf("%c",&ch);
		if(menu==0) break;
		if(menu==1){
			addProduct(&p[index]);
			index++;
			count++;
		}
		else if(menu==2){
			if (count<0) {
				printf("저장된 값이 없습니다.");
				continue;
			}
			readList(p,index);
			printf("몇번을 수정하실 건가요?");
			scanf("%d",&num);
			updateProduct(&p[num-1]);
		}
		else if(menu==3){
			if (count<0) {
				printf("저장된 값이 없습니다.");
				continue;
			}
			readList(p,index);
		}
		else if(menu==4){
			if (count<0) {
				printf("저장된 값이 없습니다.");
				continue;
			}
			readList(p,index);
			printf("몇번을 삭제하실 건가요?");
			scanf("%d",&num);
			delProduct(&p[num-1]);
			count--;
		
		}
		else if(menu==5){
			savedata(p,index);
		}
		else if(menu==6){
			int cho;
			printf("무엇으로 검색하실 건가요?(1:이름 2:별점 3:가격)");
			scanf("%d",&cho);
			if(cho==1)
				searchname(p,index);
			else if(cho==2)
				searchstar(p,index);
			else 
				searchprice(p,index);
		}		
		printf("\n");

 /*       addProduct(p);//더하고
        index++; 
        count++;

	printf("\n");	

        readList(p,index);  //읽고 
        updateProduct(&p[0]); //수정하고 
        readList(p,index); //읽고 
        delProduct(p); //지우고
        count--;  
        readList(p,index);//다시 읽고 
        addProduct(&p[index]);  
        count++; 
        index++;

	addProduct(&p[index]);
        count++;
        index++;

	addProduct(&p[index]);
        count++;
        index++;


	 readList(p,index);*/


	}
}
//질문이 뭐지 crud 함수만 확장하면 되는 것인지.  받아드리는 값 업이 저번처럼 main은 확인용이기만 하면 되는 건지   처음 입력을 받을때 엔터를 두번ㄴ쳐야 하는 이우
