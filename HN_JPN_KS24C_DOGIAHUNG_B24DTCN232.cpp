#include<stdio.h>
 main(){
 	int chonSo,n,kt,value,s,temp;
 	int arr[100];
 	while(1){
 		printf(" \nMENU\n");
 		printf(" 1.Nhap so phan tu va gia tri cho mang\n");
 		printf(" 2.In ra gia tri cac phan tu trong mang theo dang (arr[0] = 1, arr[1] = 5 ….\n");
 		printf(" 3.Ðem so luong cac so hoan hao co trong mang. Biet so hoan hao la so co tong cac uoc bang chinh no\n");
 		printf(" 4.Tim gia tri lon thu 2 trong mang, khong duoc sap xep mang\n");
 		printf(" 5.Them mot phan tu vao vi tri ngau nhien trong  mang, phan tu moi them vao mang va vi tri them vao phai do nguoi dung nhap vao	\n");
 		printf(" 6.Xoa phan tu tai mot vi tri cu the (nguoi dung nhap vi tri)\n");
 		printf(" 7.Sap xep mang theo thu tu tang dan (Insertion sort)\n");
 		printf(" 8.Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong (Binary search)\n");
 		printf(" 9.Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so chan dung truoc, so le dung sau\n");
 		printf(" 10.dao nguoc thu tu cua cac phan tu co trong mang\n");
 		printf("lua chon cua ban:");
 		scanf("%d",&chonSo);
		 switch(chonSo){
		 	case 1:
		 		printf("nhap so phan tu:");
		 		scanf("%d",&n);
		 		for(int i=0;i<n;i++){
		 			printf("gia tri %d:",i+1);
		 			scanf("%d",&arr[i]);
				 }
				 break;
			case 2:
				for(int i=0;i<n;i++){
		 			printf("arr[%d]=%d\n",i,arr[i]);
		 			
				 } 
				 break;
			case 3:
				
				break;
			case 4:
				break;
			case 5:
				printf("gia tri can them:");
				scanf("%d",&value);
				printf("nhap vi tri muon chen:");
				scanf("%d",&s);
				for(int i=n;i>s-1;i--){
					arr[i]=arr[i-1];
				}
				arr[s-1]=value;
				n++;
				for(int i=0;i<n;i++){
		 			printf("arr[%d]=%d\n",i,arr[i]);
		 			
				 } 
				break;
			case 6:
				temp=0;
				printf("nhap vi tri muon xoa:");
				scanf("%d",&s);
				for(int i=s-1; i<n-1;i++){
					
					arr[i]=arr[i+1];
					
				}
				n--;
				for(int i=0;i<n;i++){
		 			printf("arr[%d]=%d\n",i,arr[i]);
		 			
				 } 
				break;	
			case 7:
		 		break;
			case 8:	
			break;
			case 9:	
			break;
			case 10:
			for(int i=n-1;i>=0;i--){
		 			printf("arr[%d]=%d\n",i,arr[i]);
		 			
				 } 
				 break;
			
			break;
			case 11:  
			 printf("thoat");
			 break; 	
			default:
				printf("nhap lai:\n");
				break;
					 
		 }  
		 
	 }
 }