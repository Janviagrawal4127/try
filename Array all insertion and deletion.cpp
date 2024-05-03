#include<stdio.h> 

void Traverse();
void Insertion_at_begin();
void Insertion_at_end();
void Insertion_at_loc();
void Deletion_at_begin();
void Deletion_at_end();
void Deletion_at_loc();

int lb = 0;
int ub = 5;
int choice;
int arr[5];


void array()
 {
    printf("The array elements are: \n");
    for (int i = 0; i < 100; i++) 
	{
      printf("%d\n", arr[i]);
    }
}

int main() 
{
    do 
	{
    	array();
        printf("Menu:\n");
        printf("1:Traversing in array\n");
        printf("2:Insertion at the beginning\n");
        printf("3:Insertion at the end\n");
        printf("4:Insertion at a particular location\n");
        printf("5:Deletion at the beginning\n");
        printf("6:Deletion at the end\n");
        printf("7:Deletion at a particular location\n");
        printf("8:EXIT\n");

        printf("Enter your choice (1-8): ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                Traverse();
                break;
            case 2:
                Insertion_at_begin();
                break;
            case 3:
                Insertion_at_end();
                break;
            case 4:
                Insertion_at_loc();
                break;
            case 5:
                Deletion_at_begin();
                break;
            case 6:
                Deletion_at_end();
                break;
            case 7:
                Deletion_at_loc();
                break;
            case 8:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 8.\n");
        }
    } while (choice != 8);

    return 0;
}

void Traverse()
 {
    int temp;
    if (ub < lb)
	{
        printf("Array is empty\n");
    }
	 else 
	{
        temp = lb;
        while (temp <= ub) 
		{
            printf("%d\n", arr[temp]);
            temp = temp + 1;
        }
    }
    printf("\n");
}

void Insertion_at_begin() 
{
    int value;
    int temp;
    if (ub == 5 - 1)
	{
        printf("Array is full\n");
    } 
	else if (ub < 0) 
	{
        ub = 0;
        
        printf("Enter the value to be inserted: ");
        scanf("%d", &value);
        arr[ub] = value;
    } 
	else 
	{
        temp = ub;
        while (temp >= lb) 
		{
            arr[temp + 1] = arr[temp];
            temp = temp - 1;
        }
        printf("Enter the value to be inserted: ");
        scanf("%d", &value);
        arr[lb] = value;
    }
    ub++;
    printf("The Array elements are: \n");
    for (int i = lb; i <= ub; i++) 
	{
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

void Insertion_at_end()
{
	int value;
	if(ub==5-1)
	{
	  printf("Array is full");	
	}
    else if(ub<0)
    {
    	lb=0;
    	ub=0;
    	printf("Enter the value to be inserted: ");
        scanf("%d", &value);
    	arr[ub]=value;
	}
	else
	{
		ub++;
		printf("Enter the value to be inserted: ");
        scanf("%d", &value);
		arr[ub]=value;
	}
    printf("The Array elements are: \n");
    for (int i = lb; i <= ub; i++) 
	{
        printf("%d\n", arr[i]);
    }
	printf("\n");
}

void Insertion_at_loc() 
{
	int loc;
	int value;
	int temp;
	printf("enter the location where to add array:");
	scanf("%d",&loc);
	printf("Enter the value to be inserted: ");
    scanf("%d",&value);	
	
   if(loc<0||ub==5-1||loc>ub+1)
   {
   	  printf("Invalid location or array is full\n");
   }
	else
	{
        for (int i = ub; i >= loc; i--)   
        {
            arr[i + 1] = arr[i];
        }
        arr[loc] = value;
        ub++;

        printf("Array elements are:\n");
        for (int i = lb; i <= ub; i++) 
        {
            printf("%d\n", arr[i]);
        }
    }
}

void Deletion_at_begin() 
{
  if(ub<lb)
  {
  	printf("Array is empty\n");
  }
  else
  {
    lb++;
  }
    printf("Array after deletion:\n");
    for (int i = lb; i <= ub; i++) 
    {
        printf("%d\n", arr[i]);
    }
}

void Deletion_at_end()
{
   if(ub<lb)
  {
    printf("Array is empty\n");
  } 
  else
  {
	ub--;
	printf("Array after deletion:\n");
   for (int i = lb; i <= ub; i++) 
    {
       printf("%d\n", arr[i]);
    }
  }
  printf("\n");
}

void Deletion_at_loc()
{
    if (ub < lb)
    {
        printf("Array is empty\n");
    }
    else
    {
        int loc;
        printf("Enter the location where to delete element: ");
        scanf("%d", &loc);
        if (loc < lb || loc > ub)
        {
            printf("Invalid location\n");
        }
        else
        {
            for (int i = loc; i < ub; i++)
            {
                arr[i] = arr[i + 1];
            }
            ub--;
            printf("Array after deletion:\n");
            for (int i = lb; i <= ub; i++)
            {
                printf("%d\n", arr[i]);
            }
        }
    }
    printf("\n");
}


