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
//ɾ��ָ������ϵ��
void delcontact(struct contact* con);
//����ָ������ϵ��
void searchcontact(const struct contact* con);
//�޸�ָ������ϵ��
void modifycontact(struct contact* con);
//������������
void sortcontact(struct contact* con);