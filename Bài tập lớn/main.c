#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct Member
 {
 char uid[10]; // UID của RFID
 char roomNumber[10]; // Số Phòng
 char name[50]; // Tên
 char licensePlate[20]; 
} Member;

 void addResident(const char* file_name, Member member){
   
    FILE* file  = fopen(file_name,"a");
    if(file == NULL){
        printf("Cant open file\n");
        
    }
     fprintf(file, "%s,%s,%s,%s\n", member.uid, member.roomNumber, member.name, member.licensePlate);
    fclose(file);
}


void delete_Resident(const char* file_name, char id[10]){
    FILE* file  = fopen(file_name,"r+");
    Member member_Value;
    
    if(file == NULL){
        printf("Khong the mo file\n");
    }
    else{
        int check = 0;
        while ( fscanf(file,"%9[^,],%9[^,],%49[^,],%19[^,]", member_Value.uid, member_Value.roomNumber, member_Value.name, member_Value.licensePlate)==4)
        {
            if (strcmp(member_Value.uid,id)==0)
            {   
                check = 1;
                fputs("\0",file);
                printf("da xoa du lieu");
                break;
            }
            
        }
        if(check == 0){
            printf("Khong tim thay cu dan co id : %s\n",id);
        }
        
        fclose(file);
           }
           }
void searchByUID(const char* file_name, const char* uid) {
    Member member_Value;
    FILE* file = fopen(file_name, "r");
    
    if (file == NULL) {
        printf("Khong the mo file\n");
    }
    else {
        int check = 0;
        while (fscanf(file, "%9[^,],%9[^,],%49[^,],%19[^,]", member_Value.uid, member_Value.roomNumber, member_Value.name, member_Value.licensePlate) == 4) {
            if (strcmp(member_Value.uid, uid) == 0) {
                printf("Thong tin cua cu dan:\n");
                printf("UID: %s\n", member_Value.uid);
                printf("So phong: %s\n", member_Value.roomNumber);
                printf("Ten: %s\n", member_Value.name);
                printf("Bien so xe: %s\n", member_Value.licensePlate);
                check = 1;
                break;
            }
            fscanf(file, "%9[^,],%9[^,],%49[^,],%19[^,]", member_Value.uid, member_Value.roomNumber, member_Value.name, member_Value.licensePlate);
         
        
        }
        if (check == 0) {
            printf("Khong tim thay cu dan co UID: %s\n", uid);
        }
        
        fclose(file);
    }
}


void menu(){
    int choose = 0;
   
    char* file_name = "residents.csv";
     
    Member member;
    
   while (1)
   {
        printf("\nChuong trinh quan ly cu dan\n");
        printf("1. Them cu dan\n");
        printf("2. Xoa cu dan\n");
        printf("3. Tim kiem cu dan\n");
        printf("4. Cap nhat cu dan\n");
        printf("5. Dung\n");
        printf("Chon tuy chon: ");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            printf("Nhap ID: ");
            scanf("%s", &member.uid);
            printf("Nhap so phong: ");
            scanf(" %s", &member.roomNumber);
            printf("Nhap ten: ");
            scanf(" %s", &member.name);
            printf("Nhap bien so xe: ");
            scanf(" %s", &member.licensePlate);
            addResident(file_name,member);
            choose = 0;
            break;
        case 2:
            printf("UID cua cu dan: ");
            scanf("%s", &member.uid);
            delete_Resident(file_name,member.uid);
            choose = 0;
            break;
        case 3:
            printf("UID cua cu dan: ");
            scanf("%s", &member.uid);
            searchByUID(file_name,member.uid);
            choose = 0;
            break;
        case 5:
            break;
        }
         
   }    
    }


int main(){

  menu();
    
 return 0;

}