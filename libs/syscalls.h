#define GETIC 57 //stores adress of the next instuction in acc
#define SETIC 58 //sets instruction counter value from acc
#define NEWTHREAD 59 //sets new thread with instuction counter(adress of the start place of the thread) from acc
#define WAIT 60 // locks the thread untill invoke is called
#define INVOKE 61 //invokes thread from pointer in acc register
#define INVOKE_ALL 62 //ivokes all threads 