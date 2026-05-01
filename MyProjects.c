#include <stdio.h>
#include <string.h>

// Print sum of series square of terms from 1 to n

// int main()
// {
//     int n, sum = 0;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         sum += i * i;
//     }

//     printf("The sum of squares from 1 to %d is: %d\n", n, sum);
// return 0;
// }










// print sum of series of reciprocal of from 1 to n

// int main()
// {
//     int n;
//     double sum = 0.0;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         sum += 1.0 / (i);
//     }

//     printf("The sum of reciprocal of squares from 1 to %d is: %lf\n", n, sum);
//     return 0;
// }







// Find frequency of a given number in an array

// int main()
// {
//     int n, num, count = 0;
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter the number to find its frequency: ");
//     scanf("%d", &num);

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == num)
//         {
//             count++;
//         }
//     }

//     printf("The frequency of %d in the array is: %d\n", num, count);
//     return 0;
// }











// find sum of all elements in an array

// int main()
// {
//     int sum =0, n;

//     printf("Enter the nos of terms to find sum in an array");
//     scanf("%d", &n);
//     int array[n];

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the %dth term", i);
//         scanf("%d", &array[i]);
//     }

//     for (int j = 0; j < n; j++)
//     {
//         sum = sum + array[j];
//     }

//     printf("The sum of all elements are %d",sum);
//     return 0;
// }














// Find length of the string and print the string in reverse order

// int main()
// {
//     int len;
//     char   string[105] ;

//     printf("Enter the string you want to enter and reverse the order :");
//     fgets(string , 104 , stdin);

//     len = strlen(string);
//     char temp[len + 1];
    
//     for (int i = len-1 , j=0; i >= 0;i-- , j++)
//     {
//         temp[j] = string[i];    
//     }

//     temp[len] = '\0';
//     printf("The reversed string of %s is %s",string,temp);
//     return 0;
    
// }





// Find MIN and MAX elements in a numeric array

// int main()
// {
//     int n,MIN,MAX;
//     printf("Enter the no. of elements you want to put in the array");
//     scanf("%d" , &n);
//     int arr[n];

//     printf("Enter %d elements \n",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     MIN=MAX=arr[0];

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > MAX)
//         {
//             MAX = arr[i];
//         }
//         if (arr[i] < MIN)
//         {
//             MIN = arr[i];
//         } 
//     }
//     printf("MAX = %d \n MIN = %d",MAX,MIN);
//     return 0;
// }



















// Find Second largest element in the numeric array




// int main()
// {
//     int n,M2,MAX;
//     printf("Enter the no. of elements you want to put in the array");
//     scanf("%d" , &n);
//     int arr[n];

//     printf("Enter %d elements \n",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     MAX=M2=arr[0];

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > MAX)
//         {
//             M2 = MAX;
//             MAX = arr[i];
//         }
//     }
//     printf("2nd MAX = %d",M2);
//     return 0;
// }





















// Insert an element in an array at desired location (Print o/p)


//int main()
// {
//     int n,p,v;
//     printf("Enter the no. of elements you want to put in the array :");
//     scanf("%d" , &n);
//     int arr[n+1];

//     printf("Enter %d elements \n",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     printf("Enter the location you want to enter element in :");
//     scanf("%d",&p);
//     printf("Enter the element :");
//     scanf("%d",&v);

//     printf("The new array is : ");
//     for (int i = n; i > p; i--)
//     {
//         arr[i] = arr[i-1];
//     }
//     arr[p] = v;

//     for (int i = 0; i <= n; i++)
//     {
//         printf("%d ,",arr[i]);
//     }
//     return 0;
// }















// Delete an element from desired location in an array


// int main()
// {
//     int n,a;
//     printf("Enter the no. of elements you want to put in the array :");
//     scanf("%d" , &n);
//     int arr[n];

//     printf("Enter %d elements \n",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     printf("Enter the position of element you want to delete :");
//     scanf("%d",&a);

//     for (int i = a; i < n-1; i++)
//     {
//         arr[i] = arr[i+1];
//     }

//     printf("The new array is: \n");
//     for (int i = 0; i < n-1; i++)
//     {
//         printf("%d ,",arr[i]);
//     }
//     return 0;
// }













// Sort an array in ascending order



// int main() {
//     int arr[100];
//     int n;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     printf("Enter elements: ");
//     for(int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for(int i = 0; i < n - 1; i++) 
//     {
//         for(int j = 0; j < n - i - 1; j++) 
//         {
//             if(arr[j] > arr[j + 1]) 
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     printf("Sorted array: ");
//     for(int i = 0; i < n; i++) 
//     {
//         printf("%d ,", arr[i]);
//     }
//     return 0;
// }









// combine two sorted arrays



// int main()
// {
    // int n;
    // printf("Enter no. of elements in both arrays :");
    // scanf("%d",&n);
    // int a[n] , b[n] , c[2*n];

    // printf("Enter elements of first array:\n");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d",&a[i]);
    // }
//     printf("Enter elements of second array:\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&b[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         c[i] = a[i];
//     }
//     for (int i = n; i < 2*n; i++)
//     {
//         c[i] = b[i - n];
//     }

