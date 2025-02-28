#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L
#include<unistd.h>
#include<iostream>
using namespace std;

int main(void) {
	#ifdef _POSIX_JOB_CONTROL
		cout<<"System supports BSD style of job control"<<endl;
	#else 
		cout<<"System does not support job control"<<endl;
	#endif
	
	#ifdef _POSIX_SAVED_IDS
		cout<<"System keeps track of saved set UID and GID"<<endl;
	#else 
		cout<<"System does not keep track of saved set UID and GID"<<endl;
	#endif
	
	#ifdef _POSIX_CHOWN_RESTRICTED
		cout<<"Users may change ownership of files owned by them"<<endl;
	#else 
		cout<<"Only superuser can change ownership of files"<<endl;
	#endif
	
	#ifdef _POSIX_NO_TRUNC
		cout<<"System supports path truncation"<<endl;
	#else 
		cout<<"System does not support path truncation"<<endl;
	#endif
	
	#ifdef _POSIX_VDISABLE
		cout<<"System supports disabling characters"<<endl;
	#else 
		cout<<"System does not support disabling characters"<<endl;
	#endif
	return 0;
}
