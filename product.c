#include <stdio.h>
#include "product.h"

int readProduct(product p){
	if(p.gram!=-1) printf("%s 무게:%d 가격:%d 별점:%d 별개수:%d\n",p.name,p.gram,p.price,p.star,p.num_star);
  	//else printf("없는 상품입니다.\n");	
}
void addProduct(product *s){
        printf("상품의 이름은?");
	scanf("%[^\n]",s->name);
        
	printf("상품의 무게는?");
	scanf("%d",&s->gram);

	printf("상품의 가격은?");
	scanf("%d",&s->price);

	printf("상품의 별점은(1~5)?");
	scanf("%d",&s->star);

        printf("별점의 개수는?");
	scanf("%d",&s->num_star);
}


void updateProduct(product *s){                                   
        printf("새 상품의 이름은?");                                     
        scanf("%s",s->name);                                          
        
        printf("새 상품의 무게는?");                                     
        scanf("%d",&s->gram);                                         
                                                                      
        printf("새 상품의 가격은?");
        scanf("%d",&s->price);

        printf("새 상품의 별점은?(1~5)");
        scanf("%d",&s->star);

        printf("새 상품별점의 개수는?");
        scanf("%d",&s->num_star);
}

void delProduct(product *p){

	p->gram=-1;   //그램의값이 -1일 때 그것을 삭제된 데이터라고 칭함 
	printf("삭제됨!\n");	

}
int readFile(product *p){
	FILE *fp;
    int i;

    fp=fopen("product.txt","rt");
    if(fp==NULL){
        printf("파일없음");
        return 0;
    }
    for(i=0;i<100;i++){

        fscanf(fp," %[^\n]",p[i].name);
        fscanf(fp,"%d %d %d %d",&p[i].gram,&p[i].price,&p[i].star,&p[i].num_star);
        if (feof(fp)) break;
    }

    fclose(fp);
    printf("=> 로딩성공!\n");

    return i;
}

void savedata(product *p,int count);//입력된 값들을 파일에 저장한다.
//CRUD     creat  read u(수정)

// CRUD만 수정하면 되는 것인지?











