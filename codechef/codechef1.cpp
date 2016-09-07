#include<bits/stdc++.h>
using namespace std;

struct node{
	int a;
	int b;
	int w;
	node*next;
};
class raj{
public:
	node*head;


	raj(){
		head = new node;
		head=NULL;
	};
		



void sti(int x,int y,int z){
			node*ra;
				ra=new node;
				ra->a=x;
				ra->b=y;
				ra->w=z;

	if(head ==NULL){
		head=ra;
		ra->next=NULL;
	}
	else {
		node*temp,*prev;
		temp=head;


		while(temp!=NULL){

			if(temp->w<z)temp=temp->next;
			else {
				
				prev->next=ra;
				ra->next=temp;
				break;
			}
			prev=temp;
		}
		if(temp==NULL){
			prev->next=ra;
			ra->next=NULL;
		}
	}
};


};

int main(int argc, char const *argv[])
{
	raj r;

	int c,f,x,y,p;
	cin>>c>>f;
	for(int i=0;i<f;i++){
		cin>>x>>y>>p;
		r.sti(x,y,p);
	}		
	return 0;
}
