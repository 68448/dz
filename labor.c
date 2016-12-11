#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>
#include <string.h>
#include <math.h> 


#define BUFFERSIZE 1024


int intReverse ( int number )
{	
	
	float help = number;
	float decimal = 0;
	int lastInt = 0;
	float lastFloat = 0;
	int result;
	
	
	while ( help != 0 )
	{	
		help /= 10;
		decimal *= 10;
		decimal += (( help - floor(help) ) * 10);
		lastInt = ( help - floor(help) ) * 10;
		lastFloat = ( help - floor(help) ) * 10;
		
		
		help = floor(help);
		
	}
	
	////���������� 9 ���������
	if ( lastFloat == 9 || lastFloat == 7 )
		lastInt++;
		
	
	//������������ � ����������
	result = (int) decimal;
	result += -(result % 10) + lastInt;
	return result;
	
}

// �� ����  � ���
int charToInt( char symbol )
{
	switch (symbol)
	{

		case '0':
			return 0;
			break;

		case '1':
			return 1;
			break;

		case '2':
			return 2;
			break;

		case '3':
			return 3;
			break;

		case '4':
			return 4;
			break;

		case '5':
			return 5;
			break;

		case '6':
			return 6;
			break;

		case '7':
			return 7;
			break;

		case '8':
			return 8;
			break;

		case '9':
			return 9;
			break;

		default:
			return -1;
			break;

	}
}

