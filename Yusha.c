/*day : 20150602,3,4
 *
 *
 *Author(Story) : Yusuke Kato
 *
 *programmer    : Satosi Shimada
 */
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include "file.h"
 
int Yusha();

int Yusha()
{
	int c;
	int a;
	int b;
	
	//PROLOGUE
	
	printf("\n���N�O�ɕ������������ɂ���āA���E�͖łт悤�Ƃ��Ă����B\n"
		   "�����Ŋe���́A���������̂��߂ɌR���������킹�����A\n"
		   "�����R�̑O�ł͖��͂ł������B\n"
		   "���Ƃ����Ȃ��Ă͂ƍl���������́h�`���̗E�ҁh��T���o���A\n"
		   "���̎҂ɖ���������������Ƃɂ����B\n\n\n\n");
		   
		   
	//1 - 1 
	
	system("cls");
	printf("\n%s �͖ڊo�߂��B����������Ă��鑾�z�̌����܂Ԃ����B\n"
		   "�z�c����o��ƒN�����������ĂԐ�������B\n\n\n", p.name);
		   
	printf("�N���Ă�ł��邩[�I��]\n");
	
	printf("1: ��\n"
	       "2: ��\n"
	       "3: ���L�̃~�P\n"
	       "4: �ƂȂ�̎R�c����\n");
	       
	scanf("%d",&a);
	
	if (a == 1) {
		system("cls");
		printf("\n�Ă�ł���͕̂�̂悤���B\n"
		       "��u�����͂�ł��Ă邩��A�����H�ׂĂ�v\n"
		       "�e�[�u���̏�ɂ͂����������ȃp���ƃX�[�v�A�T���_������B\n"
		       "���������܂��A�Ƃ��������X�[�v�����ɉ^�ԁB\n"
		       "����H�ׂ��u�ԁA���ɂ��̒��𑖂�B\n"
		       "�I�I�I�I�I �ł��I�I�I�I�I\n");
	} else if (a == 2) {
		system("cls");
		printf("\n�Ă�ł���͕̂��̂悤���B\n"
		       "���u�܂��������`���Ă���Ȃ����v\n"
		       "�܂������邽�߂ɉƂ̗��Ɍ��������B\n"
		       "�����̂悤�ɕ����g���Ă܂�������B\n"
		       "�������A�܂������낤�Ƃ����u�ԁA�܂����͂�����ԁI�I\n"
		       "�I�I�I�I�I �j�Ђ��ɂ� �I�I�I�I�I\n");
	} else if (a == 3) {
		system("cls");
		printf("\n�Ă�ł���͈̂��L�̃~�P�̂悤���B\n"
		       "�~�P�u�E�E�E�E�E�E�ɂ�[�v\n"
		       "�E�E�E�E�E�E�Ȃ��ށE�E�E�E�E\n");
	} else if (a == 4) {
		system("cls");
		printf("\n�Ă�ł���̂͂ƂȂ�̎R�c����̂悤���B\n"
			   "%s�u����ɂ��́I�I�R�c����A�ǂ�������ł����B\n"
			   " �R�c����E�E�E�H �ق����܂܂ŁA������������ł���?�v\n"
			   "�R�c����u�E�E�E�E�E�E�t�t�t�E�E�E�t�n�n�n�n�n�n�n�n�n�n�n�b�I�I�I�v\n"
			   "%s �u�Ȃ�ł����I�H �ǂ�������ł����I�H�I�H�v\n"
			   "�R�c����u�����������I�I�I�I�I�I�I�I�v\n"
			   "%s �u�ȁA�Ȃ񂾂��āI�H�I�H�v\n"
			   "�R�c����u���E�͂�����Ă������I�I�I�I�I�v\n"
			   "%s �u�����͂����Ȃ����I�I�I�I�I�v\n\n\n\n"
			   "�I�I�I�R�c����Ƃ̐퓬�ɓ˓��I�I�I\n",p.name ,p.name, p.name, p.name);
			   
	//2 - 2
	
	printf("�^�P�I�u���[���I�I �N���Ă邩�[�[���I�I�I�v\n"
	       "�e�F�̃^�P�I�̌ĂԐ�������B����Ȃɒ������ɗ���Ȃ�Ē������B\n"
	       "�^�P�I�u�m���Ă邩�I�I�I������|����̂́h�`���̗E�ҁh�����Ȃ񂾂��Ă�I�I�I\n"
	       "        �h�`���̗E�ҁh���āA%s �̂��Ƃ���ȁI�H\n");
	       
	printf("���Ȃ��̕Ԏ��́H [�I��]\n\n\n");
	
	printf("1,�������A��������B\n"
	       "2,����Ȃ킯�Ȃ��B\n"
	       "3,�h�`���̗E�ҁh�A����̓^�P�I�A���O�̂��Ƃ��I�I�I\n");
	       
	scanf("%d",&b);
	
	if (b == 1) {
		
	} else if (b == 2) {
		
	} else {
	}
	
	
	player_write(p);
	
	printf("Please Enter key\n");
	
	c = fgetc(stdin);	   
	
	return;
 }