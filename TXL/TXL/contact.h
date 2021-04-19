#define _CRT_SECURE_NO_WARNINGS
#define max_name     20
#define max_sex      5
#define max_tele     12
#define max_address  30
#define MAX          1000  
enum optin
{
	exit,
	add,
	del,
	search,
	modify,
	show,
	sort
};
struct peoinfo
{
	char name[max_name];
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_address];
	int age;
};
struct contact
{
	struct peoinfo arr[MAX];
	int  size ;
};
void Initcontact(struct contact* con);
void addcontat(struct contact* con);
void showcontact(const struct contact* con);
//删除指定的联系人
void delcontact(struct contact* con);
//查找指定的联系人
void searchcontact(const struct contact* con);
//修改指定的联系人
void modifycontact(struct contact* con);
//按照年龄排名
void sortcontact(struct contact* con);