int main (void)
{
	srand(time(0));

	//��� ������
	char buffer[BUFFERSIZE];
	int charCount = 0;

	// ��� 4 �������
	char *numbersString = NULL;
	int xCount = 0;
	int error = 1;
	int maxYCount = 0;
	int multiplizer = 1;


	// ���� ������ � �������
	int m = rand() % 2 + 3;
	int n = rand() % 2 + 4;

	int x = 0;
	int y = 0;
	int i = 0;

	// ��� ����������� ����
	int minValue = 100;
	int minCount = 0;

	////���������� ��� ��������
	int minRepeatX = 0;
	int minRepeatY = 0;

	int array[m][n];

	int tmp = 0;
	int tmp2 = 0;
	int tmp3 = 0;
	int tmp4 = 0;
	int tmp5 = 0;

	for ( x = 0; x < m; x++ )
	{
		for ( y = 0; y < n; y++ )
		{

			array[x][y] = rand() % 100;

			if ( array[x][y] < minValue )
			{
				minValue = array[x][y];
				minCount = 1;
			}

			else if(array[x][y] == minValue)
				minCount++;

		}
	}

//������ ����������� ���������
	int minCoord[minCount * 2];

	//��������� ����������

	printf("Number 1\n\n");

	for ( x = 0; x < m; x++ )
	{	
		for ( y = 0; y < n; y++ )
		{
			printf("%d\t", array[x][y]);
		}

		printf("\n");
	}

	// ������ ������� 1 � ��������� ������

	for ( y = 0; y < n; y++ )
	{
		tmp = array[0][y];
		array[0][y] = array[m - 1][n - y -1]; 
		array[m - 1][n - y -1] = tmp;

	}

	// �����

	printf("\nNumber 2\n\n");

	tmp = 0;

	for ( x = 0; x < m; x++ )
	{	
		for ( y = 0; y < n; y++ )
		{
			printf("%d\t", array[x][y]);

			if ( array[x][y] == minValue )
			{
				minCoord[tmp] = x;
				tmp++;

				minCoord[tmp] = y;
				tmp++;

			}
		}

		printf("\n");
	}

	printf("\n");

	//�//������� ���������� ����������
	for ( x = 0; x < (minCount * 2 - 2); x += 2 )
	{
		for ( y = 0; y < minCount; y+=2 )
		{
			if ( minCoord[x] == minCoord[y])
				minRepeatX++;
		}
	}

	for ( x = 1; x < (minCount * 2 - 1); x += 2 )
	{
		for ( y = 0; y < minCount; y+=2 )
		{
			if ( minCoord[x] == minCoord[y])
				minRepeatY++;
		}
	}

	int minArrayX = m - minCount + minRepeatX;
	int minArrayY = n - minCount + minRepeatY;

	int minArray[minArrayX][minArrayY];

	// ��������� ���������
	tmp = 0;
	tmp2 = 0;
	tmp3 = 0;
	tmp4 = 0;
	tmp5 = 0;


    for (x = 0; x < m; x++ ) 
    {  
       
        tmp4 = 0;
        tmp3 = 0;
       
       // �������� ������������ � ������������ ��������, ���� ����, �� ��������� ��������
        for (tmp = 0; tmp < minCount * 2; tmp+= 2)
            if ( x == minCoord[tmp] ) tmp4 = 1;

       
        if ( tmp4 == 1 ) continue;
 
        for (y = 0; y < n; y++ ) 
        {
           
            tmp5 = 0;

// �������� ������������ � ������������ ��������, ���� ����, �� ��������� ��������            for (tmp = 1; tmp < minCount * 2; tmp+= 2) 
            	if ( y == minCoord[tmp]) tmp5 = 1;

            if ( tmp5 == 1 ) continue;

                      // ���� �����, �� ��� ��
            minArray[tmp2][tmp3] = array[x][y];
            tmp3++;
        }

        tmp2++;
    }


	printf("Number 3\n");
	// �����
	for ( x = 0; x < minArrayX; x++ )
	{
		for( y = 0; y < minArrayY; y++ )
		{
			printf("%d\t", minArray[x][y]);
		}

		printf("\n");
	}

	// ����� 4


/*������� ����� ��������*/
	printf("\n\nInput string!\n");
	charCount = strlen(fgets(buffer, BUFFERSIZE , stdin));

	numbersString = (char *)malloc(charCount * sizeof(char));

	do
	{
		*(numbersString + i) = *(buffer + i) ;
		i++;
	}
	while ( *(buffer + i) != '\0' );

	i = 0;
	// ���� �� � ����� �����
	while ( *(numbersString + i ) != '\0' )
	{
		if ( *(numbersString + i ) == '.' )
		{	
			error = 0;
			break;
		}
		i++;
	}

		// ��������� �� ������� �� ��� ��������
	for ( i = 0; i < charCount; i++ )
	{	
		if( !(*(numbersString + charCount) == '.' || *(numbersString + charCount) == ',' || *(numbersString + charCount) == ' ' || *(numbersString + charCount) >= '0' || *(numbersString + charCount) <= '9') )
		{
			error = 1;
			break;
		}
	}


	if ( !error )
	{
		//�������� �������

		// ���������� ���������� �����
		i = 0;
		while ( *(numbersString + i ) != '.' )
		{
			if ( *(numbersString + i ) == ',' )
				xCount++;
			i++;
		}

		//�� � ����� ����� ��� ���� ������
		xCount++;

		//������� � ��������� ������
		int yCount[xCount];

		for ( i = 0; i < xCount; i++ )
			yCount[i] = 0;

		// ������� ��������� ������
		i = 0;
		tmp = 0;

		while ( *(numbersString + i ) != '.'  )
		{
			if ( *(numbersString + i ) == ',' && *(numbersString + i + 1 ) == ' ' )
			{
				yCount[tmp]++;
				tmp++;
			}

			if (i != 0)
			{
				if ( *(numbersString + i ) == ' ' && *(numbersString + i - 1 ) != ',' )
					yCount[tmp]++;
					
			}

			if ( *(numbersString + i + 1 ) == '.' )
			{
				yCount[tmp]++;
			}

			i++;
		}

		// ������� ��������� ������
		for ( i = 0; i < xCount; i++ )
		{
			if ( yCount[i] > maxYCount )
				maxYCount = yCount[i];
		}

		printf("\n");

		// ������� ��������� ������

		int stringArray[xCount][maxYCount];

	// ������� ��������� ������
		for ( x = 0; x < xCount; x++)
		{
			for (y = 0; y < maxYCount; y++ )
			{
				stringArray[x][y] = 0;
			}
		}

		tmp = charCount - 1; 

		int currentSumbol = 0;

		for ( x = 0; x < xCount; x++)
		{	

			tmp2 = 0;

			for (y = 0; y < maxYCount; y++ )
			{	

				while ( *(numbersString + currentSumbol) != '.')
				{

					tmp3 = 0;
					multiplizer = 1;

					// ���� ����� �� ������� � �� ����� ������ ��� �� ������ ������
					if ( *(numbersString + currentSumbol) == ' ' || *(numbersString + currentSumbol) == ',' || currentSumbol == 0 )
					{	

						if ( currentSumbol != 0 )
							currentSumbol++;			

					// ���� ���������� ������ �� ��� �������, ������ �� � ������ ������, �� �������� ��� � ������
						if ( currentSumbol == 0 || *(numbersString + currentSumbol - 1) != ',' )
						{	
	
							i = currentSumbol; // ��������������� �������
							while ( 1 )
							{	

								// ����� �� ����� �����
								if ( *(numbersString + currentSumbol ) == ' ' )
								{
									tmp3 = 1;
									break;
								} 
								

								// ����� �� ����� ������
								else if( *(numbersString + currentSumbol ) ==  ',' ||  *(numbersString + currentSumbol ) ==  '.')
								{
									//��������������� ��������� ����� ��� ������ ��������� ������
									tmp2 = 1;
									break;
								}

								//������� ����� � ������, ���������� �� 10 � N �������, ����� �� �������� 
								stringArray[x][y] += charToInt( *(numbersString + currentSumbol ) ) * multiplizer;

								// ��������� �������� � 10 ���
								multiplizer *= 10;

								// �������� ������� ������ �� 1
								currentSumbol++;

							} 
						}

					}

					stringArray[x][y] = intReverse(stringArray[x][y]);

					// ���� ����� �� �����
					if ( tmp2 || tmp3 )
					{
						break;
					}

				}

				// ���� ����� �� �����
				if ( tmp2 )
					break;

			}
		}

		printf("\nNumber 4\n");

		for ( x = 0; x < xCount; x++)
		{
			for (y = 0; y < maxYCount; y++ )
			{
				printf("%d ", stringArray[x][y]);
			}

			printf("\n");
		}

		//��������� � ��������� ������

		// ��� ������ ��������, ����� �� �����������
		if ( minArrayX == maxYCount )
		{


        // ��������������� �������� �������

	    // ������� �������� �������

		int resultMatrix[minArrayX][maxYCount];

        for ( x = 0; x < minArrayX; x++ )
         {

            //�������� �������� �������
            for( y = 0; y < maxYCount; y++ )
            {
                resultMatrix[x][y] = 0;
            }

            tmp = 0;
            tmp2 = 0;
            y = 0;

            /*

            ������ ����������� ����, �� ����� ��� ���� �������

            */
            while ( 1 )
            {

            	/*

            	� ������� �������� �������� ������� ������� ������ � �������� 

				������� ������ ������� ���������� ��������� �������� ������ �������

				������� ������ � ������� � �������� ������ ������ �������

				������� ������ ������ ������� � �������� ������� ������ �������

            	*/
                resultMatrix[x][y] +=
                    minArray[x][tmp] * stringArray[tmp2][y];

                /*

                �������� ����� �� �� ��������� ������� ������ �������

                � �� ����� ������ ������ �������

                */
                if ( tmp == (minArrayX - 1) && tmp2 == (maxYCount - 1) )
                {
                	/*

                	������, �� ����� �� �� �� ��������� ������� ������ �������

                	���� ���, �� �������� ������� ������ ������ �������

                	� ������ ������ �������, ����� ���������� ������ ��������,

                	���� ����������� ������� ������� ������ ������� �� 1, 

                	����� ��� ���������� �� ����� ������� �������� �������,

                	� ����� �� �������� ��� ������ ������� ������ �������

                	*/
                    if ( y != (xCount - 1) )
                    {
                        tmp = 0;
                        tmp2 = 0;
                        y++;
                    }
                     //���� ��� �� ����� �� ����� ���������, ��������
                    else
                    {
                        break;
                    }
                }
               /*

                ����������� ������� �������� ������ ������� 

                � ������� ����� ������ �������

                */
                else
                {
                    tmp++;
                    tmp2++;
                }

            }
         }

       // ����������� �������
         printf("\n Result Matrix\n");

         for ( x = 0; x < minArrayX; x++ )
         {
         	for ( y = 0; y < maxYCount; y++ )
         	{
         		printf("%d\t", resultMatrix[x][y]);
         	}
         	printf("\n");
         }

		}
		else
			printf("\nIncorrect matrix\n");
	}

	else
		printf("\nIncorrect string\n");
	



	system("PAUSE");
	return 0;
}
