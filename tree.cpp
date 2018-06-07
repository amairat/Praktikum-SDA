#include<iostream>
#include<stdio.h>
struct node{
 char data;
 node *kiri;
 node *kanan;
};

node *akar=NULL;
addNode(node **akar, char isi) {
 if((*akar)==NULL){
 node *baru;
 baru= new node;
 baru->data = isi;
 baru->kiri = NULL;
 baru->kanan = NULL;
 (*akar)=baru;
 }
}

preOrder(node *akar) {
 if(akar !=NULL) {
 printf("%c ", akar->data);
 preOrder(akar->kiri);
 preOrder(akar->kanan);
 }
}

inOrder(node *akar) {
 if(akar !=NULL) {
 inOrder(akar->kiri);
 printf("%c ", akar->data);
 inOrder(akar->kanan);
 }
}

postOrder(node *akar) {
 if(akar !=NULL) {
 postOrder(akar->kiri);
 postOrder(akar->kanan);
 printf("%c ", akar->data);
 }
}

using namespace std;

main(){
char abjad;
cout << ("\n\n\tPosisi Awal Tree:\n\n");
cout << ("\t       H\n\t      / \\\n\t     I   A\n\t    /\n\t   L\n\t  / \\\n\t M   N\n\n");
addNode(&akar,abjad='H');
addNode(&akar->kiri,abjad='I');
addNode(&akar->kanan,abjad='A');
addNode(&akar->kanan->kiri,abjad='N');
addNode(&akar->kiri->kiri,abjad='L');
addNode(&akar->kiri->kiri->kiri,abjad='M');

cout << ("Tampilan PreOrder  : ");
 preOrder(akar);
cout << ("\nTampilan InOrder   : ");
 inOrder(akar);
cout << ("\nTampilan PostOrder : ");
 postOrder(akar);
}
