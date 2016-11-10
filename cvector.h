

#ifdef __cplusplus
					/*if this is include in C++ i.e compiled as C++ then 
					  name mangling will be according C.
					  Otherwise it is C naturally if comipled as C.
					  */
extern "C"
			/*c++ mangales the names and its mangling is rule different from C.
			  So to make the C compiler understand the C++ comiled code use extern "C"; 
			  */
{
#endif

	typedef struct cvector_ * cvector;  

	cvector create_vector(int size);

	void push_back(cvector v, int data);

	int size(cvector v);

	void print(cvector v);

#ifdef __cplusplus
}
#endif