//     printf("The new array is :");
//     for (int i = 0; i < 2*n; i++)
//     {
//         printf("%d ,",c[i]);
//     }
    
//     return 0;
// }















// print sum of all diagonal elements of an N*N array

// int main()
// {
//     int n,sum = 0;
//     printf("Enter no. of rows and columns arrays :");
//     scanf("%d",&n);
//     int a[n][n];

//     printf("Enter rows wise elements array:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("row = %d \n",i+1);
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i == j)
//             {
//                 sum = sum + a[i][j];
//             }
            
//         }
        
//     }
//     printf("Sum of diagonal elements = %d",sum);
//     return 0;
// }















// Find MAX and MIN in the two nos in a given data group


// #include <stdio.h>

// int Max(int a, int b);
// int Min(int a, int b);

// int main()
// {
//     int num1, num2;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     if (num1 == num2) {
//         printf("Both numbers are equal.\n");
//     } else {
//         printf("MAX: %d\nMIN : %d", Max(num1, num2) , Min( num1,num2));
//     }

//     return 0;
// }

// int Max(int a, int b) {
//     if (a > b)
//         return a;
//     else
//         return b;
// }

// int Min(int a, int b) {
//     if (a < b)
//         return a;
//     else
//         return b;
// }











// Check a no. is prime

// int prime(int n , int p);

// int main()
// {
//     int n,p=0;
//     printf("Enter the no. :");
//     scanf("%d",&n);
//     p = prime(n,p);

//     if(p==1)
//         printf("Prime");
//     else
//         printf("Not prime");
//     return 0;
// }

// int prime(int n , int p)
// {
//     int c;
//     for (int i = 1; i < n/2; i++)
//     {
//         if(n%i==0)
//             c++;
//     }
//     if (c < 2)
//         p = 1;
//     else
//         p=0;
//     return p;
// }










// Check if a no. is armstrong number

// #include <math.h>

// int isArmstrong(int num) {
//     int temp = num , sum =0 , digits =0;

//     int countTemp = num;
//     while (countTemp != 0) {
//         countTemp /= 10;
//         digits++;
//     }

//     while (temp != 0) {
//         int remainder = temp % 10;
//         sum += (pow(remainder, digits));
//         temp /= 10;
//     }
//     return (sum == num);
// }

// int main() {
//     int n;
//     printf("Enter an integer: ");
//     scanf("%d", &n);

//     if (isArmstrong(n)) {
//         printf("%d is an Armstrong number.\n", n);
//     } else {
//         printf("%d is not an Armstrong number.\n", n);
//     }

//     return 0;
// }










// check if a no. is perfect number

// int per(int a);

// int main(){
//     int n , isP=0;
//     printf("Enter the number  ");
//     scanf("%d",&n);
//     isP = per(n);

//     if(isP == 1)
//         printf("Perfect no.");
//     else
//         printf("Not a perfect no.");
//     return 0;
// }

// int per(int a){
//     int t=0, sum=0 , b=0;
//     for (int i = 1; i <= a/2; i++)
//     {
//         if( a%i == 0){
//             t = i;
//             sum = sum + t;
//         }
//     }
//     if(sum == a){
//         b = 1;
//     }
//     return b;
// }












// Find factorial of a number

// void Fac(int a);

// int main(){
//     int n;
//     printf("Enter the number ");
//     scanf("%d",&n);

//     Fac(n);
// }

// void Fac(int a){
//     int f=1;
//     printf("The factorial of the given no. is :");
//     for (int i = a; i != 1; i--)
//     {
//         f = f*i;
//     } 
//     printf("%d",f);
// }










// reverse a string


// int main()
// {
//     char str[50];
//     fgets(str , 50 , stdin);
//     int n = strlen(str);
//     char temp[n];
//     for (int i = 0; i < n; i++)
//     {
//         temp[i] = str[n-i-1];
//     }
//     puts(temp);
//     return 0;
// }








// Find a substring in a string

// int main()
// {
//     char str[100];
//     char sub[50];

//     printf("Enter the main string :");
//     fgets(str , 100 , stdin);
//     printf("Enter the sub string to find :");
//     fgets(sub , 50 , stdin);

//     if (strstr(str , sub))
//     {
//         printf("The substring is found");
//     } else {
//         printf("Not found");
//     }
//     return 0;
// }


























// insert a substring in the string]




int main()
{
    char str[100] , temp[150];
    char sub[50];
    int n  , i , j , k;

    printf("Enter the main string :");
    fgets(str , 100 , stdin);
    printf("Enter the sub string :");
    fgets(sub , 50 , stdin);
    printf("Enter the position you want to insert the substring into :");
    scanf("%d",&n);
    int len = strlen(temp) , lensub = strlen(sub);
    str[strcspn (str , "\n")] = 0;
    sub[strcspn (sub , "\n")] = 0;

    for ( i = 0; i < n  ; i++)
    {
        temp[i] = str[i];
    }

    for ( j = 0;  sub[j] != '\0'; j++)
    {
        temp[i+j] = sub[j];
    }
    for ( k = n;  str[k] != '\0'; k++)
    {
        temp[j+k] = str[k];
    }
    temp[j+k] = '\0';

    printf("The resulting string : %s",temp);
    return 0;
}
